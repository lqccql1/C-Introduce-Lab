#include <stdio.h>
int tien(int a, int coban, int them)
{
	int luong;
	if(a>(100/15) && a<30) 
	   luong=a*coban-100;
	if(30<a && a<=40) 
	   luong = a*coban;
	if(a>40 && a<50) 
	   luong = 40*coban + (a-40)*them;
	if(a>50) 
	   luong = 40*coban+10*them;
	   return luong;
}
int main()
{
	int x,y,z;
	printf("nhap so gio lam trong tuan\n");
	scanf("%d",&x);
	printf("nhap luong co ban (kVND)\n");
	scanf("%d",&y);	
	printf("nhap luong them gio (kVND)\n");
	scanf("%d",&z);
	if (x>50)
	   printf("Vuot qua so gio quy dinh\n");
	   printf ("tien luong tuan nay la %d(kVND)", tien(x,y,z));
    if (x<50)
	printf ("tien luong tuan nay la %d(kVND)", tien(x,y,z));
	return 0;
}