#include <iostream>
using namespace std;

int freq[100005];
int main(void) {
    ios::sync_with_stdio(0); cin.tie(0);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for(int t=1; t<=T; t++) {
        fill(freq,freq+100005,0);
        int n; cin >> n;
        int mn = 300000;
        while(n--) {
            int d; cin >> d;
            d = abs(d);
            if(d <= mn) {
                mn = d;
                freq[d]++;
            }
        }
        cout << '#' << t << ' ' << mn << ' ' << freq[mn] << '\n';
    }
    return 0;
}