// Q Link:-
//https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.

    int x1;
    long x2;
    char x3;
    float x4;
    double x5;

    scanf("%d %ld %c %f %lf",&x1, &x2, &x3, &x4, &x5 );

                                      //Inputting variables of all data types in a
                                      //single line


    printf("%d\n%ld\n%c\n%f\n%lf", x1,x2,x3,x4,x5);

                                                          //Priting each variable in
                                                         //a new line
    return 0;
}

