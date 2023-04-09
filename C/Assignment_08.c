//Write a program to draw the following patterns:
/*Question1.

*
* *
* * *
* * * *
* * * * *

*/
#include<stdio.h>
int main()
{
    int i,j;
    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}

/*Question2.

        *
      * *
    * * *
  * * * *
* * * * *
*/
#include<stdio.h>
int main()
{
    int i,j;
    for(i = 5; i > 0; i--)
    {
        for(j = 1; j <= 5; j++)
        {
            if((i-j) > 0)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
    return 0;

}

/*Question3.

* * * * *
* * * *
* * *
* *
*

*/
#include<stdio.h>
int main()
{
    int i,j;
    for(i = 1; i <= 5; i++)
    {
        for(j = 5; j > 0; j--)
        {
            if(((j+1) - i) > 0)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;

}

/*Question4.

* * * * *
  * * * *
    * * *
      * *
        * 
        
*/
#include<stdio.h>
int main()
{
    int i,j;
    for(i = 1; i <= 5; i++)
    {
        for(j = 1 ; j <= 5; j++)
        {
            if(i <= j)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;

}

/*Question5.

        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *

*/
#include<stdio.h>
int main()
{
    int columns,rows = 9,i,j,count; //columns are vertical // rows are horizontal
    for(columns = 1; columns <= 5; columns++)
    {
        j = 0;
        for(i = 1; i <= 9; i++)
        {
            if(i <= (9 - 4 - columns))
                printf(" ");
            else
                {
                    j++;
                    if(j <= columns * 2 - 1)
                        printf("*");
                    else
                        printf(" ");
                }
        }
        printf("\n");
    }
}
/*Question6.

* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *

*/
#include<stdio.h>
int main()
{
    int columns,rows = 9,i,j; //columns are vertical // rows are horizontal
    for(columns = 1; columns <= 5; columns++)
    {
        j = 0;
        for(i = 1; i <= 9; i++)
        {
            if(i <= columns - 1)
                printf(" ");
            else
            {
                j++;
                if(j <= rows + 1 - (columns * 2 - 1))
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}


/*Question7.

* * * * * * * * * *
* * * *     * * * *
* * *         * * *
* *             * *
*                 *

*/
#include<stdio.h>
int main()
{
    int columns,rows,i,j,k,count = 0;
    for(columns = 1; columns <= 5; columns++)
    {
        j = 1;
        k = 1;
        count = 0;
        for(rows = 1; rows <= 10; rows++)
        {
            if(j <= 5 - (columns - 1))
            {
                printf("*");
                count++;
                j++;
            }
            else
            {
                if(k <= (5 - count) * 2  && columns != 1)
                {
                    printf(" ");
                    k++;
                }
                else
                {
                    j = 1;
                    rows--;
                }
            }
        }
        printf("\n");
    }
    return 0;
}


/*Question8.
      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1

*/
#include<stdio.h>
int main()
{
    int columns,rows,j,k,count;
    for(columns = 1; columns <= 4; columns++)
    {
        j = columns;
        k = 1;
        count = 0;
        for(rows = 1; rows <= 7; rows++)
        {
            if(4 - j > 0)
            {
                printf(" ");
                j++;
                count++;
            }
            else
            {
                rows--;
                count = 4 - count;
                for(k = 1; k <= count; k++)
                {
                    printf("%d",k);
                    rows++;
                    if(k == count)
                    {
                        k--;
                        for(; k > 0; k--)
                        {
                            printf("%d", k);
                            rows++;
                        }
                        break;
                    }
                }
                j = columns;
             
            }
        }
        printf("\n");
    }
}

/*Question9.

1 2 3 4 3 2 1
  1 2 3 2 1
    1 2 1
      1
*/
#include<stdio.h>
int main()
{
    int rows,columns,i = 4,j,count;
    for(columns = 1; columns <= 4; columns++)
    {
        count = 0;
        i = 5 - columns;
        for(rows = 1; rows <= 7; rows++)
        {
            if(4 - i > 0)
            {
                printf(" ");
                i++;
                count++;
            }
            else
            {
                rows--;
                i = i - count;
                for(j = 1; j <= i; j++)
                {
                    printf("%d",j);
                    rows++;
                    if(j == i)
                    {
                        j--;
                        for(; j > 0; j--)
                        {
                            printf("%d", j);
                            rows++;
                        }
                        break;
                    }
                }
            }
        }
        printf("\n");

    }
}



/*Question10.

1 2 3 4 3 2 1
1 2 3   3 2 1
1 2       2 1
1           1

*/
#include<stdio.h>
int main()
{
    int columns,rows,i,count;
    for(columns = 1; columns <= 4; columns++)
    {
        count = 0;
        for(rows = 1; rows <= 7; rows++)
        {
            if(rows <= 5 - columns)
            {
                printf("%d", rows);
                count++;
            }
            else
            {
                if(count > 0 && columns != 1)
                {
                    rows--;
                    count = ((4 - count) * 2) - 1;
                    for(; count > 0; count--)
                    {
                        printf(" ");
                        rows++;
                    }
                }
                else
                {
                    i = 8 - rows;
                    printf("%d", i);
                }
            }
        }
        printf("\n");
    }
}

/*Question11.
        A
      A B A
    A B C B A
  A B C D C B A
A B C D E D C B A

*/
#include<stdio.h>
int main()
{
    int columns,rows,i,count;
    char ch;
    for(columns = 1; columns <= 5; columns++)
    {
        count = 0;
        i = 1;
        ch = 'A';
        ch--;
        for(rows = 1; rows <= 9; rows++)
        {
            if(i <= (5 - columns))
            {
                printf(" ");
                count++;
                i++;
            }
            else
            {
                if((5 - count) > 0)
                {
                    ch++;
                    printf("%c", ch);
                    count++;
                }
                else
                {
                    if(ch != 'A')
                    {
                        ch--;
                        printf("%c",ch);
                    }
                    else
                        i = 1;
                }
            }
        }
        printf("\n");
    }
    return 0;
}
/*Question12.

A B C D C B A
  A B C B A
    A B A
      A

*/
#include<stdio.h>
int main()
{
    int columns,rows,i,count;
    char ch;
    for(columns = 1; columns <= 4; columns++)
    {
        count = 0;
        i = 1;
        ch = 'A';
        ch--;
        for(rows = 1; rows <= 7; rows++)
        {
            if(columns - i > 0)
            {
                printf(" ");
                count++;
                i++;
            }
            else
            {
                if(4 - count > 0)
                {
                    ch++;
                    printf("%c", ch);
                    count++;
                }
                else
                {
                    if(ch != 'A')
                    {
                        ch--;
                        printf("%c", ch);
                    }
                    else
                    {
                        i = 1;
                        rows--;
                    }
                }
            }
        }
        printf("\n");
    }
    return 0;
}

/*Question13.

A B C D E F G F E D C B A
A B C D E F   F E D C B A
A B C D E       E D C B A
A B C D           D C B A
A B C               C B A
A B                   B A
A                       A

*/
#include<stdio.h>
int main()
{
    int columns,rows,count;
    char ch;
    for(columns = 1; columns <= 7; columns++)
    {
        count = 0;
        ch = 'A';
        ch--;
        for(rows = 1; rows <= 13; rows++)
        {
            if(rows <= 8 - columns)
            {
                ch++;
                printf("%c", ch);
                count++;
            }
            else
            {
                if(count > 0 && columns != 1)
                {
                    rows--;
                    count = ((7 - count) * 2) - 1;
                    for(; count > 0 ; count--)
                    {
                        printf(" ");
                        rows++;
                    }
                    ch += 1;
                }
                else
                {
                    ch--;
                    printf("%c", ch);
                }
            }
        }
        printf("\n");
    }
    return 0;
}
/*Question14.

*
* *
*   *
*     *
* * * * * 

*/
#include<stdio.h>
int main()
{
    int columns,rows;
    for(columns = 1; columns <= 5; columns++)
    {
        for(rows = 1; rows <= 5; rows++)
        {
            if(rows == 1 || rows == columns || columns == 5)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

/*Question15.

        *
      * *
    *   *
  *     *
* * * * *

*/
#include<stdio.h>
int main()
{
    int columns,rows;
    for(columns = 1; columns <= 5; columns++)
    {
        for(rows = 1; rows <= 5; rows++)
        {
            if(rows == 6 - columns || rows == 5 || columns == 5)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

/*Question16.
       *
     *   *
    *      *
  *           *
* * * * * * * * *

*/
#include<stdio.h>
int main()
{
    int columns,rows,i,count;
    for(columns = 1; columns <= 5; columns++)
    {
        i = 5 - columns;
        count = 0;
        for(rows = 1; rows <= 9; rows++)
        {
            if(rows <= 5 - columns)
            {
                printf(" ");
                count++;
            }
            else
            {
                if(6 - columns == rows || columns != 1 && 9 - count == rows || columns == 5)
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

/*Question17.

* * * * * * * * *
  *           *
    *       *
      *   *
        *

*/
#include<stdio.h>
int main()
{
    int columns,rows;
    for(columns = 1; columns <= 5; columns++)
    {
        for(rows = 1; rows <= 9; rows++)
        {
            if(rows == columns || rows == 10 - columns || columns == 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

/*Question18.

        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *

*/
#include<stdio.h>
int main()
{
    int columns,rows,i,round;
    for(columns = 1; columns <= 9; columns++)
    {
        round = columns;
        if(columns > 5)
            columns = 10 - columns;
        i = 1;
        for(rows = 1; rows <= 9; rows++)
        {
            if(i <= 5 - columns)
            {
                printf(" ");
                i++;
            }
            else
            {
                rows--;
                for(i = 1; i <= (columns * 2) - 1; i++)
                {
                    printf("*");
                    rows++;
                }
                i = 1;
            }
        }
        printf("\n");
        columns = round;
    }
    return 0;
}

/*Question19.

   * * * *       * * * * *
 * * * * * *      * * * * * *
* * * * * *      * * * * * * *
* * * * * MySirG * * * * * *
  * * * * * * * * * * * * *
    * * * * * * * * * * * 
      * * * * * * * * * 
        * * * * * * * 
          * * * * * 
            * * * 
              * 
                
