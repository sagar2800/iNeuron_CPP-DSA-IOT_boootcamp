//1. Write a function to calculate LCM of two numbers. (TSRS)
#include<stdio.h>
int lcm(int,int);
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Lcm of %d and %d: %d", a,b,lcm(a,b));
    return 0;
}
int lcm(int a, int b)
{
    int i = 2,lcm = 1;
    while(i <= a && i <= b)
    {
        if((a%i==0) && (b%i==0))
        {
            lcm *= i;
            a = a / i;
            b = b / i;
        }
        else
            i++;
    }
    return lcm * a * b;
}
//2. Write a function to calculate HCF of two numbers. (TSRS)
#include<stdio.h>
int hcf(int,int);
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Hcf of %d and %d: %d", a,b,hcf(a,b));
    return 0;
}
int hcf(int a, int b)
{
    int i, hcf = 1;
    for(i = 2; i <= a && i <= b; i++)
    {
        if((a % i == 0) && (b % i == 0))
            hcf = i;
    }
    return hcf;
}
//3. Write a function to check whether a given number is Prime or not. (TSRS)
#include<stdio.h>
int check_prime_num(int);
int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    if(check_prime_num(num))
        printf("%d is a prime number", num);
    else
        printf("%d is not a prime number", num);
    return 0;
}
int check_prime_num(int n)
{
    int i;
    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
            return 0;
    }
    if(i == n)
        return 1;
}
//4. Write a function to find the next prime number of a given number. (TSRS)
#include<stdio.h>
int next_prime_num(int);
int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    printf("Next prime number: %d",next_prime_num(num + 1));
    return 0;
}
int next_prime_num(int n)
{
    int i;
    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
             n += 1;
    }
    return n;
}
//5. Write a function to print first N prime numbers (TSRN)
#include<stdio.h>
int n_prime_num(int);
int main()
{
    int num;
    printf("How many prime number you want to print: ");
    scanf("%d", &num);
    printf("First %d prime numbers are: ", num);
    n_prime_num(num);
    return 0;
}
int n_prime_num(int n)
{
    int i,j = 2;
    while(n)
    {
        for(i = 2; i < j; i++)
        {
            if(j % i == 0)
                break;
        }
        if(i == j)
        {
            printf("%d ", i);
            n--;
        }
        j++;
    }
}
//6. Write a function to print all Prime numbers between two given numbers. (TSRN)
#include<stdio.h>
void prime_num(int, int);
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    prime_num(a, b);
}
void prime_num(int a, int b)
{
    int i,j;
    if(a > b)
    {
        b = a + b;
        a = b - a;
        b = b - a;
    }
    for(i = a; i <= b; i++)
    {
        for(j = 2; j < i; j++)
        {
            if(i % j == 0)
                break;
        }
        if(j == i)
            printf("%d ", j);
    }
}
//7. Write a function to print first N terms of Fibonacci series (TSRN)
#include <stdio.h>
void fibonacci(int);
int main() 
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}
void fibonacci(int n) {
    int a = 0, b = 1, c, i;
    printf("Fibonacci series up to %d terms: \n", n);
    printf("%d, %d, ", a, b);
    for (i = 3; i <= n; i++) {
        c = a + b;
        printf("%d, ", c);
        a = b;
        b = c;
    }
}
//8. Write a function to print PASCAL Triangle. (TSRN)
#include <stdio.h>
void printPascal(int);
int main() 
{
    int n;
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &n);
    printf("Pascal's Triangle:\n");
    printPascal(n);
    return 0;
}
void printPascal(int n) 
{
    int arr[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                arr[i][j] = 1;
            } else {
                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
            }
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
//9. Write a program in C to find the square of any number using the function.
 #include<stdio.h>
 int main()
 {
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    printf("Square of %d: %d", num,num*num);
    return 0;
 }
//10. Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the function.
#include<stdio.h>
double factorial(int);
int main()
{
    double sum = 0;
    int i;
    
    for(i=1;i<=5;i++)
        sum += factorial(i)/i;
    
    printf("Sum of the series is: %.2lf\n", sum);
    
    return 0;
}
double factorial(int n)
{
    double fact = 1;
    int i;
    
    for(i=1;i<=n;i++)
        fact *= i;

    return fact;
}

