//
//  main.c
//  Task 7
//
//  Created by Meghna Iyer on 10/30/19.
//  Copyright © 2019 Meghna Iyer. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main()
{
    char word[20], reverse[20];
    int i, j, length, flag;
    flag = 0;
    
    printf("\n Enter the word in small letters :  ");
    scanf("%s",word);
    
    length = strlen(word);
    j = 0;
    
    for(i = length - 1; i >= 0; i--)
    {
        reverse[j++] = word[i];
    }
    reverse[i] = '\0';
    
    for(i = 0; i < length; i++)
    {
        if(word[i] != reverse[i])
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        printf("\n %s is a Palindrome.", word);
    }
    else
    {
        printf("\n %s is Not a Palindrome.", word);
    }
}
