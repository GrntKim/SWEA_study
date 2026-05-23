#include <iostream>
#include <string>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for(int t=1; t<=T; t++) {
        string s; cin >> s;
        int ans = 1;
        string ls, rs;
        do {
            ls = s.substr(0,ans);
            rs = s.substr(ans+1,ans);
            ans++;
        } while(ls != rs);
        cout << '#' << t << ' ' << ans << '\n';
    }
    return 0;
}