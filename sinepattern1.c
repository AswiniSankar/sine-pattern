/*
 5
3
  5 6     15 16     25 26   
 4   7   14   17   24   27  
 3   8   13   18   23   28  
 2   9   12   19   22   29  
1     10 11     20 21     30 

*/
#include<stdio.h>
int main()
{
 int h,l,i,j,k,is=1,os=2,jump,inc,t;
 scanf("%d%d",&h,&l);
 t=h;
 inc=1;
 jump=(h*3)-(h+1);
 for(i=1;i<=h;i++)
 {for(j=1;j<=l;j++)
  {
    for(k=1;k<=os;k++)
      printf(" ");
    printf("%d",t);
     t=t+inc;
    
    for(k=1;k<=is;k++)
       printf(" ");
      printf("%d",t);
     for(k=1;k<=os;k++)
       printf(" ");
    printf(" ");
      t=t+jump;
  }
  os=(i+1!=h);
  is=(i+1!=h)?3:5;
  t=h-i;
  inc=inc+2;
  jump=jump-2;
  printf("\n");
 }
}
