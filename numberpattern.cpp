#include<iostream>
using namespace std;

int main()
{
    int n, i, j, k, x, y, z;
    cin >> n;
    x=1;
    y=0;
    for(i=n; i>=1; i--)
    {
        k=n;
        for(j=1; j<=n; j++)
        { 
            cout << k;
            if(k>i)
            {
                k--;
            }
        }
        k=i;
        if(k==1)
        {
            k++;
        }
        for(j=2; j<n; j++)
        {    
            cout << k;
            if(k<n && k>1)
            {
                k++;
            }
            if(j!=n-x && i!=n-y && k==n-y)
            {
                k=n-x;
            }
        } 
        if(n!=1)
        {
        cout << n; 
        }  
        cout << endl;
        if(i < n)
        {
        x++;
        y++;
        }
    }
    for(i=2; i<=n; i++)
    {
        k=n;
        for(j=1; j<=n; j++)
        {
            cout << k;
            if(k>i)
            {
                k--;
            }
        }
        k=i;
        for(j=2; j<n; j++)
        {
            x=2;
            y=1;
            cout << k;
            if(k<n && k>1 && i<n-1)
            {
                k++;
            }
            for(z=n; z>=j; z--)
            {
            if(j!=n-x && i!=n-y && k==n-y)
            {
                k=n-x;
            }
            y++;
            x++;
            }
        }
        cout << n;   
        cout << endl;
    }
    return 0;
}    
