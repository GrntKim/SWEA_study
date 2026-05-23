#include <iostream>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for(int t=1; t<=T; t++) {
        int n; cin >> n;
        cout << '#' << t << ' ';
        for(int i=0; i<n; i++) {
            cout << 1 << '/' << n << ' ';
        }
        cout << '\n';
    }
    return 0;
}