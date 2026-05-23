#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.txt", "r", stdin);
    int T;
    cin >> T;
    for (int i = 1; i <= T; i++) {
        int n, res = 0; 
        cin >> n;
        cout << '#' << i << ' ';
        for (int i = 1; i <= n; i++) {
            if (i%2!=0) res += i;
            else res -= i; 
        }
        cout << res << '\n';
    }
    return 0;
}