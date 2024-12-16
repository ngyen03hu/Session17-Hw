#include <stdio.h>
#include <stdlib.h>
	
int  tinhTongphantu(int arr[100],int number){
	int summ = 0;
	for(int i = 0 ; i<number;i++){
		summ += arr[i];
	}
	return summ;
}
int  innumbermax(int arr[100],int number){
	int max = arr[0] ;
		for (int i = 0 ; i< number; i++){
			if (arr[i]>max){
			max=arr[i];
		}
	}
	return max;
} 
int main() {
	int arr[100];
	int *arrPtr= arr; 
	int number;
	int strat;
do{
	printf("\n_____________MENU________________\n");
	printf("1.Nhap vao so phan tu va phan tu\n");
	printf("2.Hien thi cac phan tu trong mang\n");
	printf("3.Tinh do dai mang\n");
	printf("4.Tinh tong cac phan tu co trong mang\n");
	printf("5.Hien thi phan tu co trong mang\n");
	printf("6.Thoat\n");
	printf("Moi ban nhap lua chon:\n");
	scanf("%d",&strat);
switch(strat){
		case 1:// Nhap so phan tu va tung phan tu 
		printf("nhap so phan tu:\n");
		scanf("%d",&number);
			for(int i =0 ; i<number;i++){
				printf("array[%d]=",i);
				scanf("%d", arrPtr + i );
			}
			
			break;
		case 2:
			for(int i = 0 ; i<number;i++){
				printf("arr[%d]=%d\n",i,*(arrPtr +i));
			} 
			break;
		case 3:
			printf("do dai %d",number);
			break;
		case 4: 


		printf("tinh tong cac phan tu la : %d",tinhTongphantu(arr,number));
			break;
		case 5:
			printf("phan tu lon nhat co trong mang la %d",innumbermax(arr,number));
			break;
		case 6:
			break;
		default:
			printf("k co");
		}
}while(strat !=6);
    return 0;
}


