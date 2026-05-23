#include <iostream>

using namespace std;

int board[100][100];

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    for(int t=1; t<=10; t++) {
        int ignore; cin >> ignore;
        for(int i=0; i<100; i++)
            for(int j=0; j<100; j++)
                cin >> board[i][j];

        bool deadlock;
        int ans = 0;
        for(int c=0; c<100; c++) {
            deadlock = false;
            for(int r=0; r<100; r++) {
                int cur = board[r][c];

                if(cur == 1) {
                    if(!deadlock)
                        deadlock = true;
                } else if(cur == 2) {
                    if(deadlock) {
                        deadlock = false;
                        ans++;
                    } 
                }
            }
        }
        cout << '#' << t << ' ' << ans << '\n';
    }
    return 0;
}