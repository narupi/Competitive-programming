#include<bits/stdc++.h>
using namespace std;
 
int mx[]={0,1,0,-1};
int my[]={1,0,-1,0};
int map_data[109][7];
int mapp[109][109];
int mapck[109][109];
int w,h;
int xs,ys;
int xg,yg;
int n;
string ans;
void create(int color,int direction,int bx,int by);
void search(int y,int x,int c);
 
int main(){
  while(1){
    memset(mapp,0,sizeof(mapp));
    memset(mapck,0,sizeof(mapck));
    ans="NG";
    cin >>w>>h;
    if(w==0 && h==0)break;
    cin >>xs>>ys;
    cin >>xg>>yg;
    cin >>n;
    xs--, ys--, xg--, yg--;
    for(int i=0;i<n;i++){
      for(int j=0;j<4;j++){
    cin >>map_data[i][j];
      }
      map_data[i][2]--;
      map_data[i][3]--;
 
      create(map_data[i][0],map_data[i][1],map_data[i][2],map_data[i][3]);
    }
    search(ys,xs,mapp[ys][xs]);
     
    /* for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
    cout <<mapck[i][j];
      }
      cout <<endl;
      }*/
 
    cout <<ans<<endl;
  }
}
 
//マップを作る関数
void create(int color,int direction,int bx,int by){
   
  //横方向に長い場合
  if(direction == 0){
     
    for(int i=by;i<by+2;i++){
      for(int j=bx;j<bx+4;j++){
    mapp[i][j] = color;
      }
    }
     
  }
  //縦方向に長い場合
  else{
    for(int i=by;i<by+4;i++){
      for(int j=bx;j<bx+2;j++){
    mapp[i][j] = color;
      }
    }
  }
   
}
 
void search(int y,int x,int c){
   mapck[y][x] = 2;
  if(y==yg && x==xg)ans="OK";
   
  for(int i=0;i<4;i++){
    int nx=x+mx[i];
    int ny=y+my[i];
    if(mapp[ny][nx] == c && mapck[ny][nx] != 2 && ny >= 0 && ny <=h && nx >= 0 && nx <= w){
      search(ny,nx,c);
    }
  }
   
       
}
