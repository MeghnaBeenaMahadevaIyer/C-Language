//
//  main.c
//  Task 9
//
//  Created by Meghna Iyer on 10/30/19.
//  Copyright © 2019 Meghna Iyer. All rights reserved.
//

#include <stdio.h>
int main()
{
    int a,i,fac=1;
    printf("Enter a number : ");
    scanf("%d", &a);
    for (i=a;i>0;i--)
    {
        fac = (fac*i);
    }
    printf("The factorial for the given number is %d.", fac);
}
