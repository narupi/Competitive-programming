#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    int ans=0;
    cin >>a>>b;
    if(b < a){
        ans = a-1;
    }else if(a!=1){
        ans = a;
    }else if(a == 1 && b == 1){
        ans = 1;
    }
    cout <<ans<<endl;


}

