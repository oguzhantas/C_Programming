#include "stdio.h"
//fonksiyonlara giris, asagidaki fonksiyon iki tam say�y� alarak
// toplar ve sonuc olarak bir tam say� dondurur.
int toplam(int a, int b)
{
	return (a+b);
}

int main(){
	
	int x=5, y=3;
	printf("%d",toplam(x,y));
	return 0;
}
