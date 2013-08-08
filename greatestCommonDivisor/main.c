//
//  main.c
//  greatestCommonDivisor
//
//  Created by Keith on 8/7/13.
//  Copyright (c) 2013 Appology. All rights reserved.
//

#include <stdio.h>
int gcd(int x, int y);


int main(int argc, const char * argv[])
{
    
    int a, b;
    printf("Please enter two numbers: (e.g. 12 36) ");
    scanf("%d %d", &a, &b);
    printf("The greatest common denominator of %d and %d is %d", a, b, gcd(a, b));
    
    return 0;
}

//finds the greatest common divisor of two integers
int gcd(int m, int n)
{
    int remainder;
    for (; ;)
    {
        if (n == 0)
        {
            return m;
        }
        else
        {
            remainder = m % n;
            m = n;
            n = remainder;
        }
    }
    //if n is 0, stop: m contains the gcd
    //else, compute the remainder when m is divided by n. copy n into m and copy the remainder into n.
    //then repeat the process starting with testing whether n is 0
    
    return 0;
}