#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define MAX_PERSON_COUNT 50
#define MAX_BOOK_COUNT 50

typedef enum {
	student = 0, employee = 1
} personAuthorizationLevels;

typedef struct {
	char* personName;
	char* personSurname;
	int libraryID;
	int password;
	personAuthorizationLevels personAuthorization;
} personInformation;

typedef struct {
	char* bookName;
	char* authorName;
	char* authorSurname;
	char* publishingHouse;
	int pageCount;
	int bookStatus;
} bookInformation;

int personQuerier(personInformation* userList, int ID)
{
	int i;
	for (i = 0; i < MAX_PERSON_COUNT; i++)
	{
		if (userList[i].libraryID == ID)
		{
			return ID; //bu ID daha önce kullanıldı.
		}
	}
	return -1; //bu ID daha önce hiç kullanılmadı.
}

int registerUser(personInformation* userList)
{

	int i, registerIndex, ID;
	char personName[20], personSurname[20], ch;

	srand(time(NULL)); //ID FARKLILIĞI İÇİN
	for (i = 0; i < MAX_PERSON_COUNT; i++)
	{
		if (userList[i].libraryID == 0)
		{
			registerIndex = i;
			break;
		}
	}
	ID = rand() % 100000 + 1;
	if (personQuerier(userList, ID) != -1)
	{
		printf("Bu ID degeri daha once kullanilmistir...Kayit yapilamiyor.\n");
		exit(1);
	}
	printf("ID numaraniz %d olarak belirlenmistir.", ID);
	userList[registerIndex].libraryID = ID;

	printf("Lutfen sirasiyla ad-soyad bilginizi giriniz:");
	scanf("%s%s", &personName, &personSurname);

	userList[registerIndex].personName = (char*)malloc(sizeof(char) * (strlen(personName) + 1));
	userList[registerIndex].personSurname = (char*)malloc(sizeof(char) * (strlen(personSurname) + 1));
	strcpy(userList[registerIndex].personName, personName);
	strcpy(userList[registerIndex].personSurname, personSurname);

	printf("Lutfen ogrenciyseniz 'O' calisansaniz 'C' giriniz:");
	fflush(stdin);
	ch = getchar();
	if (ch == 'O')
	{
		userList[registerIndex].personAuthorization = student;
	}
	else
	{
		userList[registerIndex].personAuthorization = employee;
	}

	printf("Lutfen sifrenizi giriniz:");
	scanf("%d", &userList[registerIndex].password);

	return userList[registerIndex].personAuthorization;
}


void viewBooks(bookInformation* bookcase)
{
	int i;
	for (i = 0; i < MAX_BOOK_COUNT; i++)
	{
		if (bookcase[i].pageCount != 0)
		{
			printf("Kitap Adi:%s\n", bookcase[i].bookName);
			printf("Kitap Yazari:%s %s\n", bookcase[i].authorName, bookcase[i].authorSurname);
			printf("Kitap Yayinevi:%s\n", bookcase[i].publishingHouse);
			printf("Kitap Sayfa Sayisi:%d\n", bookcase[i].pageCount);
			if (bookcase[i].bookStatus == 0)
			{
				printf("Bu kitap su an raftadir.\n");
			}
			else
			{
				printf("Bu kitap su an baskasi tarafindan alinmistir.\n");
			}
			printf("--------------------------------------------------------------------------------------\n");
		}
		else
		{
			return;
		}
	}
}

void searchBook(bookInformation* bookcase)
{
	int i = 0;
	char bookName[30];

	printf("Lutfen aramak istediginiz kitabin adini giriniz:");
	scanf("%s", &bookName);

	while (i < MAX_BOOK_COUNT && bookcase[i].pageCount != 0)
	{
		if (strcmp(bookcase[i].bookName, bookName) == 0)
		{
			printf("Kitap Adi:%s\n", bookcase[i].bookName);
			printf("Kitap Yazari:%s %s\n", bookcase[i].authorName, bookcase[i].authorSurname);
			printf("Kitap Yayinevi:%s\n", bookcase[i].publishingHouse);
			printf("Kitap Sayfa Sayisi:%d\n", bookcase[i].pageCount);
			return;
		}
		i++;
	}
	printf("Maalesef...Aradiginiz kitap kutuphanemizde bulunmuyor.\n");
}

void addBook(bookInformation* bookcase)
{
	int pageCount, i;
	char bookName[30], publishingHouse[30], authorName[30], authorSurname[30];
	printf("Lutfen kitap adini giriniz:");
	scanf("%s", &bookName);
	printf("Lutfen kitap yayinevi bilgisini giriniz:");
	scanf("%s", &publishingHouse);
	printf("Lutfen kitabin yazar adini ve soyadini sirasiyla giriniz:");
	scanf("%s %s", &authorName, &authorSurname);
	printf("Lutfen kitabin sayfa sayisini giriniz:");
	scanf("%d", &pageCount);

	for (i = 0; i < MAX_BOOK_COUNT; i++)
	{
		if (bookcase[i].pageCount == 0)
		{
			bookcase[i].bookName = (char*)malloc(sizeof(char) * (strlen(bookName) + 1));
			bookcase[i].publishingHouse = (char*)malloc(sizeof(char) * (strlen(publishingHouse) + 1));
			bookcase[i].authorName = (char*)malloc(sizeof(char) * (strlen(authorName) + 1));
			bookcase[i].authorSurname = (char*)malloc(sizeof(char) * (strlen(authorSurname) + 1));
			strcpy(bookcase[i].bookName, bookName);
			strcpy(bookcase[i].authorName, authorName);
			strcpy(bookcase[i].authorSurname, authorSurname);
			strcpy(bookcase[i].publishingHouse, publishingHouse);
			bookcase[i].pageCount = pageCount;
			break;
		}
	}
}

