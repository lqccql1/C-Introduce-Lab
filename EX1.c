#include <stdio.h> 
int main() 
{ 
    int A[100], n, i; 
    printf("So ngay khao sat la: \n "); 
    scanf("%d",&n); 
    while(n<=0 || n>100) 
    { 
        printf("Vui long nhap so ngay hop le (1-100): "); 
        scanf("%d",&n); 
    } 
    printf("Nhap vao nhiet do tung ngay: \n"); 
    for(i=0; i<n;i++) 
    { 
        printf("Nhiet do ngay thu %d la: ",i+1);
		scanf("%d",&A[i]);
        while( A[i]>100) 
    {
        printf("Vui long nhap nhiet do hop le (<100): "); 
        scanf("%d",&A[i]); 
	}     
    } 
    float sum;
    sum=0;
    for(i=0; i<n;i++) sum=sum+A[i];
    sum=sum/n;
    printf("Nhiet do trung binh %d ngay toi la: %0.2f \n",n,sum); 
    
    int min = A[0],c; 
    for(i=1; i<n; i++) 
        if(A[i]<min) min = A[i]; c=i; 
    printf("Nhiet do thap nhat la: %d, vao ngay thu %d \n",min,c); 
    int max = A[0],d; 
    for(i=1; i<n; i++) 
        if(A[i]>max) max = A[i]; d=i;
    printf("Nhiet do lon nhat: %d, vao ngay thu %d",max,d);
	
	 
    return 0;
}