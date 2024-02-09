#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
   int times,a,i;
   long n, test, output=0;
   int arr[32];
   cin >> times;
   for(a=1; a<=times; a++)
   {
    cin >> n;
    test = n;
    for(i=0;i<32;i++)
    {
        arr[i]=test % 2;
        test = test / 2;
    }
    for(i=0;i<16;i++)
    {
        arr[31-i] = arr[31-i] + arr[i];
        arr[i] = arr[i] - arr[31-i];
        arr[31-i] = arr[31-i] - arr[i];
    }
    for(i=0;i<32;i++)
    {
    output = output + arr[i] * pow(2,i);
    }
    cout << output;
   }
   return 0;
}
