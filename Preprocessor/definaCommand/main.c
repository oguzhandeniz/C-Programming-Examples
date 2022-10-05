#include <stdio.h>
#include <stdlib.h>

/*      Ön işlemci aşamasında yapılanlar
 		1.Kütüphaneler ve header dosyaları koda entegre edilir.
 		2.Yorum satırları kaldırılır.
 		3.# ifadesiyle yazdığımız sabit değerler ve makrolar koda entegre edilir.
 */


/*
 1. ifdef: Sorgulama başlatmayı sağlar. Sabit ifadenin tanımlanıp tanımlanmadığının sorgulanmasını sağlar; 
 	eğer ki sabit tanımlanmış ise kod bloğuna girilir ve içerisindekiler çalıştırılır.

 2. if defined: Sorgulama başlatmayı sağlar. Sabit ifadenin tanımlanıp tanımlanmadığının sorgulanmasını sağlar; 
 	eğer ki sabit tanımlanmış ise kod bloğuna girilir ve içerisindekiler çalıştırılır.

 3. elif defined: İkinci bir sorgulama opsiyonu sunmamızı sağlar. Daha önceki if defined bloğu çalışmamışsa ve 
 	burada sorguladığımız sabit ifade tanımlanmış ise kod bloğuna girilir ve içerisindekiler çalıştırılır.

 3. else: Sabit ifadenin tanımlanıp tanımlanmadığının sorgulanmasını sağlar; eğer ki sabit tanımlanmamış yani 
 	ifdef veya if defined komutları çalışmadıysa, else bloğuna girilir ve içerisindekiler çalıştırılır

 4. endif: Sorgulamanın bittiği anlamına gelir.

 5. undef: Daha önceden tanımladığımız bir sabitin silinmesini sağlar, undef ile çalıştırılan sabit artık yok kabul edilir.
 */


#define employeCount 5
#define sum +
#define multiplication *
#define numberComparison(num1, num2)  (num1)<(num2) ? (num2):(num1)
#define squareCalc(num)  (num*num)


int main(int argc, const char* argv[])
{


	int* array, i;
	array = (int*)malloc(sizeof(int) * employeCount);

	for (i = 0; i < employeCount; i++)
	{
		array[i] = squareCalc(i);
		printf("%d\n", array[i]);
	}
	printf("Result:%d\n", 5 sum 3);
	printf("Resul:%d\n", 5 multiplication 3);
	printf("Big Number:%d\n", numberComparison(45, 12));


	return 0;
}
