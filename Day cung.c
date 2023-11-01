#include <stdio.h>
#include <math.h>

int main() {
float fa,fb,fc,a,b,e,x,c,c1=0,X,E;
	
int dem=0;
printf("nhap a: ");scanf("%f", &a); 
printf("nhap b: ");scanf("%f", &b);
printf("nhap sai so ban dau: "),scanf("%f", &E);
e=1;

do {x=a;fa=sin(x)-x*x*cos(x);
	x=b;fb=sin(x)-x*x*cos(x);
	c=(a*fb-b*fa)/(fb-fa);
	x=c;fc=sin(x)-x*x*cos(x);e=fabs(c-c1);dem++;printf("\nLan lap %d: \nfa=%0.9f, fb=&0.9f, X%d=%0.9f, f(x%d)=%0.9f",dem,fa,fb,dem,c,dem,fc);
	if(fa*fc<0) {b=c;printf(" => fc trai dau voi fa \n => khoang phan li moi: [a;b]= [%0.9f,%0.9f], ss |X%d-X%d|=%0.9f",a,b,dem,dem-1,e);
				}
	else {a=c;printf(" => fc trai dau voi fb \n => khoang phan li moi: [a;b]= [%0.9f,%0.9f], ss |X%d-X%d|=%0.9f",a,b,dem,dem-1,e);
		} c1=c;
} while (e>E);
return 1;
}