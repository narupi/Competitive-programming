#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int num[3001];
    int m = 1;
    long long int max = -1;
    cin >>n;
    int a=-1;
    for(int i=0;i<n;i++){
        cin >>num[i];
        if(a<num[i])a=num[i];
    }
    for(long long int i=100000000;i>0;i--){
        long long int temp = 0;
        for(int j=0;j<n;j++){
            temp += i%num[j];    
        }
        if(temp >max){
            max = temp;
        }
    }
    cout <<max<<endl;
}



