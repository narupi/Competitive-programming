#include<bits/stdc++.h>
using namespace std;

int main() {
    int w, h, n;
    int x,y,nx,ny,dx,dy;
    int ans = 0;

    cin >> w >> h >> n;
    cin >> nx >> ny;

    for (int i = 0; i < n - 1; i++) {
        cin >> x >> y;
        dx = nx - x; dy = ny - y;
        
        if( (dx >= 0 && dy >= 0) || (dx < 0 && dy < 0 ) ) {
            dx = abs(dx); dy = abs(dy);
            ans += max(dx, dy);
            dx = 0; dy = 0;
        }else { 
            dx = abs(dx); dy = abs(dy);
        }
        ans += dx; ans += dy;
        nx = x; ny = y;

    }

    cout << ans << endl;

    return 0;
}



