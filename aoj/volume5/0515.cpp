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
    bad[i][j]=0; //�����
      }
    }
    cin >>n;
    for(int i=0;i<n;i++){
      cin >>x>>y;
      bad[y][x] = -1;//�̤�ʤ��Ȥ���˥����å�
    }
    //�ᥤ��ν�����
    bad[1][1] =1; //bad[1][1]:start ��1�������
    for(int i=1;i<=b;i++){ //bad[1][1]�ϸ��ʤ�
      for(int j=1;j<=a;j++){//bad[1][1]�ϸ��ʤ�
    if(i == j && i == 1)continue; //for�Υ롼�פ򥹥��å�
    if(bad[i][j] == -1){ 
      bad[i][j] = 0;//���ٳ�ǧ�����̤�ʤ��Ȥ���Ϥ��Ȥ�­����褦��0�򤤤��
      continue;//for�Υ롼�פ򥹥��å�
    }
    bad[i][j] = bad[i][j-1] + bad[i-1][j];//bad�΢��Ȣ��򸫤����
      }
    }
    cout << bad[b][a] <<endl;//�Ǹ�Σ��롼�Ȥ���
      }
       
    }
