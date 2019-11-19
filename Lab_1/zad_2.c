#include <stdio.h>

int main(){

int licznik=0;
  
for(int i=-5; i<=98; i++)
	{if(i%4==0 && i%5!=0)
		{printf("%d\n", i);
		licznik=licznik+1;	
	
		}

	}  
printf("ilosc takich liczb wynosi %d\n", licznik);
  

return 0;   
}
