#include <iostream>
#include <math.h>
using namespace std;
#define ll long long


int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void solve()
{
    int n;
    while (cin >> n && n != 0)
    {
        float counter = 0, cn = 0;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (gcd(a[i], a[j]) == 1)
                    counter++;
                cn++;
            }
        }
        if (!counter)
            cout << "No estimate for this data set." << endl;
        else
        {
            double pi = sqrt((double)6*cn/counter);
            printf("%.6lf\n", pi);
        }
    }
}



int main()
{
    solve();
}
