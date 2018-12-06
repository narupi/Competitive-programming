#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,w;//n種類wナップサックの容量
  cin >>n>>w;
  int vi[n+1];//vi価値wi重さ
  int wi[n+1];
  int dp[n+1][w+1];
  memset(dp,0,sizeof(dp));//dp初期化
  for(int i=1;i<=n;i++){
    cin >>vi[i] >> wi[i];
  }
  //ナップに中身をいれる
  for(int i=1;i<=n;i++){//入れた順の価値vi[0]~~~~~
    for(int j=1;j<=w;j++){//総重量に対して入れるか入れないか   
      if(wi[i]>j){
    dp[i][j]=dp[i-1][j];
      }
      else {
    dp[i][j]=max(dp[i-1][j],vi[i]+dp[i-1][j-wi[i]]);
     }
      }
    }
    cout <<dp[n][w]<<endl;
}
