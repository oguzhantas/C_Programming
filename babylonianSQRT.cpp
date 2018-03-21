#include "stdio.h"
#include "math.h"
//K�k alma i�leminin Babylon tarz�nda yap�l���
double BabylonianSQRT(double a, double hata){
	double x=a;
	while ( abs(x-a/x)>hata)
	{
		x= (x+a/x)/2;
	}
	return x;
}

int main(){
	double a=2, hata= 0.0001;
	double sonuc= BabylonianSQRT(a,hata);
	printf("Babylonian K�k %lf\n", sonuc);
	printf("Normal K�k: %lf",sqrt(a));
	return 0;
}
