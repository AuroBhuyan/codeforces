#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);

int val;
void solve() {
    string stmt;
    cin >> stmt;
    if(stmt == "++X" || stmt == "X++") val++;
    else val--;
}

int main() {
    fast_io;

    int t = 1;
     cin >> t;
    while(t--) solve();
    cout<< val;
    return 0;
}