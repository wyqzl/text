//
//  main.cpp
//  text
//
//  Created by wyq on 15/11/11.
//  Copyright (c) 2015年 wyq. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a[4];
    int *p;
    a[0]=22;
    a[1]=33;
    a[2]=44;
    a[3]=55;
    p=a;
    printf("&a[0]=%x &a[1]=%x &a[2]=%x &a[3]=%x a=%x *p=%x",&a[0],&a[1],&a[2],&a[3],a,*p);
    printf("&a[0]=%x &a[1]=%x &a[2]=%x &a[3]=%x a=%x *p=%x",&a[0],&a[1],&a[2],&a[3],a,*p);

    
    
    
    
    return 0;
}
