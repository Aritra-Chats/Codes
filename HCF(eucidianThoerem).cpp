#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int calcGCD(int n, int m){
    if(m>n)
    swap(n,m);
    if(m==0)
    return n;
    else
    return calcGCD(m,n%m);
}

int main()
{
    int n, m, gcd;
    cin >> n;
    cin >> m;
    gcd=calcGCD(n,m);
    cout << gcd;
    return 0;
}    