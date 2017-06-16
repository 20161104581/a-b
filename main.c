//
//  main.c
//  a+b
//
//  Created by 20161104581 on 17/6/6.
//  Copyright © 2017年 20161104581. All rights reserved.
//



#include <stdio.h>

int main()
{
    FILE *fp;
    fp=fopen("//Users//c20161104581//Desktop//xinxi.txt ","w+");
    int a[10];
    int i,s,j;
    for(i=1;i<=10;i++)
    {
        scanf("%d",&a[i]);·····
    }
    
    for(i=1;i<=9;i++)
        for(j=1;j<11-i;j++)
            
            if(a[j]>a[j+1])
            {
                s=a[j];
                a[j]=a[j+1];
                a[j+1]=s;
            }
    
    for(i=1;1<=10;i++)
        printf("%d\n",a[i]);
    fputs(fp,"%d",a[i]);
    
    
    return 0;
}



