#include<bits/stdc++.h>
using namespace std;
int main(){
  int ans=0;
  string opr;
  int n;
  int dice[6];
  //0=うえ,1=右,2=前,3=左,4=奥,5=下
  dice[0]=1;
  dice[1]=3;
  dice[2]=2;
  dice[3]=4;
  dice[4]=5;
  dice[5]=6;
  while(1){
    cin >>n;
    ans=1;
    if(n == 0)break;
    for(int i=0;i<n;i++){
      cin >>opr;
      if(opr == "North"){
    int ue=dice[2];
    int migi=dice[1];
    int mae=dice[5];
    int hidari=dice[3];
    int oku=dice[0];
    int sita=dice[4];
    dice[0]=ue;
    dice[1]=migi;
    dice[2]=mae;
    dice[3]=hidari;
    dice[4]=oku;
    dice[5]=sita;
    ans += dice[0];
      }
      if(opr == "East"){
    int ue=dice[3];
    int migi=dice[0];
    int mae=dice[2];
    int hidari=dice[5];
    int oku=dice[4];
    int sita=dice[1];
    dice[0]=ue;
    dice[1]=migi;
    dice[2]=mae;
    dice[3]=hidari;
    dice[4]=oku;
    dice[5]=sita; 
    ans += dice[0];
      }
      if(opr == "West"){
    int ue=dice[1];
    int migi=dice[5];
    int mae=dice[2];
    int hidari=dice[0];
    int oku=dice[4];
    int sita=dice[3];
    dice[0]=ue;
    dice[1]=migi;
    dice[2]=mae;
    dice[3]=hidari;
    dice[4]=oku;
    dice[5]=sita; 
    ans += dice[0];
      }
      if(opr == "South"){
    int ue=dice[4];
    int migi=dice[1];
    int mae=dice[0];
    int hidari=dice[3];
    int oku=dice[5];
    int sita=dice[2];
    dice[0]=ue;
    dice[1]=migi;
    dice[2]=mae;
    dice[3]=hidari;
    dice[4]=oku;
    dice[5]=sita;
    ans += dice[0];
      }
      if(opr == "Right"){
    int ue=dice[0];
    int migi=dice[4];
    int mae=dice[1];
    int hidari=dice[2];
    int oku=dice[3];
    int sita=dice[5];
    dice[0]=ue;
    dice[1]=migi;
    dice[2]=mae;
    dice[3]=hidari;
    dice[4]=oku;
    dice[5]=sita;
    ans += dice[0];
      }
      if(opr == "Left"){
    int ue=dice[0];
    int migi=dice[2];
    int mae=dice[3];
    int hidari=dice[4];
    int oku=dice[1];
    int sita=dice[5];
    dice[0]=ue;
    dice[1]=migi;
    dice[2]=mae;
    dice[3]=hidari;
    dice[4]=oku;
    dice[5]=sita;
    ans += dice[0];
      }
      
    }
    dice[0]=1;
    dice[1]=3;
    dice[2]=2;
    dice[3]=4;
    dice[4]=5;
    dice[5]=6;
 cout <<ans<<endl;
  }
  
}
