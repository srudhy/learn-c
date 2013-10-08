/* 
 * File:   Firstcode.c
 * Author: mathew
 *
 * Created on October 7, 2013, 7:09 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() 
{
    int i=0, number;
    int bitarray[10]= {0};
    
    printf("Enter number: ");
    scanf("%d", &number);
    printf ("\nyour number is %d\n",number);
 
    
    while (number>0)
    {
        bitarray[i] = number%2;
        number=number/2;
        i++;
        
    }
    int count;

    for (count=i-1; count>=0; count--)
    {
        printf("%d", bitarray[count]);
    }
    
    return 0;
}

