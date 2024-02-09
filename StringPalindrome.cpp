#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    int x, i, test, rev=0, arr[100],l;
    char t;
    cin >> x;
    string str = to_string(x);
    l = str.length();
    cout << str << endl;
    if(l % 2 == 0)
    {
        for(i=0;i<(l/2);i++)
        {
            t = str[i];
            str[i] = str[l-i-1];
            str[l-i-1] = t;
        }
    }
    else
    {
        for(i=0; i < ((l+1)/2)-1; i++)
        {
            t = str[i];
            str[i] = str[l-i-1];
            str[l-i-1] = t;
        }
    }
    cout << str << endl;
    if(to_string(x)==str)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}