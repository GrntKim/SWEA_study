#include <iostream>
#include <unordered_map>

using namespace std;

unordered_map<string, int> day = {
    {"MON",1}, {"TUE",2}, {"WED",3}, {"THU",4}, {"FRI",5}, {"SAT",6}, {"SUN",7}
};

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for(int t=1; t<=T; t++) {
        string input; cin >> input;
        cout << '#' << t << ' ' << (day[input] == 7 ? 7 : 7 - day[input]) << '\n';
    }
    return 0;
}