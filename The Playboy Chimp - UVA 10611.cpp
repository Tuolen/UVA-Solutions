#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int get_up(vector<int> v, int key)
{
    int lo = 0;
    int hi = v.size() - 1;
    while(lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if(v[mid] <= key)
            lo = mid + 1;
        else if(v[mid] > key)
            hi = mid - 1;
    }
    if(lo >= v.size())
        return -1;
    return v[lo];
}

int get_down(vector<int> v, int key)
{
    int lo = 0;
    int hi = v.size() - 1;
    while(lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if(v[mid] < key)
            lo = mid + 1;
        else if(v[mid] >= key)
            hi = mid - 1;
    }
    if(hi < 0)
        return -1;
    return v[hi];
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++)
    {
        int height;
        cin >> height;
        v.push_back(height);
    }
    sort(v.begin(), v.end());
    int q;
    cin >> q;
    while(q--)
    {
        int num;
        cin >> num;
        int lower = get_down(v, num);
        int upper = get_up(v, num);
        if(lower == -1)
            cout << "X ";
        else
            cout << lower << " ";
        if(upper == -1)
            cout << "X" << endl;
        else
            cout << upper << endl;
    }
}
