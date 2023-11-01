#include <stdio.h>
const int muc1 = 1678;
const int muc2 = 1734;
const int muc3 = 2014;
const int muc4 = 2536;
const int muc5 = 2834;
const int muc6 = 2927;
const int tong2 = 83900;
const int tong3 = 170600;
const int tong4 = 372000;
const int tong5 = 625600;
const int tong6 = 909000;
int main() {
	int thoi_gian;
	double cong_suat,tieu_thu;
	printf("Nhap vao cong suat thiet bi dien : ");
	scanf("%lf",&cong_suat);
	printf("Nhap vao thoi gian su dung moi ngay (tieng) : ");
	scanf("%d",&thoi_gian);
	tieu_thu = cong_suat * thoi_gian*30;
	double tien_dien;
	if (tieu_thu <= 50){
		tien_dien = tieu_thu*muc1;
	}
	else {
		if (tieu_thu <= 100) {
			tieu_thu = tieu_thu - 50;
			tien_dien = tieu_thu*muc2 + tong2;
		}
		else {
			if (tieu_thu <= 200) {
				tieu_thu = tieu_thu - 100;
				tien_dien = tieu_thu*muc3 + tong3;
			}
			else {
				if (tieu_thu <= 300){
					tieu_thu = tieu_thu - 200;
					tien_dien = tieu_thu*muc4 + tong4;
				}
				else {
					if (tieu_thu <= 400){
						tieu_thu = tieu_thu - 300;
						tien_dien = tieu_thu*muc5 + tong5;
					}
					else {
						tieu_thu = tieu_thu - 400;
						tien_dien = tieu_thu*muc6 + tong6;
					}
				}
			}
		}
	}
	printf("Tien dien la %.2lf vnd \n", tien_dien);
	printf("Thue VAT la %.2lf vnd \n", tien_dien*8/100);
	printf("Tong tien dien la %.2lf vnd", tien_dien*108/100);
	return 0;
}