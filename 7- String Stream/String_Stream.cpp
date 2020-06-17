//Q Link:-
//https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem


#include <sstream>
#include <vector>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> parseInts(string str)
{
    // Complete this function

    stringstream ss(str);

    char ch;                  //To store comma from string
    int i=0;                 //To store comma separated integers

    vector <int> integer;    //To store extracted strings as integer vector

    while(ss>>i)            // Extracting strings from ss to i
    {
        integer.push_back(i);
        ss>>ch;
    }

    return integer;

}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}

