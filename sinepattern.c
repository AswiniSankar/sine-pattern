/*
  O O     O O
 O   O   O   O
 O   O   O   O
 O   O   O   O
O     O O     O O
*/
#include<stdio.h>
int main()
{
 int h,l,i,j,k,is=1,os=2,jump,inc,t;
 scanf("%d%d",&h,&l);
 for(i=1;i<=h;i++)
 {for(j=1;j<=l;j++)
  {
    for(k=1;k<=os;k++)
      printf(" ");
    printf("O");
  
    for(k=1;k<=is;k++)
       printf(" ");
      printf("O");
     for(k=1;k<=os;k++)
       printf(" ");
    printf(" ");
    
  }
  os=(i+1!=h);
  is=(i+1!=h)?3:5;
  printf("\n");
 }
}
