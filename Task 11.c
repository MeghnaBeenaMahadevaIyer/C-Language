//
//  main.c
//  Task 11
//
//  Created by Meghna Iyer on 10/30/19.
//  Copyright © 2019 Meghna Iyer. All rights reserved.
//

#include <stdio.h>
#include <string.h>
struct book
{
    char title[30], author[20], genre[20];
};
int main()
{
    struct book b1;
    printf("Enter the title of the book : ");
    gets (b1.title);
    printf("Enter the name of the author : ");
    gets (b1.author);
    printf("Enter the genre of the book : ");
    gets (b1.genre);
    printf("\n\nDetails of the book \n Title  : %s \n Author : %s \n Genre  : %s ", b1.title, b1.author, b1.genre);
}
