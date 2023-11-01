#include <stdio.h>
void main(void)
{
int a,b ,c,d,e,f,n,m ;

printf ("nhap vao so tien  ");
scanf ( "%d",&m );
n=m/10000;
for (a =1 ; a<= n ; a++)
{ for(b=1 ;b<= n ;b++)
{ for(c=1 ; c<=n ;c++)
{ for(d=1 ; c<=n ;c++)
{ for(e=1 ; c<=n ;c++)
{ for(f=1 ; c<=n ;c++)
{ if (m=a*10000+b*20000+c*50000+d*100000+e*200000+f*500000)
printf ("Bạn có thể đổi thành %d to 10k, %d to 20k,%d to 50k,%d to 100k,%d to 200k,%d to 500k \n",a,b,c,d,e,f);

}
}
}}}}}
return ;