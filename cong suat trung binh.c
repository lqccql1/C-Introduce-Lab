#include <stdio.h>
#include <math.h>

int main()
{
    double dem=0,t,p,Ptb;
    char c='1';
    while (c!= 'k')
{
    dem+=1;
    printf("Nhap vao cong suat trung binh "); scanf("%lf",&p);
    printf("Nhap vao thoi gian su dung trung binh moi ngay "); scanf("%lf",&t);
    Ptb+=p*t;
    printf("Them thiet bi ? , neu khong nhap k \n");
    fflush(stdin);
    scanf("%c",&c);
    fflush(stdin);

}    printf("So luong thiet bi la %3.lf\n",dem);
    printf("Cong suat trung binh theo ngay la %.3lfW\n",Ptb);
    printf("Cong suat trung binh theo thang la %.3lfW\n",Ptb*30);
}