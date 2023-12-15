/*Q.3 Write a Program to convert the given string in toggle case without using any string function.
output:
helloWORLD
*/

#include<stdio.h>

void main(){
	
	int i;
	char a[]={'H','E','L','L','O','w','o','r','l','d'};
	for(i=0; i<10; i++){
	if(a[i]<97){
	
		a[i]+=32;
		printf("%c",a[i]);
		}else{
		
		a[i]=a[i]-32;
		printf("%c",a[i]);
		}
	}
}
