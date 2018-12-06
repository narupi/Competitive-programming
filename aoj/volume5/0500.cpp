#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int a[10000];
    int b[10000];
    while(1){
    int ap=0;
    int bp=0;
    cin >>n;
    if(n==0)break;
    for(int i=0;i<n;i++){
        cin >>a[i]>>b[i];
        if(a[i] > b[i])ap += a[i] + b[i];
        else if(b[i] > a[i])bp += a[i]+b[i];
        else if(a[i] == b[i]){
            ap += a[i];
            bp += b[i];
        }
    }
    cout <<ap<<' '<<bp<<endl;
   }    
}
