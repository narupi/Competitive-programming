#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int a[4];
    int ans=0;
    cin >>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    
    ans = a[1] - a[0];
    ans += a[2] - a[1];
        cout <<ans<<endl;


}
