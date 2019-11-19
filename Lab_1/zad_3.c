#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
int i;
float min,maks,sr;
float tab[20];
time_t czas;
 srand( (unsigned int)time(&czas) ); 
  
int a=118, b=286;
for(int i=0; i<20; i++)
	{tab[i]=a+rand()%(b-a+1);
	if(i==0)
	{min=tab[i];
	maks=tab[i];
	}
	if(tab[i]<=min)min=tab[i];
	if(tab[i]>=maks)maks=tab[i];

	}
sr=(min+maks)/2;
printf("wartosc minimalna wynosi %.1f, wartosc maksymalna wynosi %.1f, ich srednia wynosi %.1f\n", min, maks, sr);
	
return 0;   
}
