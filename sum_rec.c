#include <stdio.h>

int arr[10] = { 5, 5, 5, 5, 5, 5, 5, 5, 5, 5  };
int sum(int *arr,int LastIndex);
int  main(){

		int size = *(&arr + 1) - arr;
		int summary=sum(arr,size-1);
		printf("Sum ==>  %d \n",summary)  ;
		return 0;
}
int sum(int *arr,int lastIndex){
		if(lastIndex==0){
				return arr[lastIndex];
		}
		return arr[lastIndex]+sum(arr,lastIndex-1);	
}
