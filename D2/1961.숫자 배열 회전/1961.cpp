#include <iostream>
using namespace std;

int board90[10][10];
int board180[10][10];
int board270[10][10];
int main(void) {
    ios::sync_with_stdio(0); cin.tie(0);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for(int t=1; t<=T; t++) {
        int n; cin >> n;
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                int x; cin >> x;
                board90[j][n-i-1] = x;
                board180[n-i-1][n-j-1] = x;
                board270[n-j-1][i] = x;
            }
        }

        cout << '#' << t << '\n';
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) cout << board90[i][j];
            cout << ' ';
            for(int j=0; j<n; j++) cout << board180[i][j];
            cout << ' ';
            for(int j=0; j<n; j++) cout << board270[i][j];
            cout << ' ';
            cout << '\n';
        }
    }
    return 0;
}