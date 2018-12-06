#include<bits/stdc++.h>
using namespace std;
//map<int,int >s;
int main(){
  int n,m;
  int s[100000]={0};
  int ans=0;
  cin >>n;
  for(int i=0;i<n;i++){
    cin >>s[i];
  }
  cin >>m;
  sort(s,s+n);
  for(int i=0;i<m;i++){
    int a;
    cin >>a;
    if(binary_search(s,s+n,a))ans++;
  }
  cout <<ans<<endl;
}
