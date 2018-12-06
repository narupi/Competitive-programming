#include<bits/stdc++.h>
using namespace std;
int main(){
  int num[101];
  int flag[101]={0};
  int flag2[101]={0};
  int i=0;
  int max;
  while(cin>>num[i] ){
    flag[num[i]]++;
    flag2[num[i]]++;
    i++;
  }
  sort(flag2,flag2+i,greater<int>());
  max=flag2[0];
  //  cout <<max<<endl;
  for(int j=0;j<i;j++){
    if(max == flag[j]){
      cout <<j<<endl;
    }
  }
}
