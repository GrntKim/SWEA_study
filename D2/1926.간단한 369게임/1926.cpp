#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int n; cin >> n;
    for(int i = 1; i <= n; i++) {
        int clap = 0, cur = i;
        while(cur) {
            if(cur%10 == 3 || cur%10 == 6 || cur%10 == 9) {
                clap++;
            }
            cur /=10;
        }
        if(!clap) cout << i << ' ';
        else {
            while(clap--) cout << '-';
            cout << ' ';
        }
    }
    return 0;
}