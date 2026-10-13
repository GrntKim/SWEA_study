#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for (int t = 1; t <= T; t++) {
        int h1, m1, s1, h2, m2, s2;
        string src1, src2; cin >> src1 >> src2;
        sscanf(src1.c_str(), "%d:%d:%d", &h1, &m1, &s1);
        sscanf(src2.c_str(), "%d:%d:%d", &h2, &m2, &s2);
        int carry = 0;

        int seconds = s2 - s1;
        if (seconds < 0) {
            seconds += 60;
            carry = -1;
        }

        int minutes = m2 - m1 + carry;
        if (minutes < 0) {
            minutes += 60;
            carry = -1;
        } else carry = 0;

        int hours = h2 - h1 + carry;
        if (hours < 0) hours += 24;
       
        cout << '#' << t << ' ';
        cout << setfill('0') << setw(2) << hours << ':';
        cout << setfill('0') << setw(2) << minutes << ':'; 
        cout << setfill('0') << setw(2) << seconds << '\n';
    }
    return 0;
}
