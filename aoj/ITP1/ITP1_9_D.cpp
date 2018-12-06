#include<bits/stdc++.h>
using namespace std;
int main(){
  string str;
  string ir;
  string p;
  int q;
  cin >>str;
  cin >>q;
  for(int i=0;i<q;i++){
    int a,b;
    cin >>ir;
    cin >>a>>b;
    if(ir == "replace"){
      cin >>p;
      int c=0;
      for(int i=a;i<=b;i++){
    str[i] = p[c];
    c++;
      }
    }
    else if(ir == "reverse"){
      int c=0;
      string sub;
      for(int i=b;i>=a;i--){
    sub[c] = str[i];
    c++;
      }
      c=0;
      for(int i=a;i<=b;i++){
    str[i] = sub[c];
    c++;
      }
    }
    else if(ir == "print"){
      for(int i=a;i<=b;i++){
    cout <<str[i];
      }
      cout <<endl;
    }
     
  }
   
}
