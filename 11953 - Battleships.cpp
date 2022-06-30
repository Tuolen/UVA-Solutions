#include <vector>
#include <string>
#include <iostream>
using namespace std;
#define ll long long

int i_poss[4] = {0, 0, -1, 1};
int j_poss[4] = {-1, 1, 0, 0};

void explore(vector<string> a, int n, int src_i, int src_j, vector<vector<bool> >& visited)
{
    if(visited[src_i][src_j]){
        return;
    }
    visited[src_i][src_j] = true;
    for(int k = 0; k < 4; k++)
    {
        int ix = src_i + i_poss[k], jx = src_j + j_poss[k];
        if(ix >= 0 && ix <= n - 1 && jx >= 0 && jx <= n - 1 && a[ix][jx] != '.' && !visited[ix][jx])
        {
            //valid neighbor
            explore(a, n, ix, jx, visited);
        }
    }

}

int solve() {
    int n;
    cin >> n;
    vector<string> a;
    for(int i = 0; i < n; i++)
    {
        string s; cin >> s;
         a.push_back(s);
    }
    vector<vector<bool> > visited(n, vector<bool>(n, false));
    int counter = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(a[i][j] == 'x' && !visited[i][j]){
                explore(a, n, i, j, visited);
                counter++;
            }
        }
    }
    return counter;
}

int main() {
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++)
        cout << "Case " << i << ": " << solve() << endl;
}
