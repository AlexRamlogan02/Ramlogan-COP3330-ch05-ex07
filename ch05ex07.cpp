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

//prototype
double isValid(double a, double b, double c);
double sqrt(double root);

int main(void)
{
    //variables
    double a, b, c;
    double disc;
    double neg, pos; //neg is when we substract from the discriminant, pos is when we add the discriminant

    cin >> a >> b >> c; //take in the input for a b and c

    disc = isValid(a, b, c);

    if (disc < 0) //base case
    {
        cout << "This will not return a valid answer\n";
        exit(0); //exit from program
    }
    else
    {
        disc = sqrt(disc); //take the root of disc
        disc = disc / 2;         //divide by 2
        neg = b - disc;
        pos = b + disc;
    }

    //test if the input was taken
    //cout << a << " " << b << " " << c << "\n";

    //output answer
    cout << neg << "," << "pos";

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