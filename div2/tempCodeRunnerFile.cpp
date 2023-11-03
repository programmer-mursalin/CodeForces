#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int x = s.length() / 2;
        
        if (s.length() % 2 == 0)
        {
            string a = s.substr(0, x);

            string b = s.substr(x, s.length());
            if (a == b && a[0]==a[1])
            {
                cout << "NO" << endl;
            }
            else
            {
                reverse(a.begin(), a.end());
                if (a == b)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
        else
        {
            string c = s.substr(0, x);
            string d = s.substr(x + 1);
            if (c == d)
            {
                cout << "NO" << endl;
            }
            else
            {
                reverse(c.begin(), c.end());
                if (c == d)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
    }
}


 