#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for(int t=1; t<=T; t++) {
        int h1, m1, h2, m2, ah, am;
        cin >> h1 >> m1 >> h2 >> m2;
        ah = ((m1 + m2) / 60 + h1 + h2) % 12;
        if(!ah) ah = 12;
        am = (m1 + m2) % 60;
        cout << '#' << t << ' ' << ah << ' ' << am << '\n';
    }
    return 0;
}