void viewUsers(personInformation* userList)
{
	int i = 0;
	while (i < MAX_PERSON_COUNT && userList[i].libraryID != 0)
	{
		printf("Uye Adi-Soyadi:%s %s\n", userList[i].personName, userList[i].personSurname);
		printf("Uye ID Bilgisi:%d\n", userList[i].libraryID);
		if (userList[i].personAuthorization == 1)
		{
			printf("Uye Durumu: Calisan\n");
		}
		else
		{
			printf("Uye Durumu: Ogrenci\n");
		}
		printf("--------------------------------------------------------------------------------------\n");
		i++;
	}
}


int login(personInformation* userList)
{
	int ID, password, i;
	printf("Lutfen kutuphane ID bilginizi giriniz:");
	scanf("%d", &ID);
	printf("Lutfen kutuphane sifre bilginizi giriniz:");
	scanf("%d", &password);
	for (i = 0; i < MAX_PERSON_COUNT; i++)
	{
		if (userList[i].libraryID == ID)
		{
			if (userList[i].password == password)
			{
				printf("ID-Sifre dogru...Giris Basarili.\n");
				return userList[i].personAuthorization;
			}
			return -1;//sifre yanlis girildi.giris basarisiz.
		}
	}
	return -2;//O ID DEĞERİNE AİT KİMSE BULUNAMADI.
}

void usersExport(personInformation* userList)
{
	FILE* userRegistration;
	int i;
	char name[20], surname[20];

	userRegistration = fopen("/Users/oguzhan/Desktop/CProgrammingExamples/LibraryProject/libraryProject/uyeListesi.txt",
			"r");
	if (userRegistration == NULL)
	{
		fprintf(stderr, "Uye listesine ulasilirken bir hata meydana geldi.\n");
		exit(1);
	}

	while (!feof(userRegistration))
	{
		for (i = 0; i < MAX_PERSON_COUNT; i++)
		{
			if (userList[i].libraryID == 0)
			{
				fscanf(userRegistration, "%s\t%s\t%d\t%d\t%d\n", name, surname, &userList[i].personAuthorization,
						&userList[i].libraryID, &userList[i].password);
				userList[i].personName = (char*)malloc(sizeof(char) * (strlen(name) + 1));
				userList[i].personSurname = (char*)malloc(sizeof(char) * (strlen(surname) + 1));
				strcpy(userList[i].personName, name);
				strcpy(userList[i].personSurname, surname);
				break;
			}

		}
	}
	fclose(userRegistration);
}

void bookssExport(bookInformation* bookcase)
{
	char bookName[30], authorName[30], publishingHouse[30], authorSurname[30];
	FILE* bookRegistration;
	int i;

	bookRegistration = fopen(
			"/Users/oguzhan/Desktop/CProgrammingExamples/LibraryProject/libraryProject/kitapListesi.txt",
			"r");
	if (bookRegistration == NULL)
	{
		fprintf(stderr, "Kitap listesine ulasilirken bir hata meydana geldi.\n");
		exit(1);
	}

	while (!feof(bookRegistration))
	{
		for (i = 0; i < MAX_BOOK_COUNT; i++)
		{
			if (bookcase[i].pageCount == 0)
			{
				fscanf(bookRegistration, "%s\t%s\t%s\t%s\t%d\t%d\n", bookName, publishingHouse, authorName,
						authorSurname,
						&bookcase[i].bookStatus, &bookcase[i].pageCount);
				bookcase[i].bookName = (char*)malloc(sizeof(char) * (strlen(bookName) + 1));
				bookcase[i].authorName = (char*)malloc(sizeof(char) * (strlen(authorName) + 1));
				bookcase[i].authorSurname = (char*)malloc(sizeof(char) * (strlen(authorSurname) + 1));
				bookcase[i].publishingHouse = (char*)malloc(sizeof(char) * (strlen(publishingHouse) + 1));
				strcpy(bookcase[i].bookName, bookName);
				strcpy(bookcase[i].authorName, authorName);
				strcpy(bookcase[i].authorSurname, authorSurname);
				strcpy(bookcase[i].publishingHouse, publishingHouse);
				break;

			}
		}
	}
	fclose(bookRegistration);
}

