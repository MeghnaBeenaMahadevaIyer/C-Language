//
//  main.c
//  Task 4
//
//  Created by Meghna Iyer on 10/11/19.
//  Copyright © 2019 Meghna Iyer. All rights reserved.
//
#include <stdio.h>


int main()
{
    char str1[20], str2[20];
    int i, j;
    
    
    printf("Enter your first name: ");
    scanf("%s",str1);
    printf("Enter your last name: ");
    scanf("%s",str2);
   
    i=0;
    while(str1[i] != '\0')
    {
        i++;
    }
    str1[i] = ' ';
    i++;
    j = 0;
    while(str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';
    
    printf("Your full name is %s", str1);
}
