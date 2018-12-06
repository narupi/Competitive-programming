#include<bits/stdc++.h>
using namespace std;
main(){
  int n;
  cin >>n;
  string str[n];
  for(int i=0;i<n;i++){
    cin >>str[i];
  }
  string ans=str[0];
  for(int i=1;i<n;i++){
      if(str[i] < ans){
    ans = str[i];
      }
  }
  cout <<ans<<endl;
}
