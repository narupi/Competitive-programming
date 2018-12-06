#include<iostream>
using namespace std;
int balls[10];
bool ball(int f,int stack1,int stack2,int count){
  if(count == 0)return true;
  if(balls[f] > stack1){
    if( ball(f+1,balls[f],stack2,count-1))return true;
    else return false;
  }
  if(balls[f] > stack2){
    if( ball(f+1,stack1,balls[f],count-1))return true;
    else return false;
  }
  else if(balls[f]<stack1 && balls[f]<stack2)return false;
}
 
main(){
  int n;
  cin >>n;
  for(int k=0;k<n;k++){
    for(int j=0;j<10;j++){
      cin >>balls[j];
    }
    if( ball(0,0,0,10)){
      cout <<"YES"<<endl;
    }
    else {
      cout <<"NO"<<endl;
    }
  }
}
