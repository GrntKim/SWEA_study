#include <iostream>
#include <cctype>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

#define VALUE first
#define CHILD second

double operate(double x, double y, string op) {
    if(op == "+") return x + y;
    else if(op == "-") return x - y;
    else if(op == "*") return x * y;
    else if(op == "/") return x / y;
    return -1;
}

bool isStringDigit(const string& str) {
    if(str.empty()) return false;
    for(const char& c : str) 
        if(!isdigit(c)) return false;
    return true;
}

double calculate(const vector<pair<string, pair<int, int>>>& graph, int head) {
    auto cur = graph[head];

    if(cur.CHILD == pair<int, int>{}) return (double) stoi(cur.VALUE);
    else {
        double x = calculate(graph, cur.CHILD.first);
        double y = calculate(graph, cur.CHILD.second);
        return operate(x, y, cur.VALUE);
    }
}

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    for(int t=1; t<=10; t++) {
        int n; cin >> n;
        vector<pair<string, pair<int, int>>> graph(n+1);
        for(int i=1; i<=n; i++) {
            int num; cin >> num;
            string val; cin >> val;
            graph[i].VALUE = val;
            if(!isStringDigit(val)) {
                int l, r; cin >> l >> r;
                graph[i].CHILD = {l, r};
            }
        }
        cout << '#' << t << ' ' << round(calculate(graph, 1)) << '\n';
    }
    return 0;
}