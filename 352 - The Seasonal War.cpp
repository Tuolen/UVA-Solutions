#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long

void explore(vector<string> v, int i, int j, int n, vector<vector<bool> >& visited)
{
    for(int ix = i - 1 ; ix <= i + 1; ix++)
    {
        for(int jx = j - 1; jx <= j + 1; jx++)
        {
            if(ix >= 0 && ix <= n - 1 && jx >= 0 && jx <= n - 1 && !visited[ix][jx] && v[ix][jx] == '1')
            {
                visited[ix][jx] = true;
                explore(v, ix, jx, n, visited);
            }

        }
    }
}


void solve(){
    int n;
    int cs = 1;
    while(cin >> n){
        int counter = 0;
        vector<string> v;
        for(int i = 0; i < n; i++) 
        {
            string s;
            cin >> s;
            v.push_back(s);
        }
        vector<vector<bool> > visited (n, vector<bool>(n, false));
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(v[i][j] == '1' && !visited[i][j])
                {
                    visited[i][j] = true;
                    explore(v, i, j, n, visited);
                    counter++;
                }

            }
        }
        cout << "Image number " <<  cs << " contains " << counter << " war eagles." << endl;
        cs++;
    }
   
}

int main(){
   solve();
}
