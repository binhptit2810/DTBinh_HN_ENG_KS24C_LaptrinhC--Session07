#include <stdio.h>

int main(){
	// khai bao mang so nguyen co 5 phan tu
	int arr[5];
	// yeu cau nguoi dung nhap vao 5 phan tu cua mang
	for(int i =0; i < 5; i++ ){
		printf("Moi ban nhap phan tu thu %d cua mang : ",i + 1);
		scanf("%d", &arr[i]);
	}
	// in cac phan tu nguoi dung nhap ra ngaoi man hinh
	for(int i =0; i < 5; i++){
		printf("%d\n", arr[i]);
	}
	return 0;
}
