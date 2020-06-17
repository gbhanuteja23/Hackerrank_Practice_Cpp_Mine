//Q Link:-
//https://www.hackerrank.com/challenges/c-tutorial-functions/problem


#include <algorithm>
#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d)
{  /*
    int max =a;

    if(a>b && a>c && a>d)
    {
        max=a;
    }

    else if(b>a && b>c && b>d)
    {
        max=b;
    }

    else if(c>a && c>b && c>d)
    {
        max=c;
    }

    else
    {
        max=d;
    }

    return max;
    */

    //maximum can also be calulated as:-
    int max= std::max({a,b,c,d});          //std::max() is a standard C++ function to
                                           //find maximum out of given nos

    return max;
}

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}

