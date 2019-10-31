//
//  main.c
//  Task 13
//
//  Created by Meghna Iyer on 10/31/19.
//  Copyright © 2019 Meghna Iyer. All rights reserved.
//

#include <stdio.h>
int main()
{
    int a[20],i,n,large,small;
    printf("How many elements : ");
    scanf("%d",&n);
    printf("Enter the Array : ");
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    large=small=a[0];
    for(i=1;i<n;++i)
    {
        if(a[i]>large)
            large=a[i];
        if(a[i]<small)
            small=a[i];
    }
    
    printf("The largest element is %d and the smallest element is %d. ", large, small);
}
