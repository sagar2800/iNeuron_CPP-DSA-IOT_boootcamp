//1. Write a program to check whether a given number is positive or non-positive.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    if(n>0)
        printf("%d is a Postive number",n);
    else
        printf("%d is non-positive number",n);
    return 0;
}

//2. Write a program to check whether a given number is divisible by 5 or not
#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    if(n%5)
        printf("%d is not divisible by 5",n);
    else
        printf("%d is divisible by 5",n);
    return 0;
}

//3. Write a program to check whether a given number is an even number or an odd number.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    if(n%2)
        printf("%d is an odd number",n);
    else
        printf("%d is an even number",n);
    return 0;
}

//4. Write a program to check whether a given number is an even number or an odd number without using % operator.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    if((n/2 * 2) == n)
        printf("%d is an even number",n);
    else
        printf("%d is an odd number",n);
    return 0;
}

//5. Write a program to check whether a given number is a three-digit number or not.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    if(n>99 && n<1000)
        printf("%d is a three digit number",n);
    else
        printf("%d is not a three digit number",n);
    return 0;
}

//6. Write a program to print greater between two numbers. Print one number of both are the same.
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d %d",&a, &b);
    if(a==b || a>b)
        printf("%d", a);
    else
        printf("%d", b);
    return 0;
}

//7. Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots
#include<stdio.h>
int main()
{
    int a,b,c,discriminant;
    printf("Enter the coefficients a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);
    discriminant = b*b - (4*a*c);
    if(discriminant == 0)
        printf("Roots are real and distinct,");
    else if(discriminant > 0)
        printf("Roots are real and equal");
    else
        printf("Roots are imaginary");
    return 0;
}

//8. Write a program to check whether a given year is a leap year or not.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the year\n");
    scanf("%d", &n);
    if( (n%400)==0 || (n%100)!=0 && (n%4)==0 )
        printf("%d is a leap year",n);
    else
        printf("%d is not a leap year",n);
    return 0;
}

//9. Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers\n");
    scanf("%d %d %d",&a, &b, &c);
    printf("Greater number between %d,%d and %d is ",a,b,c);
    if(a>b && a>c)
        printf("%d", a);
    else if(b>c)
        printf("%d", b);
    else
        printf("%d", c);
    return 0;
}

//10. Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.
#include<stdio.h>
int main()
{
    float cp,sp;
    printf("Enter the cost price\n");
    scanf("%d", &cp);
    printf("Enter the selling price\n");
    scanf("%d", &sp);
    if(sp>cp)//profit
        printf("Profit %% is %.2f", ((sp-cp) / cp) * 100);//formula - profit/cost price * 100
    else//loss
        printf("Loss %% is %f", (cp-sp) / cp *100);//formula - loss/cost price * 100
}

/*11. Write a program to take marks of 5 subjects from the user. Assume marks are givenout of 100 and passing marks is 33. Now display whether the 
      candidate passed the examination or failed.*/
#include<stdio.h>
int main()
{
    int a=-1,b,c,d,e;
    do
    {
        if(a > -1)
            printf("Invalid entry..try again\n\n");

        printf("Enter the marks of English\n");
        scanf("%d", &a);
        printf("Enter the marks of Hindi\n");
        scanf("%d", &b);
        printf("Enter the marks of Maths\n");
        scanf("%d", &c);
        printf("Enter the marks of Science\n");
        scanf("%d", &d); 
        printf("Enter the marks of Geography\n");
        scanf("%d", &e);
    }
    while(((a > 100) || (b > 100) || (c > 100) || (d > 100) || (e > 100)));

    if((a >=33) && (b >=33) &&(c >=33) && (d >=33) && (e >=33))
        printf("You have passed the exam");
    else
        printf("You have failed the exam");
    return 0;
}

//12. Write a program to check whether a given alphabet is in uppercase or lowercase.
#include<stdio.h>
int main()
{
    char a;
    printf("Enter any alphabet\n");
    scanf("%c", &a);
    if((a >= 67) && (a <= 90))//Ascii value of A=65,Z=90, a=97,z=122
        printf("uppercase", a);
    else if((a >= 90) && (a <= 122))
        printf("lowercase", a);
    else
        printf("Not an alphabet");
    return 0;
}

//13. Write a program to check whether a given number is divisible by 3 and divisible by 2.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    if((n%3==0) && (n%2==0) )
       printf("It is divisible by 2 and 3");
    else
       printf("Not divisible");
    return 0;
}

//14. Write a program to check whether a given number is divisible by 7 or divisible by 3.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    if((n%7==0) || (n%3==0) )
       printf("Divisible");
    else
       printf("Not divisible");
    return 0;
}

//15. Write a program to check whether a given number is positive, negative or zero.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d", &n);
    if(n > 0)
       printf("%d is a Positive number", n);
    else if(n < 0)
       printf("%d is a negative number", n);
    else
       printf("%d is zero", n);
    return 0;
}

//16. Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character.
#include<stdio.h>
int main()
{
    char a;
    printf("Enter any character\n");
    scanf("%c", &a);
    if((a >= 67) && (a <= 90))//Ascii value of A=65,Z=90, a=97,z=122, 0=48,9=57
        printf("It is an uppercase alphabet", a);
    else if((a >= 90) && (a <= 122))
        printf("It is a lowercase alphabet", a);
    else if((a >= 48) && (a <= 57))
        printf("It's a number");
    else
        printf("It's a special character");
    return 0;
}

//17. Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not.
#include<stdio.h>
int main()
{
    float side1,side2,side3;
    printf("Enter three sides of the triangle\n");
    scanf("%d %d %d", &side1, &side2, &side3);
    if((side1 + side2) > side3 && (side2 + side3) > side1 && (side3 + side1) > side2)
        printf("Valid Triangle");
    else
        printf("Invalid Triangle");
    return 0;
}

//18. Write a program which takes the month number as an input and display number of days in that month
#include<stdio.h>
int main()
{
    int month;
    printf("Enter the month_number\n");
    scanf("%d", &month);
    if(month < 0 || month > 12)
        printf("Invalid month number");
    else
        if(month == 1 || month == 3 || month == 7 || month == 8 || month == 11 || month == 12 )
            printf("There are 31 days in this month");
        else if(month == 2)
            printf("There are 28 days in this month");
        else
            printf("There are 30 days in this month");
    return 0;
}
