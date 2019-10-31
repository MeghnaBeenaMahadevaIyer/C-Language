//
//  main.c
//  Task 6
//
//  Created by Meghna Iyer on 10/29/19.
//  Copyright © 2019 Meghna Iyer. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main()
{
    int number, original, remainder, n=0, result=0;
    printf("Enter the number : ");
    scanf("%d", &number);
    original = number;
    while (original!=0)
    {
        original = original/10;
        n++;
    }
    original = number;
    while (original!=0)
    {
        remainder = original%10;
        result = result + pow(remainder, n);
        original = original/10;
    }
    if (result==number)
        printf("The given number is an Armstrong number.");
    else
        printf("The given number is not an Armstrong number.");
}


