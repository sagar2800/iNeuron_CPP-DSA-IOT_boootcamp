//1. Write a program to print MySirG 5 times on the screen
#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=5;i++)
        printf("MySirG\n");
    return 0;
}

//2. Write a program to print the first 10 natural numbers.
#include<stdio.h>
int main()
{
    int i;
    printf("First 10 natural numbers: ");
    for(i=1;i<=10;i++)
        printf("%d ", i);
    return 0;
}

//3. Write a program to print the first 10 natural numbers in reverse order
#include<stdio.h>
int main()
{
    int i;
    printf("First 10 natural numbers in reverse order: ");
    for(i=10;i>0;i--)
        printf("%d ", i);
    return 0;
}

//4. Write a program to print the first 10 odd natural numbers
#include<stdio.h>
int main()
{
    int i;
    printf("First 10 odd natural numbers: ");
    for(i=1;i<=10;i++)
        printf("%d ", i*2-1);
    return 0;
}

//5. Write a program to print the first 10 odd natural numbers in reverse order.
#include<stdio.h>
int main()
{
    int i;
    printf("First 10 odd natural numbers in reverse: ");
    for(i=10;i>0;i--)
        printf("%d ", i*2-1);
    return 0;
}

//6. Write a program to print the first 10 even natural numbers
#include<stdio.h>
int main()
{
    int i;
    printf("First 10 even natural numbers: ");
    for(i=1;i<=10;i++)
        printf("%d ", i*2);
    return 0;
}

//7. Write a program to print the first 10 even natural numbers in reverse order
#include<stdio.h>
int main()
{
    int i;
    printf("First 10 even natural numbers in reverse order: ");
    for(i=10;i>0;i--)
        printf("%d ", i*2);
    return 0;
}

//8. Write a program to print squares of the first 10 natural numbers
#include<stdio.h>
int main()
{
    int i;
    printf("Squares of First 10 natural numbers are \n");
    for(i=1;i<=10;i++)
        printf("Square of %d: %d\n", i, i*i);
    return 0;
}

//9. Write a program to print cubes of the first 10 natural numbers
#include<stdio.h>
int main()
{
    int i;
    printf("Cubes of First 10 natural numbers are\n");
    for(i=1;i<=10;i++)
        printf("Cube of %d: %d\n", i, i*i*i);
    return 0;
}

//10. Write a program to print a table of 5.
#include<stdio.h>
int main()
{
    int i;
    printf("Table of 5 are\n");
    for(i=1;i<=10;i++)
        printf("5 * %d = %d\n", i,5*i);
    return 0;
}
