#include <stdio.h>

int arr[10] = { 5, 5, 5, 5, 5, 5, 5, 5, 5, 5  };
int sum;
int  main(){

		int size = *(&arr + 1) - arr;
		for (int i =0;i<size;i++){
				sum+=arr[i];
		}
		printf("Sum ==>  %d \n",sum)  ;
		return 0;
}
