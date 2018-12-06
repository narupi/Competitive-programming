#include<bits/stdc++.h>
using namespace std;
char mapp[13][13];
int map_memo[13][13];
int mx[]={0,1,0,-1};
int my[]={1,0,-1,0};
int search(int x,int y);
 
int main(){
  while(1){
    int ans=0;
    memset(map_memo,0,sizeof(map_memo));
     
    for(int i=0;i<12;i++){
      cin >>mapp[i];
    }
    if(cin.eof())break;
    for(int i=0;i<12;i++){
      for(int j=0;j<12;j++){
    if(mapp[i][j] == '1' && map_memo[i][j] != 2){
      ans++;
      search(j,i);
    }
      }
    }
    cout <<ans<<endl;
  }
   
   
}
 
int search(int x,int y){
   
  for(int i=0;i<4;i++){
    int nx=x+mx[i];
    int ny=y+my[i];
    if(mapp[ny][nx] == '1' && map_memo[ny][nx]!=2 && nx >= 0 && nx <12 && ny >=0 && ny <12){
      map_memo[ny][nx] = 2;
      search(nx,ny);
    }
        
  }
}
