#include <stdio.h>
#include <ctype.h>
int  soLuongChu(char *a){
	int count = 0;
	while( *a !='\0'){
		if(isalpha(*a)){
			count++;
		}
		a++;
	}
	return count;
}
int soLuongChucai(char *a){
	int count = 0;
	while( *a !='\0'){
		if(isdigit(*a)){
			count++;
		}
		a++;
	}
	return count;
}
int soLuongkytu(char *a){
	int count = 0;
	while( *a !='\0'){
		if(!isalnum(*a) && *a !=' '){
			count++;
		}
		a++;
	}
	return count;
}


int main(){
	char a[100];
	int strat;
	
do{
	printf("\n_____________MENU________________\n");
	printf("1.Nhap chuoi\n");
	printf("2.In chuoi\n");
	printf("3.Dem so luong co trong chuoi va in ra \n");
	printf("4.dem so luong chu so trong  chuoi va in ra \n");
	printf("5.dem so luong ky tu dac biet trong chuoi \n");
	printf("6.Thoat\n");
	printf("Moi ban nhap lua chon:\n");
	scanf("%d",&strat);
	switch(strat){
		case 1:
			printf("nhap chuoi ky tu : ");
			fgets(a, sizeof(a),stdin);
			break;
		case 2:
			printf("chuoi : %s",a);
			break;
		case 3:
		 printf("So luong chu cai trong chuoi: %d\n", soLuongChu(a));
			break;
		case 4:
			printf("So luong chu so trong chuoi: %d\n", soLuongChucai(a));
			break;
		case 5:
			 printf("So luong ky tu dac biet trong chuoi: %d\n", soLuongkytu(a));
			break;
		case 6:
			 printf("Thoat chuong trinh.\n");
			break;
		default:
			printf("khong ton tai");
	}
}while(strat !=6);
    return 0;
}


