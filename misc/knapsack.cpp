#include<bits/stdc++.h>
using namespace std;

int n,w;
int vi[101];
int wi[101];
int dp[101][10001];

int solve(int idx, int weight) {
    
    if(dp[idx][weight] != -1) return dp[idx][weight];

    if(idx == n) return 0;

    if(weight-wi[idx] >= 0) {
        dp[idx][weight] = max( solve(idx + 1, weight), solve(idx + 1, weight - wi[idx]) + vi[idx]);
        return dp[idx][weight];
    }else {
        return dp[idx][weight] = solve(idx + 1, weight);
    }
}

int main() {

    memset(dp, -1, sizeof dp );

    cin >> n >> w;
    
    for (int i = 0; i < n; i++) {
        cin >> vi[i] >> wi[i];
    }

    cout << solve(0, w) << endl;
}
