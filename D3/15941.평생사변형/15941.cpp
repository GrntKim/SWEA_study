#include <iostream>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int T; cin >> T; 
    for(int t=1; t<=T; t++) {
        int n; cin >> n;
        cout << '#' << t << ' ' << n*n << '\n';
    }
    return 0;
}