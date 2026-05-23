#include <iostream>
using namespace std;

int d[15][15];
int main(void) {
    ios::sync_with_stdio(0); cin.tie(0);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for(int t=1; t<=T; t++) {
        int n; cin >> n;
        cout << '#' << t << '\n';
        for(int i=0; i<n; i++) {
            for(int j=0; j<=i; j++) {
                if(d[i][j]) {
                    cout << d[i][j] << ' ';
                    continue;
                }
                if(j==0 || j==i) d[i][j] = 1;
                else d[i][j] = d[i-1][j-1] + d[i-1][j];
                cout << d[i][j] << ' ';
            }
            cout << '\n';
        }
        int ans = 0;
    }
    return 0;
}