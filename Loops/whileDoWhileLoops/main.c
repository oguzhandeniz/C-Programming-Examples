#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(int argc, const char* argv[])
{

	// WHILE LOOP
	/*
	while (condition)
	{
		transactions
	}
	*/

	/*
	int i=0;
	while (i<0)
	{
		printf("i Number: %d\n",i);
		i++;
	}
	*/




	// DO-WHİLE LOOP
	/*
	do
	{
		First it performs the operations here and then queries the conditions in the while loop.
	}
	while (condition)
	 {
		transactions
	}
	 */

	/*
	do
	{
		printf("i Number: %d\n",i);
		i++;
	}
	while (i<0);
	*/






	/*
   int i=0;
   while (i<10)
   {
	   i++;

	   if (i==10)
	   {
		   break; 		// loop ends when break occurs
	   }
	   if (i%2==0)
	   {
		   continue; 	// When continue is seen, the bottom lines are skipped completely, the loop returns to the beginning
	   }
	   printf("i Number: %d\n",i);
   }
   */




	// Prints the reverse letter of the number and the number of digits.

	int basamakSayisi = 0, sayi, geciciSayi;
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d", &sayi);
	geciciSayi = sayi;
	printf("Sayinin Tersi:");
	while (geciciSayi != 0)
	{
		printf("%d", geciciSayi % 10);
		geciciSayi /= 10;
		basamakSayisi++;
	}
	printf("\n%d sayisi %d basamaklidir\n", sayi, basamakSayisi);

	return 0;
}
