#include<stdio.h>
int main ()
{
 int m;
 scanf("%d",&m);
 if(m>90)
   printf("A Grade");
 else if (m>70 && m<=90)
   printf("B Grade");
 else if(m>50  &&  m<=70)
   printf("C Grade");
 else
   printf("D Grade");
 return 0;
 }
 
