//Q Link:-
//https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.

    int a,b;

    //Inputting two numbers
    cin>>a>>b;


    for(int n=a; n<=b; n++)
    {
        if( n==1)
        {
            cout<<"one\n";
        }


        else if(n==2)
        {
            cout<<"two\n";
        }

        else if(n==3)
        {
            cout<<"three\n";
        }

        else if(n==4)
        {
            cout<<"four\n";
        }

        else if(n==5)
        {
            cout<<"five\n";
        }

        else if(n==6)
        {
            cout<<"six\n";
        }

        else if(n==7)
        {
            cout<<"seven\n";
        }

        else if(n==8)
        {
            cout<<"eight\n";
        }

        else if(n==9)
        {
            cout<<"nine\n";
        }

        else
        {
            if(n%2==0)    //To check if n is even
            {
                cout<<"even\n";
            }

            if(n%2!=0)   //To check if n is odd
            {
                cout<<"odd\n";
            }

        }

    }

    return 0;


}

