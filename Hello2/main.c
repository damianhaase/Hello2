//
//  main.c
//  Hello2
//
//  Created by Damian on 12/31/13.
//  Copyright (c) 2013 Damian. All rights reserved.
//

#include <stdio.h>

void SayHello(void);

int main (int argc, const char * argv[])
{
    SayHello();
    
    return 0;
}

void SayHello(void)
{
    printf("Hello, world!\n");
}