//1. Write a program to print MySirG N times on the screen
#include<stdio.h>
int main()
{
    int n,i;
    printf("How many times do you want to print MySirg:");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
        printf("MySirG\n");
    return 0;
}

//2. Write a program to print the first N natural numbers.
#include<stdio.h>
int main()
{
    int n,i;
    printf("How many natural numbers do you want to print: ");
    scanf("%d", &n);
    printf("First %d natural numbers are: \n", n);
    for(i=1;i<=n;i++)
        printf("%d\n", i);
    return 0;
}

//3. Write a program to print the first N natural numbers in reverse order
#include<stdio.h>
int main()
{
    int n,i;
    printf("How many natural numbers do you want to print in reverse order: ");
    scanf("%d", &n);
    printf("First %d natural numbers in reverse order: \n", n);
    for(;n>0;n--)
        printf("%d\n", n);
    return 0;
}

//4. Write a program to print the first N odd natural numbers
#include<stdio.h>
int main()
{
    int n,i;
    printf("How many odd natural numbers do you want to print: ");
    scanf("%d", &n);
    printf("First %d odd natural numbers are: \n", n);
    for(i=1;i<=n;i++)
        printf("%d\n", i*2-1);
    return 0;
}

//5. Write a program to print the first N odd natural numbers in reverse order.
#include<stdio.h>
int main()
{
    int n,i;
    printf("How many odd natural numbers do you want to print in reverse order: ");
    scanf("%d", &n);
    printf("First %d odd natural numbers in reverse order: \n", n);
    for(;n>0;n--)
        printf("%d\n", n*2-1);
    return 0;
}

//6. Write a program to print the first N even natural numbers
#include<stdio.h>
int main()
{
    int n,i;
    printf("How many even natural numbers do you want to print: ");
    scanf("%d", &n);
    printf("First %d even natural numbers are: \n", n);
    for(i=1;i<=n;i++)
        printf("%d\n", i*2);
    return 0;
}

//7. Write a program to print the first N even natural numbers in reverse order
#include<stdio.h>
int main()
{
    int n,i;
    printf("How many even natural numbers do you want to print in reverse order: ");
    scanf("%d", &n);
    printf("First %d even natural numbers in reverse order: \n", n);
    for(;n>0;n--)
        printf("%d\n", n*2);
    return 0;
}

//8. Write a program to print squares of the first N natural numbers
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Squares of first %d natural numbers are: \n", n);
    for(i=1;i<=n;i++)
        printf("Square of %d: %d\n", i, i*i);
    return 0;
}

//9. Write a program to print cubes of the first N natural numbers
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Cubes of first %d natural numbers are: \n", n);
    for(i=1;i<=n;i++)
        printf("Cube of %d: %d\n", i, i*i*i);
    return 0;
}

//10. Write a program to print a table of N.
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter a number to print the table: ");
    scanf("%d", &n);
    printf("Table of %d: \n", n);
    for(i=1;i<=10;i++)
        printf("%d * %d = %d\n", n, i, n*i );
    return 0;
}
