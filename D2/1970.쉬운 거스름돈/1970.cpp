#include <iostream>
using namespace std;

int money[] = {50000, 10000, 5000, 1000, 500, 100, 50, 10};
int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for(int t=1; t<=T; t++) {
        cout << '#' << t << '\n';
        int n; cin >> n;
        for(const auto& cur : money) {
            cout << n/cur << ' ';
            n %= cur;
        }
        cout << '\n';
    }
    return 0;
}