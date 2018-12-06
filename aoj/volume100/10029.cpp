#include<bits/stdc++.h>
using namespace std;
 
int main(){
   
  priority_queue<int,vector<int>,greater<int> > queue;
   
  int n;
  cin >>n;
  int a;
  for(int i=0;i<n;i++){
    cin >>a;
    queue.push(a);
  }
  while(!queue.empty()){
    cout <<queue.top();
    queue.pop();
    if(!queue.empty())cout<<" " ;
      else cout<<endl;
  }
}
