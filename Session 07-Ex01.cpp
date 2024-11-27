#include <stdio.h>

int main(){
	// khai bao va nhap gia tri cho mang
	int array[6]={4,5,6,8,3,7};
	int length = sizeof(array) / sizeof(array[0]);
	//in ra tung phan tu cua mang va do dai cua mang
	for(int i =0 ; i < length; i++){
		printf("%d\n", array[i]);
	}
	printf("Do dai cua mang la : %d\n", length);
	return 0;
}
