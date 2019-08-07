#include<bits/stdc++.h>
using namespace std;

int main(){
    //a:even , b:odd
    int n,max_a=0,max_b=0,a_i,b_i;
    int a[100001]={},b[100001]={};

    cin >> n;

    for (int i = 0; i < n/2; i++){
        int x,y;
        cin >> x >> y;
        a[x]++;
        b[y]++;
    }
    
    for (int i = 0; i < 100001; i++){
        if(max_a < a[i]){
            max_a = a[i];
            a_i = i;
        }
        if(max_b < b[i]){
            max_b = b[i];
            b_i = i;
        }
    }

    sort(a, a+100001, greater<int>());
    sort(b, b+100001, greater<int>());

    if(a_i == b_i)
        cout << min(n - a[0] - b[1], n - a[1] - b[0]) <<endl;
    else 
        cout << n - a[0] - b[0] << endl;

}
