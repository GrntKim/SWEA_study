#include <iostream>
#include <set>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.txt", "r", stdin);
    int T; 
    cin >> T;
    for (int t = 1; t <= T; t++) {
        cout << '#' << t << ' ';
        int N, cnt = 1;
        cin >> N;
        set<int> s;
        while (s.size() < 10) {
            int tmp = N * cnt++;
            while (tmp) {
                s.insert(tmp%10);
                tmp /= 10;
            }
        }
        cout << --cnt * N <<'\n';
    }
    return 0;
}