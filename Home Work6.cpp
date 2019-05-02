//
//  main.cpp
//  Home Work 6
//
//  Created by Ho Tsung Kai on 2019/3/22.
//  Copyright © 2019 Ho Tsung Kai. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    int num;
    printf("請輸入西元年份:");
    scanf("%d",&num);
    
    if(num/4 , num/400 == 0 )
    {
        if(num/100 != 0)
           printf("您輸入年份是閏年\n");
        else
            printf("您輸入的年份不是閏年\n");
    }
    else
        printf("您輸入年份不是閏年\n");
    return 0;
}
