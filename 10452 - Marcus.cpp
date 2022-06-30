#include <vector>
#include <string>
#include <iostream>
using namespace std;
#define ll long long

string rep = "IEHOVA#";
int j_poss[3] = { -1, 1, 0 };
int i_poss[3] = { 0, 0, -1 };
string dir[3] = { "left", "right", "forth" };

void explorePath(vector<string> s, int src_i, int src_j, int dis_i, int dis_j, int m, int n, int pos) {
    if (s[src_i][src_j] == s[dis_i][dis_j]) {
        return;
    } 
    for (int k = 0; k < 3; k++)
    {
        int ix = src_i + i_poss[k], jx = src_j + j_poss[k];
        if (ix >= 0 && ix <= m - 1 && jx >= 0 && jx <= n - 1 && rep[pos] == s[ix][jx])
        {
            cout << dir[k];
            if(s[ix][jx] != '#')
                cout << " ";
            explorePath(s, ix, jx, dis_i, dis_j, m, n, pos + 1);          
        }
    }
}

void solve() {
    int n, m;
    int src_i, src_j, dis_i, dis_j;
    cin >> m >> n;
    vector<string> s;
    for (int i = 0; i < m; i++) {
        string b;
        cin >> b;
        s.push_back(b);
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (s[i][j] == '@')
            {
                src_i = i;
                src_j = j;
            }
            else if (s[i][j] == '#')
            {
                dis_i = i;
                dis_j = j;
            }
        }
    }
    explorePath(s, src_i, src_j, dis_i, dis_j, m, n, 0);
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)
        solve();
}
