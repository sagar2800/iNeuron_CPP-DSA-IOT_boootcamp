// 1. Write a program to find the Nth term of the Fibonnaci series.
#include<stdio.h>
int main()
{
    int n,i,a = 0,b = 1;
    printf("Enter the number to get Fibonacci number:");
    scanf("%d", &n);
    for(i=2;i<=n;i++)
    {
        b = a + b;
        a = b - a;//0 1 1 2 3 5 8...
    }
    printf("%dth term of a Fibonacci series is %d", n,a);
    return 0;
}

//2. Write a program to print first N terms of Fibonacci series
#include <stdio.h>
int main()
{
    int n, first = 0, second = 1, next, c;
    printf("Enter the number of terms\n");
    scanf("%d",&n);
    printf("First %d terms of Fibonacci series are :-\n",n);
    for (c = 0; c < n; c++)
    {
        if (c <= 1)
        next = c;
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d\n",next);
    }
    return 0;
}

// 3. Write a program to check whether a given number is there in the Fibonacci
#include <stdio.h>
int main()
{
    int n, first = 0, second = 1, next, c, checkNum;
    printf("Enter the number to be checked if it exists in the Fibonacci series: ");
    scanf("%d", &checkNum);
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    for (c = 0; c < n; c++)
    {
        if (c <= 1)
            next = c;
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
        if (next == checkNum)
        {
            printf("%d is present in the Fibonacci series.\n", checkNum);
            return 0;
        }
    }
    printf("%d is not present in the Fibonacci series.\n", checkNum);
    return 0;
}

//4. Write a program to calculate HCF of two numbers
#include<stdio.h>
int main()
{
    int a,b,hcf = 1;
    printf("Enter two numbers to find hcf: ");
    scanf("%d %d", &a, &b);
    if(a > b)
    {
        a = a + b;
        b = a - b;
        a = a - b;
    }
    printf("Hcf of %d and %d is ", a, b);
    for(int i = 2; i <= b; i++)
    {
        
        if((a%i == 0) && (b%i == 0))
        {
            hcf *= i;
            a /= i;
            b /= i;
            i = 1;
        }
    }
    printf("%d",hcf);
    return 0;
}

//5. Write a program to check whether two given numbers are co-prime numbers or not
#include<stdio.h>
int main()
{
    int a,b,count = 0;
    printf("Enter two numbers to check co-prime numbers or not: ");
    scanf("%d %d", &a, &b);
    if(a > b)
    {
        a = a + b;
        b = a - b;
        a = a - b;
    }
    for(int i = 2; i <= b; i++)
    {
        if((a%i == 0) && (b%i == 0))
        {
           count++;
           break;
        }
    }
    if(count > 0)
        printf("It is not a co-prime number");
    else
        printf("It is a co-prime number");
    return 0;
}

//6. Write a program to print all Prime numbers under 100
#include<stdio.h>
int main()
{
    int i,j;
    printf("All prime numbers between 1 to 100 are: ");
    for(i = 2; i < 100; i++)
    {
        for(j = 2; j < i; j++)
            if(i % j == 0)
                break;
        if(j == i)
            printf("%d ", j);
    }
    return 0;
}

//7. Write a program to print all Prime numbers between two given numbers
#include<stdio.h>
int main()
{
    int a,b,i,j;
    printf("Enter two numbers to get the prime numbers between them: ");
    scanf("%d %d", &a, &b);
    if(a > b)
    {
        a = a + b;
        b = a - b;
        a = a - b;
    }
    printf("Prime numbers between %d to %d are: ", a,b);
    for(i = a+1; i < b; i++)
    {
        for(j = 2; j < i; j++)
            if(i % j == 0)
                break;
        if(j == i)
            printf("%d,", j);
    }
    return 0;
} 

//8. Write a program to find next Prime number of a given number
#include<stdio.h>
int main()
{
    int a,i,j;
    printf("Enter a number to get the next prime number: ");
    scanf("%d", &a);
    for(i = a + 1; ; i++)
    {
        for(j = 2; j < i; j++)
            if(i % j == 0)
                break;
        if(j == i)
            break;
    }
    printf("Next prime number is %d", j);
    return 0;
} 

//9. Write a program to check whether a given number is an Armstrong number or not
#include<stdio.h>
int main()
{
    int a,b,rem,sum = 0;
    printf("Enter a number to check if its is armstrong number or not: ");
    scanf("%d", &a);
    b = a;
    while(a > 0)
    {
        rem = a % 10;
        a /= 10;
        sum += rem * rem * rem;
    }
    if(sum == b)
        printf("%d is an armstrong number", sum);
    else
        printf("%d is not an armstrong number", b);
    return 0;
}

//10. Write a program to print all Armstrong numbers under 1000
#include<stdio.h>
int main()
{
    int i,j,rem,sum;
    printf("All armstrong number under 1000 are: ");
    for(i = 1; i < 1000; i++)
    {
        j = i;
        sum = 0;
        while(j > 0)
        {
            rem = j % 10;
            j /= 10;
            sum += rem * rem * rem;
        }
        if(sum == i)
            printf("%d,", sum);
    }
    printf("\b");
    return 0;
}
