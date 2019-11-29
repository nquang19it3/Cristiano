#include<stdio.h>
#include<conio.h>
const int MAX=100;
struct SinhVien
{
	char Name[20];
	int ID[5];
	int Age;
	float Mark;
};
typedef struct SinhVien SV;

void nhapN(SV a[],int n){
	for(int i=0;i<n;i++){
	  printf("Sinh Vien %d\n",(i+1));
	  printf("Name: "); fflush(stdin); gets(a[i].Name);
	  printf("ID: "); fflush(stdin); scanf("%s",&a[i].ID);
	  printf("Age: "); fflush(stdin); scanf("%d",&a[i].Age);
	  printf("Mark: "); fflush(stdin); scanf("%f",&a[i].Mark);
	}
}

void xuatN(SV a[],int n){
		printf("|%3s|%20s|%5s|%5s|%5s|\n","STT","Name","ID","Age","Mark");
	for(int i=0;i<n;i++){
		printf("|%3d|%20s|%5s|%5d|%.3f|\n",(i+1),a[i].Name,a[i].ID,a[i].Age,a[i].Mark);
	}
	 printf("|%3s|%20s|%5s|%5s|%5s|\n","___","____________________","_____","_____","_____");
}

void xuatNsvgioi(SV a[],int n){
		printf("|%3s|%20s|%5s|%5s|%5s|\n","STT","Name","ID","Age","Mark");
	 for(int i=0;i<n;i++){
	  if(a[i].Mark>8){
		printf("|%3d|%20s|%5s|%5d|%.3f|\n",(i+1),a[i].Name,a[i].ID,a[i].Age,a[i].Mark);
	  }
	 }
	 	 printf("|%3s|%20s|%5s|%5s|%5s|\n","___","____________________","_____","_____","_____");
}

void sapxep(SV a[],int n){
	for(int i = 0;i < n-1;++i){
     for(int j = i+1; j < n;++j){
      if(a[j].Mark > a[i].Mark){
        SV tmp = a[j];
        a[j] = a[i];
        a[i] = tmp;
      }
     }
    }
}
	void File(SV a[],int n){
	FILE *dssv;
	dssv = fopen("C:\\New folder\\DSSV.txt","w");
	fprintf(dssv, "%20s|%5s|%5s|%5s|\n","Name","ID","Age","Mark");
	for(int i=0;i<n;i++)
	{
		fprintf(dssv,"%20s|%5s|%5d|%.3f|\n",a[i].Name,a[i].ID,a[i].Age,a[i].Mark );
	}
	fclose(dssv);
	}

 main()
{
	SV a[MAX];
	FILE *dssv;
	int n;
	printf("SO LUONG SINH VIEN CAN NHAP: ");
	scanf("%d",&n);
	nhapN(a,n);
	printf("DSSV CO DIEM LON HON 8:\n");
	xuatNsvgioi(a,n);
	printf("SAP XEP SINH VIEN CO DIEM GIAM DAN (*_*)\n");
	sapxep(a,n);
	xuatN(a,n);
	File(a,n);
	printf("Luu vao file DSSV.txt thanh cong!!!");
	getch();
	return 0;
}
