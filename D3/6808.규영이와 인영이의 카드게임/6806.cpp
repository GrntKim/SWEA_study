#include <algorithm>
#include <iostream>

using namespace std;

int opp[9];
int me[9];
int me_cur[9];
bool selected[19];
int win;

bool battle(const int me[], const int opp[]) {
    int myscore = 0, oppscore = 0; 
    for(int i = 0; i < 9; i++) {
        if (me[i] > opp[i]) myscore += me[i] + opp[i];
        else oppscore += me[i] + opp[i];
    }
    return myscore > oppscore;
}

void bt(int len) {
    if (len == 9) {
        win += battle(opp, me_cur);
        return;
    }

    for (const int& cur : me) {
        if (selected[cur]) continue;

        selected[cur] = true;
        me_cur[len] = cur;
        bt(len+1);
        selected[cur] = false;
    }
}

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for (int t = 1; t <= T; t++) {
        win = 0;
        fill(selected, selected+19, false);
        for (int i = 0; i < 9; i++) {
            int n; cin >> n;
            opp[i] = n;
            selected[n] = true;
        }
        int idx = 0;
        for (int i = 1; i <= 18; i++) {
            if (!selected[i]) {
                me[idx++] = i;
            }
        }
        fill(selected, selected+19, false);
        bt(0);
        cout << '#' << t << ' ' << win << ' ' << 362880 - win << '\n';
    }
    return 0;
}