void backUpBooks(bookInformation* bookcase)
{
	FILE* bookRegistration;
	int i = 0;

	bookRegistration = fopen(
			"/Users/oguzhan/Desktop/CProgrammingExamples/LibraryProject/libraryProject/kitapListesi.txt", "w");
	if (bookRegistration == NULL)
	{
		fprintf(stderr, "Kitap listesine ulasilirken bir hata meydana geldi.\n");
		exit(1);
	}

	while (i < MAX_BOOK_COUNT && bookcase[i].pageCount != 0)
	{
		fprintf(bookRegistration, "%s\t%s\t%s\t%s\t%d\t%d\n", bookcase[i].bookName, bookcase[i].publishingHouse,
				bookcase[i].authorName, bookcase[i].authorSurname, bookcase[i].bookStatus,
				bookcase[i].pageCount);
		i++;
	}
	fclose(bookRegistration);
}

void backUpUsers(personInformation* userList)
{
	FILE* userRegistration;
	int i = 0;

	userRegistration = fopen("/Users/oguzhan/Desktop/CProgrammingExamples/LibraryProject/libraryProject/uyeListesi.txt",
			"w");
	if (userRegistration == NULL)
	{
		fprintf(stderr, "Uye listesine ulasilirken bir hata meydana geldi.\n");
		exit(1);
	}
	while (i < MAX_PERSON_COUNT && userList[i].libraryID != 0)
	{
		fprintf(userRegistration, "%s\t%s\t%d\t%d\t%d\n", userList[i].personName, userList[i].personSurname,
				userList[i].personAuthorization, userList[i].libraryID, userList[i].password);
		i++;
	}
	fclose(userRegistration);
}

int main(void)
{
	bookInformation* bookcase;
	personInformation* userList;
	personAuthorizationLevels userAuthorization;
	int loginStatus;
	char ch;

	bookcase = (bookInformation*)calloc(MAX_BOOK_COUNT, sizeof(bookInformation));
	userList = (personInformation*)calloc(MAX_PERSON_COUNT, sizeof(personInformation));

	usersExport(userList);//kitaplik ve üyelistesi arraylerine aktarım sağlandı.
	bookssExport(bookcase);

	///KAYIT OL-GİRİŞ YAP
	printf("\t\t\tMerhaba,Kutuphane sistemimize hosgeldiniz\n");
	printf("1.Sisteme kayit  olmak istiyorsaniz 'K'\n2.Sisteme giris yapmak istiyorsaniz 'G' tuslayiniz:");
	fflush(stdin);
	ch = getchar();
	if (ch == 'K' || ch == 'k')
	{
		loginStatus = registerUser(userList);//ogrenci mi,yoksa calisan mi.
	}
	else if (ch == 'G' || ch == 'g')
	{
		loginStatus = login(userList);//ogrenci mi,yoksa calisan mi.
		if (loginStatus == -1)
		{
			printf("Sifrenizi yanlis girdiniz...Giris yapilamiyor.\n");
			exit(1);
		}
		else if (loginStatus == -2)
		{
			printf("Boyle bir ID degeri sistemde kayitli degil...Giris yapilamiyor.\n");
			exit(1);
		}
	}
	else
	{
		printf("Yanlis bir tuslama yaptiniz...Sistemden cikiliyor.\n");
		exit(1);
	}

	/////UYENIN YETKİSİNİ BELİRLEME
	if (loginStatus == 1)
	{
		userAuthorization = employee;
	}
	else
	{
		userAuthorization = student;
	}

	if (userAuthorization == student)
	{
		do
		{
			printf("1.Tum kitaplari goruntulemek icin 'G' tuslayiniz\n2.Kitap aramak icin 'A' tuslayiniz\n3.Cikis yapmak icin 'Q' tuslayiniz:");
			fflush(stdin);
			ch = getchar();
			switch (ch)
			{
			case 'G':
			case 'g':
				viewBooks(bookcase);
				break;
			case 'A':
			case 'a':
				searchBook(bookcase);
				break;
			case 'Q':
			case 'q':
				backUpBooks(bookcase);//cikis yapilirken, tüm kitaplar ve üye bilgileri dosyaya kaydediliyor.
				backUpUsers(userList);
				printf("Cikis yapiliyor...");
				break;
			default:
				printf("Hatali bir tuslama yaptiniz");
				break;
			}
		} while (ch != 'Q');
	}
	else
	{
		do
		{
			printf("1.Kitap eklemek istiyorsaniz 'E' tuslayiniz\n2.Tum uyeleri goruntulemek istiyorsaniz 'U' tuslayiniz\n3.Cikis yapmak istiyorsaniz 'Q' tuslayiniz:");
			fflush(stdin);
			ch = getchar();
			switch (ch)
			{
			case 'E':
			case 'e':
				addBook(bookcase);
				break;
			case 'U':
			case 'u':
				viewUsers(userList);
				break;
			case 'Q':
			case 'q':
				backUpUsers(userList);
				backUpBooks(bookcase);
				printf("Cikis yapiliyor...\n");
				break;
			default:
				printf("Yanlis bir tuslama yaptiniz.\n");
				break;
			}

		} while (ch != 'Q');
	}
	return 0;
}