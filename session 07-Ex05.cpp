#include <stdio.h>

int main(){
	// khai bao va gan gia tri cho mang so nguyen co 5 phan tu
	int arr[5] = {3,6,78,4,9};
	int min = arr[0];
	int max = arr[0];
	// su dung vong lap de tim phan tu lon nhat va nho nhat
	for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];  
        }
        if (arr[i] < min) {
            min = arr[i]; 
        }
    }
    // in ket qua ra ngoai man hinh
    printf("So lon nhat trong mang la : %d\n", max);
    printf("So be nhat trong mang la : %d\n", min);
    return 0;
    
}
