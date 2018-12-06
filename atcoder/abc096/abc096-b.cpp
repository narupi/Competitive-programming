#include<bits/stdc++.h>
using namespace std;
int main(){
    int num[3],k;
    int ans = 0;
    cin >>num[0]>>num[1]>>num[2];
    cin >>k;

    sort(num,num+3);

    for(int i=0;i<k;i++){
        num[2] = num[2]*2;
    }
    for(int i=0;i<3;i++){
        ans += num[i];
    }
    cout <<ans<<endl;
}

