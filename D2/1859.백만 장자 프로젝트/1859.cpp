#include <iostream>
#include <vector>

using namespace std;

#define ll long long

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for(int t=1; t<=T; t++) {
        int n; cin >> n;
        vector<int> prices(n);
        for(int i=n-1; i>=0; i--) cin >> prices[i];

        int mx = prices[0];
        ll ans = 0;
        for(const auto& price : prices) {
            if(price > mx) mx = price;
            else ans += mx-price;
        }
        cout << '#' << t << ' ' << ans << '\n';
    }
    return 0;
}