//1. Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h>
float area_of_circle(int);
int main() {
    int radius;
    printf("Enter the radius: ");
    scanf("%d", &radius);
    printf("The area if %0.2f", area_of_circle(radius));
    return 0;
}
float area_of_circle(int radius) 
{
    int pi = 3.14;
    return pi*radius*radius;
}
//2. Write a function to calculate simple interest. (TSRS)
#include<stdio.h>
float Simple_Interest(int, int, int);
int main() 
{
    int p, r, t;
    printf("Enter Principle, Rate of intrest and time : ");
    scanf("%d %d %d", &p, &r, &t);
    printf("Simple interest is %.2f", Simple_Interest(p,r,t));
    return 0;
}
float Simple_Interest(int p, int r, int t)
{
    return (p * r * t) / 100;
}
//3. Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0. (TSRS)
#include<stdio.h>
int check_odd_even(int);
int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(Odd_Even(num) == 1)
        printf("%d is an even number", num);
    else
        printf("%d is an odd number", num);
    return 0;
}
int check_odd_even(int num)
{
    if (num & 1 == 1)
    
        return 0;
    else
        return 1;
}
//4. Write a function to print first N natural numbers (TSRN)
#include<stdio.h>
void Natural_Numbers(int);
int main() 
{
    int num;
    printf("How many natural numbers, you want to print: ");
    scanf("%d", &num);
    Natural_Numbers(num);
    return 0;
}
void Natural_Numbers(int num) 
{
    for(int i=1; i<= num; i++)
        printf("%d ", i);
}
//5. Write a function to print first N odd natural numbers. (TSRN)
#include<stdio.h>
void odd_numbers(int);
int main()
{
    int num;
    printf("How many Odd numbers you want to print: ");
    scanf("%d", &num);
    odd_numbers(num);
    return 0;

}
void odd_numbers(int num)
{
    int i = 1;
    while(i <= num)
    {
        printf("%d ", i * 2 - 1);
        i++;
    }
}
//6. Write a function to calculate the factorial of a number. (TSRS)
#include<stdio.h>
int factorial(int);
int main()
{
    int num;
    printf("Enter the number the calcalute factorial: ");
    scanf("%d", &num);
    printf("Factorial of %d: %d", num, factorial(num));
    return 0;
}
int factorial(int num)
{
    int i;
    i = num - 1;
    while(i)
    {
        num *= i;
        i--;
    }
    return num;
}
//7. Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)
#include <stdio.h>
int calculate_combinations(int,int);
int main()
{
    int n, r;

    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of r: ");
    scanf("%d", &r);

    int num_combinations = calculate_combinations(n, r);

    printf("The number of combinations of %d items taken %d at a time is %d.\n", n, r, num_combinations);

    return 0;
}
int calculate_combinations(int n, int r)
{
    if(n < r || n < 0 || r < 0)
        return 0;
    if(r == 0)
        return 1;
    return calculate_combinations(n-1, r-1) * n / r;
}
//8. Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)
#include <stdio.h>
int factorial(int n)
{
    int result = 1;

    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }

    return result;
}

int arrangements(int n, int r)
{
    int result = factorial(n) / factorial(n - r);
    return result;
}

int main()
{
    int n, r, num_arrangements;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter the value of r: ");
    scanf("%d", &r);

    num_arrangements = arrangements(n, r);

    printf("The number of arrangements for %d items taken %d at a time is %d.", n, r, num_arrangements);

    return 0;
}
//9. Write a function to check whether a given number contains a given digit or not.(TSRS)
#include<stdio.h>
int contains_digit(int, int);
int main()
{
    int num,digit;
    printf("Enter any number: ");
    scanf("%d", &num);
    printf("Enter the digit to check: ");
    scanf("%d", &digit);
    if (contains_digit(num, digit)) 
        printf("The given number contains %d\n", digit);
    else
        printf("The given number does not contain %d\n", digit);
    return 0;
}
int contains_digit(int num, int digit)
{
    int remainder;
    while(num)
    {
        remainder = num % 10;
        if (remainder == digit)
            return 1;
        num = num / 10;
    }
}
//10. Write a function to print all prime factors of a given number. For example, if the number is 36 then your result should be 2, 2, 3, 3. (TSRN)
#include<stdio.h>
void prime_fact(int);
int main()
{
    int num;
    printf("Enter a number to get the prime factors: ");
    scanf("%d", &num );
    prime_fact(num);
    return 0;
}
void prime_fact(int n)
{
    int i = 2;
    while(i <= n)
    {
        if(n % i == 0)
        {
            printf("%d ", i);
            n = n / i;
        }
        else
            i++;
    }
}
