//
//  main.c
//  Task 3
//
//  Created by Meghna Iyer on 10/8/19.
//  Copyright © 2019 Meghna Iyer. All rights reserved.
//

#include<stdio.h>
int main()
{
    int a,b,c,sum,avg;
    printf("Enter the marks of 3 subjects :  ");
    scanf("%d %d %d", &a, &b, &c);
    sum = a+b+c;
    avg = sum/3;
    printf("The sum of the marks is %d and their average is %d.", sum, avg);
}
