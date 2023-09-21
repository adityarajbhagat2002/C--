#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Aditya";
    for (int i = 0; i < s.length() - 2; i++)
    {
        cout << s.substr(i, i + 2) << endl;
    }
}