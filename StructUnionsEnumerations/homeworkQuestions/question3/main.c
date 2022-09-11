#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

/*
	3.Question->Make a library project,create a book information structure, inside the structure,
 	information such as the name of the book, the author of the book, the number of pages, the publishing house is obtained.
 	In the main part, create a dynamic array based on the number of books you will receive from the user and store the books there.
	Write functions Add Book, Search Book, View All Books and try them in the main part.
 	Put a constraint on the add book function in the library project using the enum construct.
 	There will be 2 authorizations. If your authority is a student, you will not be able to add books,
 	and if you are authorized to work, you can add books.


 	Türkçe : Bir adet kitaplık projesi yapmanızı istiyorum,bir adet kitapBilgileri yapısı oluşturunuz, yapının içinde bookName,kitapYazari,sayfaSayisi,
			yayinEvi gibi bilgiler içersin. Main kısımda kullanıcıdan alacağınız kitap sayısına göre bir dinamik array oluşturup kitapları orada saklayın.
			Kitap Ekle, Kitap Ara, Tum Kitapları goruntule fonksiyonları yazınız ve bunları main kısımda deneyiniz.
			Kitaplık projesindeki kitap ekle fonksiyonuna enum yapısını kullanarak bir kısıtlama getirin.
			2 adet yetki olacak. Eğer yetkiniz ogrenci ise kitap ekleme yapamayacaksınız, eğer ki yetkiniz calisan ise kitap ekleyebilirsiniz.
*/

typedef struct {
	char bookAuthor[20];
	char bookName[20];
	char publishingHouse[20];
	int pageCount;
} bookInfo;

typedef enum {
	student = 1, employee = 2

} authorityLevels;

void bookAdd(bookInfo* bookArray, int bookCount, authorityLevels authority)
{
	int i = 0;                                //for loop.

	if (authority == student)
	{
		puts("I'm sorry.You are not authorized to Add Books.You can't Add Books.");
		return;
	}


	while (1)
	{
		if (i > bookCount)
		{                    //the bookshelf is full
			puts("I'm sorry. No more books can be added, the library is completely full.\n");
			return;
		}
		if (bookArray[i].pageCount == 0)
		{        //that index of the library is empty.
			printf("Enter the Name of the Book:");
			scanf("%s", &bookArray[i].bookName);
			printf("Enter the Author of the Book:");
			scanf("%s", &bookArray[i].bookAuthor);
			printf("Enter the Book Publishing House Information:");
			scanf("%s", &bookArray[i].publishingHouse);
			printf("Enter the Book Page Number Information:");
			scanf("%d", &bookArray[i].pageCount);
			return;
		}
		i++;            //we continue to search for vacancies from the next index.
	}
}

void bookView(bookInfo* bookArray, int bookNumber)
{
	int i;
	for (i = 0; i < bookNumber; i++)
	{
		printf("Book Name:%s\n", bookArray[i].bookName);
		printf("Book Author:%s\n", bookArray[i].bookAuthor);
		printf("Book Publishing House:%s\n", bookArray[i].publishingHouse);
		printf("Book Page Amount:%d\n", bookArray[i].pageCount);
		printf("-----------------------------------------------\n");
	}
}

int findBook(bookInfo* bookArray, char* bookName, int bookNumber)
{
	int i;
	for (i = 0; i < bookNumber; i++)
	{
		if (strcmp(bookArray[i].bookName, bookName) == 0)
		{
			return i;
		}
	}
	return -1;
}


int main(void)
{
	int bookNumber;
	bookInfo* bookShelf;
	char userRequest, bookName[20];
	authorityLevels userAuthority;


	puts("Please enter how many books you would like to add:");
	scanf("%d", &bookNumber);

	bookShelf = (bookInfo*)calloc(bookNumber, sizeof(bookInfo));

	do
	{
		fflush(stdin);
		puts("Press 'E' if you want to add a book, 'G' if you want to see all the books, 'A' if you want to search, 'Q' if you want to exit.");
		userRequest = getchar();
		switch (userRequest)
		{
		case 'E':
			puts("If you are a student, enter 1, if you are working, enter 2.");
			scanf("%d", &userAuthority);
			bookAdd(bookShelf, bookNumber, userAuthority);
			break;
		case 'A':
			puts("Please enter the name of the book you want to search for:");
			scanf("%s", &bookName);
			int book_Index = findBook(bookShelf, bookName, bookNumber);
			if (book_Index == -1)
			{
				printf("The book you are looking for has not been found in the library.");
			}
			else
			{
				printf("The book you are looking for was found in %c-%d of our library.\n", bookName[0],
						book_Index + 1);
			}
			break;
		case 'G':
			bookView(bookShelf, bookNumber);
			break;
		case 'Q':
			puts("Exit done. Thanks\n");
			break;
		default:
			puts("You made a wrong enter.");
			break;
		}
	} while (userRequest != 'Q');
	return 0;
}
