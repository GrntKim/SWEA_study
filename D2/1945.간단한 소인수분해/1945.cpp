#include <iostream>
#include <cstdio>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.txt", "r", stdin);
    int T;
    cin >> T;
    int p[5] = {2, 3, 5, 7, 11};
    for (int i = 1; i <= T; i++) {
        int n;
        cin >> n;
        cout << "#" << i << ' ';
        for (int i = 0; i < 5; i++) {
            int cnt = 0;
            while (!(n % p[i])) {
                cnt++;
                n /= p[i];
            }
            cout << cnt << ' ';
        }
        cout << '\n';
    }
}