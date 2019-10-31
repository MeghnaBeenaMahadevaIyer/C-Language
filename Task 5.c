//
//  main.c
//  Task 5
//
//  Created by Meghna Iyer on 10/29/19.
//  Copyright © 2019 Meghna Iyer. All rights reserved.
//

#include <stdio.h>
int main()
{
    int n, reverse = 0, remainder;
    printf("Enter the number : ");
    scanf("%d",&n);
    while (n!=0)
    {
        remainder = n%10;
        reverse = reverse*10 + remainder;
        n=n/10;
        
    }
    printf("The reverse of the given number is %d.",reverse);
}

