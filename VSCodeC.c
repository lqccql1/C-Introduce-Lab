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
    printf("Nhap vao gia bitcoin tung ngay: \n"); 
    for(i=0; i<n;i++) 
    { 
        printf("gia bitcoin ngay thu %d la: ",i+1);
		scanf("%d",&A[i]);   
    } 
	for (i=0; i<n; i++)
	if (A[i]>A[i-1] && A[i]>A[i+1]) 
	printf("ngay %d gia bitcoin tang dot bien \n",i+1);
    return 0;
}