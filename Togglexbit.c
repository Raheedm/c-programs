#include <stdio.h>
int bin(int n)
{
    if (n > 0)
    {
        bin(n / 2);
        printf("%d", n % 2);
    }
}
int toggle(int num, int l)
{ 
    return num ^ (1 << (l - 1));
}

void main()
{
    int num, l;
    int tog;
    

    printf("Enter an positive number: ");
    scanf("%d", &num);
    printf("\nThe binary num of %d is :", num);
    bin(num);
    printf("\nEnter bit to toggle: \n");
    scanf("%d", &l);
    tog = toggle(num, l);
    printf("\nThe number after toggling is:%d\n", tog);
    printf("The binary number after toggling is :");
    bin(tog);
}
/*
Written by 
Raheed Muzawar https://github.com/Raheedm/c-programs
*/
