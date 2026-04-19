#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int x1,x2,x3;
    cin >> x1 >> x2 >> x3;
    int mx,mn;
    mx = max(x1,max(x2,x3));
    mn = min(x1,min(x2,x3));
    int mid = x1+x2+x2;
    mid = mid - mx - mn;

    cout <<(mid-mn)+(mx-mid);

}

int main() {
    fast_io;

    int t = 1;
    // cin >> t;
    while(t--) solve();

    return 0;
}