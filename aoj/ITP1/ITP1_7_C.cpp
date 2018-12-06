#include<iostream>
using namespace std;
main(){
  int r,c;
  cin >>r>>c;
  int gyo[c];
  for(int i=0;i<c;i++)gyo[i]=0;
  int hyo[r+1][c+1];
  int sum=0;
  int ans=0;
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      cin >>hyo[i][j];
      ans+=hyo[i][j];
      sum += hyo[i][j];
      gyo[j]+=hyo[i][j];
    }
    hyo[i][c] = sum;
    sum = 0;
  }
   
  /*  for(int i=0;i<c;i++){
    for(int j=0;j<r;j++){
      sum += hyo[i][j];
    }
    hyo[i][r] = sum;
    sum = 0;
    }*/
  for(int i=0;i<c;i++){
    hyo[r][i]=gyo[i];
  }
  hyo[r][c] = ans;
 
  for(int i=0;i<r+1;i++){
    for(int j=0;j<c+1;j++){
      cout << hyo[i][j];
      if(j!=c){
    cout << " ";
      }
    }
    cout << endl;
  }
 
}
