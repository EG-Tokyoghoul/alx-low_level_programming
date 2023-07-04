#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */

int main(void) {
    int a=0;
   while (a<10)
   {
     int b=1;
       while (b<10)
       {
     if (a!=b && b>a)
       {
           putchar(48+a);
           putchar(48+b);
           if (a<8){
           putchar(',');
               putchar(' ');
           }
       }
       b++;
       
       }   
   a++;
   }
    return 0;
}
