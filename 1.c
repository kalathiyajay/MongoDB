#include<stdio.h>
int abc(int n)
{
 
    if (n == 0)
    {
        return 0;
    }
    
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return abc(n - 1) + abc(n - 2); 
    }
}
int main()
{
    int n=5;
 
        printf("%d, ", abc(n));
    return 0;
}
