#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int n = get_int("print anumbers from 1 to 10");
    for(int i = 1; i<11; i++)
    {
        printf("%d,",i);
    }
}
