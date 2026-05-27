#include <iostream>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    for(int t=1; t<=10; t++) {
        int tc; cin >> tc;
        string tar, src; 
        cin >> tar >> src;

        int left = 0, right = tar.length()-1;
        int ans = 0;
        while(right < (int) src.length()) {
            bool match = true;
            for(int i=0; i<(int)tar.length(); i++) {
                if(tar[i] != src[i+left]) {
                    match = false;
                    break;
                }
            }
            if(match) ans++;
            left++;
            right++;
        }
        cout << '#' << tc << ' ' << ans << '\n';
    }
    return 0;
}