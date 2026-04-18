#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    long long num;
    cin >> num;
    string n = to_string(num);

    for(int i = 0;i<n.size();i++){
        int d = n[i]-'0';
        d = min(d,9-d);
        if(i==0 && d==0) continue;
        n[i] = d+'0';
    }

    long long ans = stoll(n);
    cout << ans;
}

int main() {
    fast_io;

    int t = 1;
    // cin >> t;
    while(t--) solve();

    return 0;
}