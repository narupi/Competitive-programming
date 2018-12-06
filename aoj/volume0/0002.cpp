#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main(){
  int a,b;
  while(cin >> a >> b ){
    int n=a+b;
    int count=0;
    while(n){
      n/=10;
      count++;
    }
    cout << count <<endl;
  }
}
