#include <stdio.h>

int main(){
	
	//int   b[] = {1,2,3,4,5,6,7,8,9};
	
	//int size  = sizeof(b) / sizeof(b[0]); 
	//printarray(b, size);

	int size2 = 20;
	int c[size2];
	arrayfibo (c, size2) ;
	printarray (c, size2)	;
}



int printarray (int b[]  , int size) {

	int i ;
	for ( i = 0  ;   i < size  ;   i = i +1) {	
		printf ("%i\n" , b[i] );
	} 
	return 0 ;
   
}


int arrayfibo (int c[] , int size) {

	int i ;
	c[0] = 0;
	c[1] = 1;
	for ( i = 2 ; i < size ; i = i+1) {

	c[i] = c[i-1] + c[i-2] ;
 
}	

	return 0 ;
}




