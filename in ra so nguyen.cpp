#include <stdio.h>
int main (void)
{
	double cong_suat,chi_phi,gia_thanh,thoi_gian;
	int t1,t2;
	printf("Cong suat binh nong lanh la: \n");
	scanf("%lf",&cong_suat);
	printf("Gia cua chiec binh nong lanh la: \n");
	scanf("%lf",&chi_phi);
	printf("Gia cua chiec nong lanh NLMT la: \n");
	scanf("%lf",&gia_thanh);
	printf("Trung binh moi ngay su dung...gio: \n");
	scanf("%lf",&thoi_gian);
	t1=(gia_thanh-chi_phi)/(cong_suat*thoi_gian*2.5);
	printf("De co lai thi can su dung NLMT it nhat %d ngay",t1);
	return 0;
	}