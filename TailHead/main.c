//
//  main.c
//  TailHead
//
//  Created by Ivan Aranda on 28-05-20.
//  Copyright © 2020 Ivan Aranda. All rights reserved.
//

#include <stdio.h>

void fun(int n)
{
     if(n>0)
     {
         
         printf("%d ",n);//this will be executted in the ascending calling phase
         fun(n-1);//recursive call to function
         // printf("%d ",n);//this will be executted in the descending returning phase

     }
}
int main() {
     int x=3;

     fun(x);//first call to function
     return 0;
}
