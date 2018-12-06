#include<iostream>
using namespace std;
int n,s;
int ans;
 
void dfs(int start,int d,int sum){
if(d==0){
if(s == sum)ans++;
return;
}
for(int i=start+1;i<=9;i++){
  dfs(i,d-1,sum+i);
}
}
 
 
int main(){
while(1){
cin >>n>>s;
if(n==0&&s==0)break;
for(int i=0;i<=9;i++){
dfs(i,n-1,i);
}
cout << ans <<endl;
ans=0;
}
}
