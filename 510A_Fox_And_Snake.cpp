#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n,m;
    cin >> n >> m;
    int dir = 1;
    vector<vector<char>> grid(n,vector<char>(m,'.'));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!(i&1)) grid[i][j] = '#';
            else if(j==m-1 && dir){
                grid[i][m-1] = '#';
            }
            else if(j==0 && !dir){
                grid[i][0] = '#';
            }
        }
        if(i&1)
        dir = !dir;
    }

    for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<< grid[i][j];
            }
            cout<<"\n";
        }



}

int main() {
    fast_io;

    int t = 1;
    // cin >> t;
    while(t--) solve();

    return 0;
}