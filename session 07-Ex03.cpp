#include <stdio.h>

int main(){
	// khai bao mang so nguyen co 5 phan tu
	int arr[5] = {3,2,4,7,5};
	int sochan;
	// in cac phan tu la so chan trong mang
	for(int i =0;i < 5;i++){
		if(arr[i] % 2 ==0){
			printf("So chan trong mang la : %d\n" ,arr[i]);
			sochan = 1;
		}
    }
    // neu ko co so chan thi in ra la khong co so chan
    if(!sochan){
    	printf("Khong co so chan trong mang ");
	}
	return 0;
	
}
