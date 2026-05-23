#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>
using namespace std;

string grades[] = {"A+", "A0", "A-", "B+", "B0", "B-", "C+", "C0", "C-", "D0"};
int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for(int t=1; t<=T; t++) {
        int n, k; cin >> n >> k;
        vector<pair<double, int>> v;
        for(int i=0; i<n; i++) {
            int x, y, z; cin >> x >> y >> z;
            double score = x * 0.35 + y * 0.45 + z * 0.2;
            v.push_back({score, i});
        }
        sort(v.begin(), v.end(), greater<>());
        for(int i=0; i<n; i++) {
            if(v[i].second == (k-1)) {
                cout << '#' << t << ' ' << grades[i/(n/10)] << '\n';
                break;
            }
        }
    }
    return 0;
}