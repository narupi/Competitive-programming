#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int res = 1 << 30;

    for (int i = 0; i <= 1; i++){
        int start = i;
        int count = 0;

        for (int j = 0; j < s.size(); j++){
            if(s[j] - '0' != start) count++;
            start = 1 -start;
        }
        res = min(res, count);
    }

    cout << res << endl;

}
