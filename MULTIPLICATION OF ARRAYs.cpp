#include<stdio.h>
int main(){

	int array1[5];
	int array2[5];
	int prod[5];
	
	printf("Enter value for 1st array:");
	for(int i=0; i<5; i++){
	scanf("%d", &array1[i]);
}
	printf("Enter value for 2nd array:");
	for(int i=0; i<5; i++){
	scanf("%d", &array2[i]);
}   
    for(int i=0; i<5;i++){
    prod[i] = array1[i] * array2[i];
}
    for(int i=0; i<5;i++){
    	printf("\n The value of the third element is: %d", prod[i]);
    }
    return 0;
}	
