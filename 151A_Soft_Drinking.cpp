#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int  n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    cout<< (min((k*l)/nl,min(c*d,(p/np))))/n;
}

int main() {
    fast_io;

    int t = 1;
    // cin >> t;
    while(t--) solve();

    return 0;
}