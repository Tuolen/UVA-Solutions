#include <iostream>
#include <iomanip>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int a, b, c, d;
    pair <int, int> rec1LL, rec1UR, rec2LL, rec2UR;
    cin >> a >> b >> c >> d;
    rec1LL = make_pair(a, b);
    rec1UR = make_pair(c, d);
    cin >> a >> b >> c >> d;
    rec2LL = make_pair(a, b);
    rec2UR = make_pair(c, d);
    if(max(rec1LL.first, rec2LL.first) < min(rec1UR.first, rec2UR.first) && max(rec1LL.second, rec2LL.second) < min(rec1UR.second, rec2UR.second))
    {
        //overlap
        cout << max(rec1LL.first, rec2LL.first) << " " << max(rec1LL.second, rec2LL.second) << " "
        << min(rec1UR.first, rec2UR.first) << " " << min(rec1UR.second, rec2UR.second) << endl;
    }
    else
        cout << "No Overlap" << endl;

}


int main()
{
    int t; 
    cin >> t;
    while(t--)
    {
        solve();
        if(t != 0)
            cout << endl;
    }
}
