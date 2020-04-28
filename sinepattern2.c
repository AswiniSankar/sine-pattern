//pattern 1
/*
4
4
  D E     L M     T U     B C   
 C   F   K   N   S   V   A   D  
 B   G   J   O   R   W   Z   E  
A     H I     P Q     X Y     F 

*/

#include<stdio.h>
int main()
{
 int h,l,i,j,k,is=1,os=2,jump,inc,t;
 scanf("%d%d",&h,&l);
 t='A'+h-1;
 inc=1;
 jump=(h*3)-(h+1);
 for(i=1;i<=h;i++)
 {for(j=1;j<=l;j++)
  {
    for(k=1;k<=os;k++)
      printf(" ");
    printf("%c",t);
    
    for(k=1;k<=is;k++)
       printf(" ");
     t=t+inc;
     if(t>'Z')
        t=t-26;
      printf("%c",t);
     for(k=1;k<=os;k++)
       printf(" ");
    printf(" ");
      t=t+jump;
     if(t>'Z')
      t=t-26;
  }
  os=(i+1!=h);
  is=(i+1!=h)?3:5;
  t='A'+h-i-1;
  inc=inc+2;
  jump=jump-2;
  printf("\n");
 }
}
//pattern 2
/*
4
4
  d e     l m     t u     b c   
 c   f   k   n   s   v   a   d  
 b   g   j   o   r   w   z   e  
a     h i     p q     x y     f 
*/

#include<stdio.h>
int main()
{
 int h,l,i,j,k,is=1,os=2,jump,inc,t;
 scanf("%d%d",&h,&l);
 t='a'+h-1;
 inc=1;
 jump=(h*3)-(h+1);
 for(i=1;i<=h;i++)
 {for(j=1;j<=l;j++)
  {
    for(k=1;k<=os;k++)
      printf(" ");
    printf("%c",t);
    
    for(k=1;k<=is;k++)
       printf(" ");
     t=t+inc;
     if(t>'z')
        t=t-26;
      printf("%c",t);
     for(k=1;k<=os;k++)
       printf(" ");
    printf(" ");
      t=t+jump;
     if(t>'z')
      t=t-26;
  }
  os=(i+1!=h);
  is=(i+1!=h)?3:5;
  t='a'+h-i-1;
  inc=inc+2;
  jump=jump-2;
  printf("\n");
 }
}

//pattern 3
/*
4
4
  w v     o n     g f     y x   
 x   u   p   m   h   e   z   w  
 y   t   q   l   i   d   a   v  
z     s r     k j     c b     u 
*/

#include<stdio.h>
int main()
{
 int h,l,i,j,k,is=1,os=2,jump,inc,t;
 scanf("%d%d",&h,&l);
 t='z'-h+1;
 inc=1;
 jump=(h*3)-(h+1);
 for(i=1;i<=h;i++)
 {for(j=1;j<=l;j++)
  {
    for(k=1;k<=os;k++)
      printf(" ");
    printf("%c",t);
    
    for(k=1;k<=is;k++)
       printf(" ");
     t=t-inc;
     if(t<'a')
        t=t+26;
      printf("%c",t);
     for(k=1;k<=os;k++)
       printf(" ");
    printf(" ");
      t=t-jump;
     if(t<'a')
      t=t+26;
  }
  os=(i+1!=h);
  is=(i+1!=h)?3:5;
  t='z'-h+i+1;
  inc=inc+2;
  jump=jump-2;
  printf("\n");
 }
}
//pattern 4
/*
4
4
  W V     O N     G F     Y X   
 X   U   P   M   H   E   Z   W  
 Y   T   Q   L   I   D   A   V  
Z     S R     K J     C B     U 
*/
#include<stdio.h>
int main()
{
 int h,l,i,j,k,is=1,os=2,jump,inc,t;
 scanf("%d%d",&h,&l);
 t='Z'-h+1;
 inc=1;
 jump=(h*3)-(h+1);
 for(i=1;i<=h;i++)
 {for(j=1;j<=l;j++)
  {
    for(k=1;k<=os;k++)
      printf(" ");
    printf("%c",t);
    
    for(k=1;k<=is;k++)
       printf(" ");
     t=t-inc;
     if(t<'A')
        t=t+26;
      printf("%c",t);
     for(k=1;k<=os;k++)
       printf(" ");
    printf(" ");
      t=t-jump;
     if(t<'A')
      t=t+26;
  }
  os=(i+1!=h);
  is=(i+1!=h)?3:5;
  t='Z'-h+i+1;
  inc=inc+2;
  jump=jump-2;
  printf("\n");
 }
}
