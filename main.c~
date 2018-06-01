#include <stdio.h>
#include <math.h>


int sum(int a, int b){
	return a+b;
}

int sumatoria(int a){ 	
	int b=0;
	int x;
	for (x=0; x<=a; x=x+1){
		b=b+x;
	}
	return b;
}

int multiplicatoria(int a){
	int b=1;
	int x;
	for (x=1;x<=a; x=x+1){
		b=b*x;
	}
	return b;
}

int separate (int x){
	int c= x/100 ;
	int d= (x - c *100) /10 ;
	int u= (x - c *100 -d*10) ;
	printf ("%i\n", c);
	printf ("%i\n", d);
	printf ("%i\n", u);
	return 0;
}

int dias (int s) {
	int d = s / 86400;
	int sr = (s - d * 86400);
	printf ("days: %i\n", d);
	return sr;
}

float devolucionVx (float Dx ,float Dt) {
	float Vx = Dx / Dt ;
	printf ("Vx = %f\n ", Vx) ;
	return Vx ;
}

float devolucionDx (float Dt , float Vx) {
	float Dx = Vx * Dt ;
	printf ("Dx = %f\n " , Dx) ;
	return Dx ; 
}

float devolucionDt (float Dx , float Vx) {
	float Dt = Dx / Vx ;
	printf ("Dt = %f\n " , Dt) ;
	return Dt ; 
}

int main() {
	//separate(867);
	//dias(259201);
	devolucionVx(10 , 5) ;
	devolucionDx(3 , 5) ;
	devolucionDt(50 , 10) ; 

	return 0;
}

