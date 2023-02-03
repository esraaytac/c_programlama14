#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int topla(int sayi){
	int top=0, i;
	for (i = 1; i <= sayi ; i++){
	 
	 top +=i ; 	
		
	}
	
	return top;
}





int main() {
	
	
	int say; 
	
	printf("sayinizi giriniz: "); 
	scanf ("%d", &say);
	printf("girdiginiz sayiya (%d) kadar ki toplam : %d", say, topla(say));
	
	
	
	return 0;
}
