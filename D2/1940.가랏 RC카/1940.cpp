#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for(int t=1; t<=T; t++) {
        int dis = 0, vel = 0;
        int n; cin >> n;
        while(n--) {
            int cmd, v; cin >> cmd; if(cmd) cin >> v;
            if(cmd == 1) vel += v;
            else if(cmd == 2) vel = vel < v ? 0 : vel-v;
            dis += vel;
        }
        cout << '#' << t << ' ' << dis << '\n';
    }
    return 0;
}