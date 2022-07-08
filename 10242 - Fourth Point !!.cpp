#include <iostream>
#include <iomanip>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
#define PI acos(-1.0);      


void solve()
{
    double x1, y1, x2, y2, x3, y3, x4, y4; 
    double e, d;
    while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4)
    {
        if(x1 == x3 && y1 == y3)
        {
            e = x2 + x4 - x1;
            d = y2 + y4 - y1;
        }

        else if(x1 == x4 && y1 == y4)
        {
            e = x2 + x3 - x1;
            d = y2 + y3 - y1;
        }

        else if(x2 == x3 && y2 == y3)
        {
            e = x1 + x4 - x2;
            d = y1 + y4 - y2;
        }

        else
        {
            e = x1 + x3 - x2;
            d = y1 + y3 - y2;
        }
        printf("%.3lf %.3lf\n", e, d);
    }
}


int main()
{
    solve();
}
