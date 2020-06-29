//Q Link:-
//https://www.hackerrank.com/challenges/variable-sized-arrays/problem


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    //Enter n and q
    int n,q;
    cin>>n>>q;

    //Creating index array to store the addresses of k arrays
    int *index[n];      // As there are n indexes

    int m=0;

    while(m<n)
    {
        int size;  // To set the size of k arrays
        cin>>size;

        index[m] = new int[size];    // So that index array stores address of k arrays

        for(int i=0; i<size; i++)
        {
            cin>>index[m][i];     // So as to input values at indexes of k arrays
        }


        m++;  // So that other indexes of index array points to others k arrays as well
    }

    int y=0;

    while(y<q)   // To input the queries and print the respective output
    {
        int i,j;

        cin>>i>>j;

        cout<<index[i][j]<<endl;   //To print the element of kth array which is present
                                   // at position index[i][j]

        y++;

    }

    return 0;
}

