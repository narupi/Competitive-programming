#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin >>a>>b;

    int wa,sa,seki;
    wa = a+b;
    sa = a-b;
    seki = a*b;
    int ans = max(wa,sa);
    ans = max(ans,seki);
    cout <<ans<<endl;


}

