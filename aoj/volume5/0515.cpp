#include<iostream>
using namespace std;
main(){
  int a,b;
  int n;
  int x,y;
  int bad[17][17];
  while(1){
    cin >>a>>b;
    if(a==0 && b==0)break;
    for(int i=0;i<17;i++){
      for(int j=0;j<17;j++){
    bad[i][j]=0; //初期化
      }
    }
    cin >>n;
    for(int i=0;i<n;i++){
      cin >>x>>y;
      bad[y][x] = -1;//通れないところにチェック
    }
    //メインの処理↓
    bad[1][1] =1; //bad[1][1]:start に1を入れる
    for(int i=1;i<=b;i++){ //bad[1][1]は見ない
      for(int j=1;j<=a;j++){//bad[1][1]は見ない
    if(i == j && i == 1)continue; //forのループをスキップ
    if(bad[i][j] == -1){ 
      bad[i][j] = 0;//一度確認した通れないところはあとで足せるように0をいれる
      continue;//forのループをスキップ
    }
    bad[i][j] = bad[i][j-1] + bad[i-1][j];//badの←と↓を見る処理
      }
    }
    cout << bad[b][a] <<endl;//最後の２ルートの和
      }
       
    }
