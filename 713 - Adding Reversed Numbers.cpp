#include <iostream>
#include <math.h>
using namespace std;
#define ll long long


void reverse(string& str)
{
    int n = str.size();
    for(int i = 0; i < n / 2; i++)
    {
        swap(str[i], str[n - i - 1]);
    }
}

void solve()
{
    int n;
    cin >> n;
    while(n--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int SIZE = s1.size() + s2.size() + 1;
        char res[SIZE];
        for(int i = 0;i < SIZE; i++)
            res[i] = '#';
   
        int carry = 0;
        int temp, i;
        for(i = 0;i < max(s1.size(), s2.size()); i++)
        {
            if(i > s1.size() - 1)
            {
                temp = (s2[i] - '0') + carry;
            }
            else if(i > s2.size() - 1)
            {
                temp = (s1[i] - '0') + carry;
            }
            else
            {
                temp = (s1[i] - '0') + (s2[i] - '0') + carry;
            }
            res[i] = (temp % 10) + '0';
            carry = temp / 10;
        }
        if(carry != 0)
            res[i] = carry + '0';
        i = 0;
        while(res[i] == '0')
            i++;
        while(res[i] != '#'){
            cout << res[i];
            i++;
        }
        cout << endl;
    }
}



int main()
{

    solve();
}
