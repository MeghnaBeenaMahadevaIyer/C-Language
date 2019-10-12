//
//  main.c
//  Task 1
//
//  Created by Meghna Iyer on 10/7/19.
//  Copyright © 2019 Meghna Iyer. All rights reserved.
//

#include <stdio.h>
int main()
{
    char name[10];
    int age;
    long int number;
    
    printf("Enter your name, age and phone number ");
    scanf("%s %d %ld", name, &age, &number);
    printf("Your name is %s, your age is %d and your phone number is %ld.", name, age, number);
}
    
