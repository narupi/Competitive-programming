#include<bits/stdc++.h>
using namespace std;

int find(int lim, int n, int data[]) {
    int ret = 0;

    for (int i = 1; i <= n; i++) {
        if(data[i] <= lim ) {
            ret = i;
            break;
        }
    }

    return ret;

}

int main() {
    int n,m;
    int A[1001];
    int B;
    int vote[1002];
    int ans, max = -1;

    memset(vote, 0, sizeof(vote));

    cin >> n >> m;
    
    //cost
    for(int i = 1; i <= n; i++) {
        cin >> A[i];
    }
    A[0] = -1;
    //judge
    for(int i = 0; i < m; i++) {
        cin >> B ;
        vote[ find(B, n, A) ]++;
    }

    for (int i = 1; i <= n; i++) {
        
        if(vote[i] > max) {
            ans = i;
            max = vote[i];
        }
    }

    cout << ans << endl;

    return 0;
}
