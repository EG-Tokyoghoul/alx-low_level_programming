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
           int c=2;
           while(c<10){
       if (b!=c && b!=a && b>a && c>b)
       {
           putchar(48+a);
           putchar(48+b);
           putchar(48+c);
           if (a<7){
           putchar(',');
            putchar(' ');
            }
           }
           c++;
       }
       b++;
       }   
   a++;
   }
    return 0;
}
