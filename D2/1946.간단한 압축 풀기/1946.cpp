#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for(int t=1; t<=T; t++) {
        vector<char> v;
        int n; cin >> n;
        int cnt = 0;
        while(n--) {
            char ch; cin >> ch;
            int repeat; cin >> repeat;
            while(repeat--) {
                cnt++;
                v.push_back(ch);
                if(cnt%10 == 0) v.push_back('\n');
            }
        }
        cout << '#' << t << '\n';
        for(const auto& ch : v) cout << ch;
        cout << '\n';
    }
    return 0;
}