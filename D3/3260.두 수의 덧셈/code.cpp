#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for (int t = 1; t <= T; t++) {
        string a, b, tmp; cin >> a >> b;
        if (b.length() > a.length()) swap(a, b);
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        int la = a.length(), lb = b.length();
        int sum, carry = 0;
        string ans = "";
        for (int i = 0; i < la; i++) {
            sum = a[i] - '0';
            if (i < lb) sum += b[i] - '0';
            sum += carry;
            carry = sum / 10;
            ans.push_back(sum % 10 + '0');
        }
        if (carry) ans.push_back(carry + '0');
        reverse(ans.begin(), ans.end());
        cout << '#' << t << ' ' << ans << '\n';
    }
    return 0;
}
