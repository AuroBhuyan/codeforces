#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);

int mw;
void solve() {
    int M,C;
    cin >> M >> C;
    
    if(M>C) mw++;
    else if(M<C) mw--;
}

int main() {
    fast_io;

    int t = 1;
    cin >> t;
    while(t--) solve();

    if(mw == 0) cout<<"Friendship is magic!^^";
    else if(mw>0) cout<<"Mishka";
    else cout<<"Chris";

    return 0;
} 