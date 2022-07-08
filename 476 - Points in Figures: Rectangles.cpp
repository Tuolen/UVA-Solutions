#include <iostream>
#include <iomanip>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;


void solve()
{
    vector<double> x1, x2, y1, y2;
    char ch;
    while(1)
    {
        cin >> ch;
        if(ch == '*')
            break;
        double a, b, c, d;
        cin >> a >> b >> c >> d;
        x1.push_back(a);
        y1.push_back(b);
        x2.push_back(c);
        y2.push_back(d);
    }
    double X, Y;
    int j = 1;
    while(1)
    {
        cin >> X >> Y;
        if(X == 9999.9 && Y == 9999.9)
            break;
        bool is_cont = false;
        for(int i = 0; i < x1.size(); i++)
        {
            // printf("x1 = %ld, y1 = %ld\nx2 = %ld, y2 = %ld\n", x1[i], y1[i], x2[i], y2[i]);
            if(X > x1[i] && Y < y1[i] && X < x2[i] && Y > y2[i])
            {
                is_cont = true;
                cout << "Point " << j << " is contained in figure " << i + 1 << endl;
            }
        }
        if(!is_cont)
            cout << "Point " << j << " is not contained in any figure" << endl;
        j++;
    }
    
}


int main()
{
    solve();
}
