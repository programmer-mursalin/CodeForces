#include <bits/stdc++.h>
using namespace std;

// const int N = 1e7 + 10;
// const long long int arr[N];
// string s;
// bool sorted = is_sorted(s.begin(), s.end());
// if (sorted)
// {
//     cout << "Sorted" << endl;
//     return;
// }

// bool cheak(const vector<long long int> &a)
// {
//     if (is_sorted(a.begin(), a.end()))
//     {

//         return true;
//     }
//     else
//     {

//         return false;
//     }
// }

bool all_elements_same(vector<long long int> &a)
{
    if (a.empty())
        return true; // An empty array can be considered to have all equal elements

    for (const int &element : a)
    {
        if (element != a[0])
        {
            return false;
        }
    }
    return true;
}

void solve()
{

    long long int n;
    cin >> n;
    vector<long long int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (all_elements_same(a))
    {
        cout << "NO" << endl;
        return;
    }

    // if (is_sorted(a.begin(), a.end()))
    // {
    //     cout << "YES" << endl;
    //     return;
    // }

    string s;
    long long x = -1;

    s.push_back('R');
    for (int i = n - 2; i >= 0; i--)
    {

        if (a[i] != a[i - 1])
        {

            x = i;j
            break;
        }
        s.push_back('R');
    }

    for (int i = 0; i <= x; i++)
    {
        s.push_back('B');
    }

    reverse(s.begin(), s.end());
    cout << "YES" << endl;
    for (int i = 0; i <= x; i++)
    {

        cout << s[i];
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
