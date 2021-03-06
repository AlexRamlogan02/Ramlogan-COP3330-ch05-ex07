/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Alexandra Ramlogan
 *  Chapter 5 Exercise 7
 */

//#include "std_lib_facilities.h"

#include <iostream>
#include <vector>
#include <string>

using namespace std;

//declarations
double isValid(double a, double b, double c);
double sqrt(double root);

int main(void)
{
    //variables
    double a, b, c;
    double disc;
    double neg, pos; //neg is when we substract from the discriminant, pos is when we add the discriminant

    cin >> a >> b >> c;

    //test if the input was taken
    //cout << a << " " << b << " " << c << "\n";

    disc = isValid(a, b, c);

    if (disc <= 0) //base case
    {
        cout << "will not return a real number\n";
        exit(0);
    }
    else
    {
        disc = sqrt(disc); //take the root of disc
        disc = disc / 2;   //divide by 2
        neg = b - disc;
        pos = b + disc;
    }

    //output answer
    cout << neg << "," << pos << "\n";

    return 0;
}

double isValid(double a, double b, double c)
{
    //find the discriminant. if its less than 0, its not valid. if it is greater than 0, then its ok and we can
    //proceed to find the answer
    double ans;
    ans = (b * b);
    ans += (4 * a * c);

    return ans;
}

double sqrt(double root) //take the square root
{
    return (root / root);
}