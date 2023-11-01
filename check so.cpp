#include <stdio.h> 
double tiendien(int X) 
{ 
double tien;
    if(X<51) 
        tien=X*1.678; 
    if(X<100 && X>50) 
        tien= 50*1.678+(X-50)*1.734;
    if(X>101 &&X<200) 
        tien=50*(1.678+1.734)+(X-100)*2.014;
    if(X>201 &&X<300) 
        tien=50*(1.678+1.734+2.014)+(X-200)*2.536;
    if(X>301 &&X<400) 
       tien=50*(1.678+1.734+2.014+2.536)+(X-300)*2.014;
    if(X>401) 
        tien=50*(1.678+1.734+2.014+2.536+2.834)+(X-100)*2.927;
    if ( tien>0 ) return tien ; 
     else return -1 ;
} 
int main() {
    int X;
    printf("Luong dien da su dung la:...");
    scanf("%d", &X);
    if (tiendien(X) > 0) printf("Tien dien la %f VND",tiendien(X)); 
     else printf("")
    return 0;
} 