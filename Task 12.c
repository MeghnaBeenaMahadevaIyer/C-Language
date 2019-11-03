//
//  main.c
//  Task 12
//
//  Created by Meghna Iyer on 10/31/19.
//  Copyright © 2019 Meghna Iyer. All rights reserved.
//

#include <stdio.h>
int main()

{
char c='y';
do
{
    printf("Choose what you would like to do: \n 1. Celcius to Fahrenheit. \n 2. Fahrenheit to Celcius. \n 3. Exit. \n ");
    int choice=0;
    float cel,fah;
    scanf("%d", &choice);
    switch (choice)
    {
        case 1:
            printf("Enter the temperature in Celcius : ");
            scanf("%f", &cel);
            fah = (cel*(9/5)) + 32 ;
            printf("The entered temperature in Fahrenheit is %f.", fah);
            break;
        case 2:
            printf("Enter the temperature in Fahrenheit : ");
            scanf("%f", &fah);
            cel = (5/9)*(fah - 32);
            printf("The entered temperature in Celcius is %F.", cel);
            break;
        case 3:
            break;
    }
    printf("\n\n Would you like to continue? (y/n) : " );
    scanf("%s", &c);
}
    while (c=='y'||c=='Y');
        
}
