#include<iostream>
#include<cstring>
using namespace std;
main(){
  char p[203],p2[203];
  cin >>p;
  strcpy(p2,p);
  strcat(p2,p);
  char s[203];
  cin >>s;
  if(strstr(p2,s)==NULL){
    cout << "No"<<endl;
  }
  else {
    cout <<"Yes"<<endl;
  }
}
