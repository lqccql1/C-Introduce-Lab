#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>

int main(){
        char DS[100][30], ten[30];
        int n,d2,j,t;
        printf("Nhap vao so luong n ");
        scanf("%d",&n);
        for (int i=0;i<n;i++)
          {
		  gets(DS[i]);
        int L = strlen(DS[i]);
       // lay  so ky tu cua ten
        for(int i=L-1;i>0;i--)
        {
             if(DS[i]==' ') {
                d2=i; 
                break;
             }
        }
        // them cac ky tu cua ten vao mang
      for(int i=d2+1, j=0;i<L;i++)
        {
            ten[j]=DS[i];
            j++;                
        }
        ten[j]='\0';
        char tam[30];h
        for (int i=0; i<L;i++)
        if(strcmp(ten[i],ten[i+1]))
           { strcpy(tam,ten[i]);
             strcpy(ten[i],ten[i+1]);
             strcpy(ten[i+1],tam);
		}
	}
        printf("danh sach da duoc sap xep la: \n");
        for (int i=0;i<n;i++)
        {
		  printf("\n %s", ten[i]);
		}

        getch();
    }