#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,w;//n����w�ʥåץ��å�������
  cin >>n>>w;
  int vi[n+1];//vi����wi�Ť�
  int wi[n+1];
  int dp[n+1][w+1];
  memset(dp,0,sizeof(dp));//dp�����
  for(int i=1;i<=n;i++){
    cin >>vi[i] >> wi[i];
  }
  //�ʥåפ���Ȥ򤤤��
  for(int i=1;i<=n;i++){//���줿��β���vi[0]~~~~~
    for(int j=1;j<=w;j++){//����̤��Ф�������뤫����ʤ���   
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
