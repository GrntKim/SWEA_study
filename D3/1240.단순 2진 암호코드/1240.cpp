#include <iostream>
#include <unordered_map>

using namespace std;

unordered_map<string, int> dic = {
    {"0001101", 0}, {"0011001", 1}, {"0010011", 2},
    {"0111101", 3}, {"0100011", 4}, {"0110001", 5},
    {"0101111", 6}, {"0111011", 7}, {"0110111", 8},
    {"0001011", 9}
};

string codes[55];

int decode(const string codes[], int n, int m) {
    for(int i=0; i<n; i++) {
        for(int j=m-1; j>=0; j--) {
            if(codes[i][j] == '1') {
                int oddsum = 0, evensum = 0;
                for(int k=j-55, cnt = 1; k<=j; k += 7, cnt++) {
                    string cur = "";
                    for(int l=k; l<k+7; l++) cur += codes[i][l];
                    if(cnt%2==0) evensum += dic[cur];
                    else oddsum += dic[cur];
                }
                return (oddsum*3+evensum) % 10 == 0 ? oddsum+evensum : 0;
            }
        }
    }
}

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for(int t=1; t<=T; t++) {
        int n, m; cin >> n >> m;
        for(int i=0; i<n; i++)
            cin >> codes[i];
        cout << '#' << t << ' ' << decode(codes, n, m) << '\n';
    }
    return 0;
}