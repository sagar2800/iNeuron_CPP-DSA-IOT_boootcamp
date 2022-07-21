//1. Write a program to calculate sum of first N natural numbers
#include<stdio.h>
int main()
{
    int n,i,sum = 0;
    printf("You want the sum for how many natural numbers: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
        sum += i;
    printf("Sum of first %d natural numbers is %d",n, sum);
    return 0;
}

//2. Write a program to calculate sum of first N even natural numbers
#include<stdio.h>
int main()
{
    int n,i,sum = 0;
    printf("You want the sum for how many first even natural numbers: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
        sum += i*2;
    printf("Sum of %d even natural numbers is %d",n, sum);
    return 0;
}

//3. Write a program to calculate sum of first N odd natural numbers
#include<stdio.h>
int main()
{
    int n,i,sum = 0;
    printf("You want the sum for how many first odd natural numbers: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
        sum += i*2-1;
    printf("Sum of %d odd natural numbers is %d",n, sum);
    return 0;
}

//4. Write a program to calculate sum of squares of first N natural numbers
#include<stdio.h>
int main()
{
    int n,i,sum = 0;
    printf("You want the sum of squares for how many natural numbers: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
        sum += i*i;
    printf("Sum of squares for first %d natural numbers is %d",n, sum);
    return 0;
}

//5. Write a program to calculate sum of cubes of first N natural numbers
#include<stdio.h>
int main()
{
    int n,i,sum = 0;
    printf("You want the sum of cubes for how many natural numbers: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
        sum += i*i*i;
    printf("Sum of cubes for first %d natural numbers is %d",n, sum);
    return 0;
}

//6. Write a program to calculate factorial of a number
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number to get the factorial: ");
    scanf("%d", &n);
    printf("Factorial of %d is ", n);
    for(i=n,n=1;i>0;i--)
        n += n * (i-1);
    printf("%d", n);
    return 0;
}

//7. Write a program to count digits in a given number
#include<stdio.h>
int main()
{
    int n,count = 0;
    printf("Enter a number\n");
    scanf("%d", &n);
    printf("Number of digits in %d is ", n);
    while(n > 0)
    {
        n /= 10;
        count += 1;
    }
    printf("%d", count);
    return 0;
}

//8. Write a program to check whether a given number is a Prime number or not
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter any number\n");
    scanf("%d", &n);
    for(i=2;i<n;i++)
    {
        if(n % i == 0)
            break;
    }
    if(i==n)
        printf("%d is a Prime number", n);
    else
        printf("%d is not a Prime number", n);
    return 0;
}

//9. Write a program to calculate LCM of two numbers
#include<stdio.h>
int main()
{
    int a,b,i,sum = 1;
    printf("Enter two numbers\n");
    scanf("%d %d", &a, &b);
    if(a > b)
    {
        a = a + b;
        b = a - b;
        a = a - b;
    }
    printf("LCM of %d and %d is ", a, b);
    for(i=2;i<=b;i++)
    {
        if((a % i == 0) && (b % i == 0))
        {
            sum *= i;
            a /= i;
            b /= i;
            i = 1;
        }
    }
    printf("%d", sum*a*b);
    return 0;
}

//10. Write a program to reverse a given number
#include<stdio.h>
int main()
{
    int n,b=0;
    printf("Enter any number to reverse it: ");
    scanf("%d", &n);
    while(n > 0)
    {
        if(b != 0)
            b *= 10;
        b += n % 10;
        n /= 10;
    }
    printf("%d", b);
    return 0;

}
