#include<bits/stdc++.h>
using namespace std;
main(){
  int dx[]={0,1,0,-1};
  int dy[]={1,0,-1,0};
   
  char mapy[9][9];
 
 
  int n;
  cin >>n;
  for(int w=0;w<n;w++){
     
    for(int i=0;i<8;i++){
    cin >>mapy[i];
    }
     
    int x,y;
    cin >>x;
    cin >>y;
     
    x--;
    y--;
     
    typedef pair<int,int> zahyo;//typedef¤Çzahyo¤ò·¿¤Ë
    queue<zahyo> q;
     
    q.push(zahyo(y,x));
    mapy[y][x]='0';
    while(!q.empty()){
 
      zahyo mx=q.front();
      q.pop(); 
 
       
      for(int i=0;i<4;i++){
    for(int j=1;j<=3;j++){
      int nx=mx.second+dx[i]*j;
      int ny=mx.first+dy[i]*j;
      if(mapy[ny][nx]=='1' && nx<=7 && nx>=0 && ny>=0 &&ny<=7){
        mapy[ny][nx] = '0';
        q.push(zahyo(ny,nx));
      }
    }
      }
       
       
       
    }
 
    cout <<"Data "<<w+1<<':'<<endl;
     
    for(int i=0;i<8;i++){
      cout <<mapy[i]<<endl;
    }
 
 
  }
 
  }
