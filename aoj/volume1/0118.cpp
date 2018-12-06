#include<bits/stdc++.h>
using namespace std;
int h,w;
char hatake[101][101];
int ck[101][101];
int dx[]={1,0,-1,0};
int dy[]={0,-1,0,1};
 
void saiki(int y,int x,char z){
  ck[y][x] = 1;
   
  for(int q=0;q<4;q++){
    int nx = dx[q]+x;
    int ny = dy[q]+y;
    if(hatake[ny][nx]==z && ck[ny][nx] == 0 && nx<w && ny<h && 0<=nx && 0<=ny){ 
      saiki(ny,nx,hatake[ny][nx]);
    }
  }
  return ;
}
 
 
main(){
  while(1){
  cin >>h>>w;
  if(h==0 && w==0)break;
  for(int i=0;i<h;i++){
      cin >>hatake[i];
    }
  memset(ck,0,sizeof(ck));
  int c=0;
  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      if(ck[i][j] == 0){
    c++;
      saiki(i,j,hatake[i][j]);
      }
    }
  }
  cout << c<<endl;
  }
}
