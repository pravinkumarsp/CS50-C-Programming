// Online C compiler to run C program online
#include<cs50.h>
#include<stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }while (n <1 || n>50);

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("#");
            // printf("%d %d ,", i, j);
        }
        printf("\n");
    }
}
