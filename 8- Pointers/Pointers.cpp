//Q Link:-
//https://www.hackerrank.com/challenges/c-tutorial-pointer/problem

#include <cmath>
#include <stdio.h>
#include <cstdlib>

// Complete this function
void update(int *a,int *b)
{
    int a_value = *a;   //To store the original value of a

      *a = *a + *b;

      *b = std::abs(a_value - *b);
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;   //Pointers to store addresses

    scanf("%d %d", &a, &b);

    update(pa, pb);

    printf("%d\n%d", a, b);

    return 0;
}

