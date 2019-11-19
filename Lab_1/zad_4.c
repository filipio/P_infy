#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
int kwota,a,b,c;
scanf("%d", &kwota);

a=kwota/20;

kwota=kwota%20;

b=kwota/10;

kwota=kwota%10;

c=kwota/5;


printf("%d banknotow o nominale 20\n %d banknotow o nominale 10\n %d banknotow o nominale 5\n",a,b,c);
	
return 0;   
}
