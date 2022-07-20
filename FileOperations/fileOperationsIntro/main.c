#include <stdio.h>

/* Dosya Tipleri
 1.Metin Dosyaları : ASCII tabloya göre, btye düzeyinde saklanır. Satır düzeyinde geriye dönük ekleme yapılamıyor.
 2.İkili Dosyalar  : 0-1 bit karşılığında , geriye dönük ekleme yapılabilir.
 */




int main(int argc, const char* argv[])
{

	FILE* file = fopen("/Users/oguzhan/Desktop/CProgrammingExamples/FileOperations/fileOperationsIntro/deneme.txt",
			"w");

	if (file != NULL)
	{
		printf("Your file was successfully created.\n");
	}
	else
	{
		printf("An error occurred while creating the file.\n");
	}



	/* DOSYA AÇILIŞ MODLARI
	 r-> read, Dosyadan okuma yapmak için kullanılır.Dosyanın var olması gerekir.
	 w-> write, Dosyaya yazma işlemi yapar.Eğer dosya var ise , içeriğini siler ve yeni dosya oluşturur.
	 a->      , Dosya var ise sonundan ekleme yapar. Dosya yok ise dosyayı oluşturur.

	 rb->read binary , aynı işlevin binary dosya için olan hali
	 wb->write binary,
	 ab->

	 r+-> hem yazma hem okuma yapabilirsiniz, ancak dosyanın zaten var olması gerekir.
	 w+-> hem yazma hem okuma yapabilirsiniz, dosyanın içeriği silinebilir.
	 a+-> hem yazma hem okuma yapabilirsiniz, dosya var ise sonuna ekleme yapar, yoksa dosyayı oluşturur.

	 rb+->read binary , aynı işlevin binary dosya için olan hali
	 wb+->write binary,
	 ab+->
	*/



	int closeFile;
	closeFile = fclose(file);
	if (closeFile == 0)
	{
		printf("The file has been successfully closed.\n");
	}
	else
	{
		printf("An error occurred while closing the file.\n");
	}


	return 0;
}
