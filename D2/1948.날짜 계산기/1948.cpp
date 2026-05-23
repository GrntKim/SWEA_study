#include <iostream>
using namespace std;

int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int m1, d1, m2, d2, t1, t2;
int main(void) {
    ios::sync_with_stdio(0); cin.tie(0);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for(int t=1; t<=T; t++) {
        cin >> m1 >> d1 >> m2 >> d2;
        t1 = t2 = 0;
        for(int i=1; i<m1; i++) t1 += days[i];
        t1 += d1;
        for(int i=1; i<m2; i++) t2 += days[i];
        t2 += d2;
        cout << '#' << t << ' ' << t2-t1+1 << '\n';
    }
    return 0;
}