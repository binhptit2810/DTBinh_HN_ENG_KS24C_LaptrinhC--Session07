#include <stdio.h>

int main(){
	// khai bao mamg so nguyen co 5 phan tu va gan gia tri
	int arr[5]={4,5,7,23,8};
	for(int i=0;i<5;i++){
		if(arr[i] % 2 == 0){
			arr[i] = arr[i] + 3;	
		}
		else{
			arr[i] = arr[i] + 2;
		}
		printf("Phan tu thu %d cua mang la : %d\n",i +1,arr[i]);
    }
    return 0;	
}
