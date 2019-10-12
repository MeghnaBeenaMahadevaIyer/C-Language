//
//  main.c
//  Task 2
//
//  Created by Meghna Iyer on 10/8/19.
//  Copyright © 2019 Meghna Iyer. All rights reserved.
//

#include <stdio.h>

int main()
{
    float c, f;
    printf("Enter the temperature in Celsius :  ");
    scanf("%f", &c);
    f = ((c*9)/5)+32;
    printf("The given temperature in Fahrenheit is %f.", f);
}
