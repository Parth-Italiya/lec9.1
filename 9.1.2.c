/*
Q.2 Write a Program to convert the given string in lowercase without using any string function.
output:
helloworld
*/

#include<stdio.h>

void main(){
	
	int i;
	char a[]={'H','E','L','L','O','W','O','R','L','D'};
	
	for(i=0; i<10; i++){
		a[i]=a[i]+32;
		printf("%c",a[i]);
		
	}
}

