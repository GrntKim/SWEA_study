#include <iostream>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for(int t=1; t<=T; t++) {
        int deg; 
        cin >> deg;
        cout << '#' << t << ' ' << deg / 30 << ' ' << (deg%30)*2 << '\n';
    }
    return 0;
}