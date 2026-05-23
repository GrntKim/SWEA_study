#include <iostream>
#include <queue>

using namespace std;

void cycle(queue<int>& q) {
    while(true) {
        for(int i=1; i<=5; i++) {
            int cur = q.front()-i;
            q.push(cur < 0 ? 0 : cur);
            q.pop();
            if(cur <= 0) return;
        }
    }
}

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    for(int t=1; t<=10; t++) {
        int ignore; cin >> ignore;
        queue<int> q;
        for(int i=0; i<8; i++) {
            int n; cin >> n;
            q.push(n);
        }
        cycle(q);

        cout << '#' << t << ' ';
        while(!q.empty()) {
            cout << q.front() << ' ';
            q.pop();
        }
        cout << '\n';
    }
    return 0;
}