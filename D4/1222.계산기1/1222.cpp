#include <iostream>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    for(int t=1; t<=10; t++) {
        int ans = 0;
        int l; cin >> l;
        string exp; cin >> exp;
        for(const auto& ch : exp)
            if(ch != '+')
                ans += (ch-'0');
        cout << '#' << t << ' ' << ans << '\n';
    }
    return 0;
}