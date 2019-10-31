//
//  main.c
//  Task 8
//
//  Created by Meghna Iyer on 10/30/19.
//  Copyright © 2019 Meghna Iyer. All rights reserved.
//

#include <stdio.h>
int main()
{
    int a,i;
    printf("Enter an integer : ");
    scanf("%d",&a);
    for (i=1;i<11;i++)
    {
        printf("\n%d * %d = %d", a, i, a*i);
    }
}
