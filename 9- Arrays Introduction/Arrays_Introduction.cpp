#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n;

    cin>>n;

    //Entering space separated n no of integers
    int nos[1000];

    for(int i=0; i<n; i++)
    {
        cin>>nos[i];
    }

    //Printing entered nos in reverse order
    for( int j=n-1; j>=0; j--)
    {
        cout<<nos[j]<<" ";
    }
}

