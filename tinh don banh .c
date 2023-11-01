#include <stdio.h>
#include <math.h>

int main(){
   int A[100000],dem=0;
   char c='1';
   int k=0;
while (c!='k'&& c!='K')
{
   dem+=1;
   printf("nhap don so %d\n",dem);
   printf("nhap so loai thuong size S\n"); scanf("%d",&k);A[1]+=k;
   printf("nhap so loai thuong size M\n"); scanf("%d",&k);A[2]+=k;
   printf("nhap so loai thuong size L\n"); scanf("%d",&k);A[3]+=k;
   printf("nhap so loai dac biet size S\n"); scanf("%d",&k);A[4]+=k;
   printf("nhap so loai dac biet size M\n"); scanf("%d",&k);A[5]+=k;
   printf("nhap so loai dac biet size L\n"); scanf("%d",&k);A[6]+=k;
   fflush(stdin);
   printf("ban muon nhap them hay khong, neu khong nhap k hoac K \n"); scanf("%c",&c);
   fflush(stdin);
}
printf("co tat ca \n");
printf("so banh loai thuong size S la %d\n, so banh loai thuong size M la %d\n, so banh loai thuong size L la %d\n,so banh loai dac biet size S la %d\n,so banh loai dac biet size M la %d\n,so banh loai dac biet size L la %d\n",A[1],A[2],A[3],A[4],A[5],A[6]);
}