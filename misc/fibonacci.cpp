#include<bits/stdc++.h>
using namespace std;

int memo[1000];

int fibonacci(int n){
    if(n == 0 || n == 1) return 1;
    if(memo[n] != -1) return memo[n];
    return memo[n] = fibonacci(n - 1) + fibonacci(n -2);

}

int main(void) {
    int n;

    cin >> n;
    memset(memo,-1,sizeof memo);
    cout << fibonacci(n) <<endl;

    return 0;

}
