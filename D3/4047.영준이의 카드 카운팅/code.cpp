#include <iostream>

using namespace std;

int card[84][15];

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for (int t = 1; t <= T; t++) {
        string src; cin >> src;
        int len = src.length();
        bool error = false;
        for (int i = 0; i < 84; i++) 
            for (int j = 0; j < 15; j++) 
                card[i][j] = 0;
        for (int i = 0; i < len; i++) {
            int cur = src[i];
            if (cur == 'S' || cur == 'D' || cur == 'H' || cur == 'C') {
                int num = (src[i+1] - '0') * 10 + src[i+2] - '0';
                if (card[cur][num]) {
                    error = true;
                    break;
                }
                card[cur][num] = 1;
                card[cur][14]++;
            }
        }
        cout << '#' << t << ' ';
        if (error) cout << "ERROR" << '\n';
        else {
            cout << 13 - card['S'][14] << ' ';
            cout << 13 - card['D'][14] << ' ';
            cout << 13 - card['H'][14] << ' ';
            cout << 13 - card['C'][14] << '\n';
        }
    }
    return 0;
}
