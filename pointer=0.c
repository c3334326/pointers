#include <stdio.h>

void zeroint(int *x);

int main(void)
{
    
    int testint = 100;
    
     printf("%d\n",testint);
    
    zeroint(&testint);
    
    printf("%d\n",testint);
}

void zeroint(int *x)
{
    *x = 0;
}