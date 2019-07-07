#include<bits/stdc++.h>
using namespace std;

int num_sum(int n){
    int s=0;
    int dig;
    while(n){
        dig = n%10;
        s = s+dig;
        n = n/10;
    }

    return s;
}

int main(){
    int n;
    int min = 1000000;
    cin >>n;

    for(int i=1;i<n;i++){
        int temp = num_sum(i) + num_sum(n-i);
        if(temp <min )min = temp;

    }
    cout <<min<<endl;
}

