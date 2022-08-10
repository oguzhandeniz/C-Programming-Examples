#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ROOM_COUNT 100

typedef struct {
	char* customerName;
	char* customerSurname;

} CustomerInfo;


typedef struct {
	int day;
	int month;
	int year;

} dateInfo;


typedef struct {
	int personCount;
	int roomPosition;      // Oda dolu ise 1 , boş ise 0.
	int roomNumber;        // 1-100 arasında oda var.
	double priceInfo;
	CustomerInfo customer;
	dateInfo checkinDate;
	dateInfo checkOutDate;

} roomInfo;


typedef enum {
	customer = 0, personel = 1

} authorizationLevels;


int dayDifferenceCalc(dateInfo checkinDate, dateInfo checkOutDate)
{

	if (checkinDate.day > checkOutDate.day)
	{
		checkOutDate.month -= 1;
		checkOutDate.day += 30;
	}

	if (checkinDate.month > checkOutDate.month)
	{
		checkOutDate.year -= 1;
		checkOutDate.month += 12;
	}

	dateInfo dateDifference;
	dateDifference.day = checkOutDate.day - checkinDate.day;
	dateDifference.month = checkOutDate.month - checkinDate.month;
	dateDifference.year = checkOutDate.year - checkinDate.year;

	int dayDifference = dateDifference.year * 365 + dateDifference.month * 30 + dateDifference.day;
	return dayDifference;

}


double priceCalc(roomInfo* rooms, int roomNumber)
{

	int dayDifference = dayDifferenceCalc(rooms[roomNumber - 1].checkinDate, rooms[roomNumber - 1].checkOutDate);
	printf("Number of days of your stay:%d\n", dayDifference);
	return dayDifference * 150 * rooms[roomNumber - 1].personCount;

}


void resercationClean(roomInfo* rooms, int roomNumber)
{

	rooms[roomNumber - 1].roomPosition = 0;//odayi bosalttik
	free(rooms[roomNumber - 1].customer.customerName);//customer adi ve soyadi icin ayrilan alanlar bosalildi.
	free(rooms[roomNumber - 1].customer.customerSurname);
	printf("check-out/cancellation of room %d has been completed.\n", roomNumber);

}

void fullRoomInfoPrint(roomInfo* rooms)
{

	int i;
	for (i = 0; i < ROOM_COUNT; i++)
	{
		if (rooms[i].roomPosition != 0)  //1 ise oda dolu,0 ise bos.
		{
			printf("-------------------------------------------------------------------------\n");
			printf("Room Number:%d\n", rooms[i].roomNumber);
			printf("Customer Name-Surname:%s %s\n", rooms[i].customer.customerName, rooms[i].customer.customerSurname);
			printf("Number Of People:%d\n", rooms[i].personCount);
			printf("Price Information:%.2lf\n", rooms[i].priceInfo);
			printf("Date of Check-in:%d:%d:%d\n", rooms[i].checkinDate.day, rooms[i].checkinDate.month,rooms[i].checkinDate.year);
			printf("Date of Check-out:%d:%d:%d\n", rooms[i].checkOutDate.day, rooms[i].checkOutDate.month,rooms[i].checkOutDate.year);
		}
	}
}

void newCustomerAdd(roomInfo* rooms)
{

	int queryingRoom;
	char customerName[20], customerSurname[20], ch;

	printf("Please enter the room you want to register in:");
	scanf("%d", &queryingRoom);

	if (rooms[queryingRoom - 1].roomPosition != 0)
	{
		printf("Unfortunately.The room you want to register in is full until %d:%d:%d.",rooms[queryingRoom - 1].checkOutDate.day, rooms[queryingRoom - 1].checkOutDate.month,rooms[queryingRoom - 1].checkOutDate.year);
		return;
	}

	rooms[queryingRoom - 1].roomNumber = queryingRoom;//ODA NUMARASI ATANDI

	printf("Please enter Name-Surname:");
	scanf("%s%s", &customerName, &customerSurname);

	rooms[queryingRoom - 1].customer.customerName = (char*)malloc(sizeof(char) * strlen(customerName) + 1);
	rooms[queryingRoom - 1].customer.customerSurname = (char*)malloc(sizeof(char) * strlen(customerSurname) + 1);
	strcpy(rooms[queryingRoom - 1].customer.customerName, customerName);
	strcpy(rooms[queryingRoom - 1].customer.customerSurname, customerSurname);

	printf("Please enter how many people you will stay:");
	scanf("%d", &rooms[queryingRoom - 1].personCount);

	printf("Please enter the date of check-in (day: month: year) in the form:");
	scanf("%d:%d:%d", &rooms[queryingRoom - 1].checkinDate.day, &rooms[queryingRoom - 1].checkinDate.month,&rooms[queryingRoom - 1].checkinDate.year);

	printf("Please enter the date of check-out (day: month: year) in the form:");
	scanf("%d:%d:%d", &rooms[queryingRoom - 1].checkOutDate.day, &rooms[queryingRoom - 1].checkOutDate.month,&rooms[queryingRoom - 1].checkOutDate.year);

	rooms[queryingRoom - 1].priceInfo = priceCalc(rooms, queryingRoom);
	printf("The total amount you need to pay is:$%.2lf\n", rooms[queryingRoom - 1].priceInfo);
	printf("Do you approve(Y-N):");
	fflush(stdin);
	ch = getchar();

	if (ch == 'Y')
	{
		resercationClean(rooms, queryingRoom);
		return;
	}
	rooms[queryingRoom - 1].roomPosition = 1;// yani odamız doldu.
}

void roomInfoQerying(roomInfo* rooms, int roomNumber)
{
	if (rooms[roomNumber - 1].roomPosition != 0) //yani doluysa.0 bos 1 dolu
	{
		printf("The room with the number %d is full until the date %d:%d:%d.\n", roomNumber,rooms[roomNumber - 1].checkOutDate.day, rooms[roomNumber - 1].checkOutDate.month,rooms[roomNumber - 1].checkOutDate.year);
	}
	else
	{
		printf("Room %d is empty at the moment.\n", roomNumber);
	}
}

void priceInfoPrint()
{
	int personCount;
	double totalAmountPrice = 0.0;
	dateInfo checkinDate, checkOutDate;

	printf("Please enter how many people you will stay:");
	scanf("%d", &personCount);
	printf("Please enter the date of entry (day: month: year) in the form:");
	scanf("%d:%d:%d", &checkinDate.day, &checkinDate.month, &checkinDate.year);

	printf("Please enter the release date information (day: month: year) in the form:");
	scanf("%d:%d:%d", &checkOutDate.day, &checkOutDate.month, &checkOutDate.year);

	totalAmountPrice = dayDifferenceCalc(checkinDate, checkOutDate) * personCount * 150;//150->1gunluk 1 kisinin ücreti.
	printf("The total amount you need to pay:%.2lf", totalAmountPrice);
}

void backupRegister(roomInfo* rooms)
{

	int i;
	FILE* hotelRegister = fopen("/Users/oguzhan/Desktop/CProgrammingExamples/HotelReservationSystemProject/hotelReservationSystemProject/hotelRegister.txt","a");
	if (hotelRegister == NULL)
	{
		fprintf(stderr, "An error occurred while receiving a backup record.");
		exit(1);
	}
	for (i = 0; i < ROOM_COUNT; i++)
	{
		if (rooms[i].roomPosition != 0)
		{
			fprintf(hotelRegister, "-----------------------------------------------------------------------------\n");
			fprintf(hotelRegister, "Room Number:%d\n", rooms[i].roomNumber);
			fprintf(hotelRegister, "Customer Name-Surname:%s %s\n", rooms[i].customer.customerName,rooms[i].customer.customerSurname);
			fprintf(hotelRegister, "Number of People:%d\n", rooms[i].personCount);
			fprintf(hotelRegister, "Total Amount:$%.2lfTL\n", rooms[i].priceInfo);
			fprintf(hotelRegister, "Check-in Date:%d:%d:%d\n", rooms[i].checkinDate.day, rooms[i].checkinDate.month,rooms[i].checkinDate.year);
			fprintf(hotelRegister, "Check-ot Date:%d:%d:%d\n", rooms[i].checkOutDate.day, rooms[i].checkOutDate.month,rooms[i].checkOutDate.year);
		}
	}
	fclose(hotelRegister);
}


int main(int argc, const char* argv[])
{
	int password = 123456, passwordEnter, roomNumber;
	char ch;
	authorizationLevels userAuthority;
	roomInfo* roomArray;                                             // Tüm bilgiler bu değişkende tutulacak.
	roomArray = (roomInfo*)calloc(ROOM_COUNT, sizeof(roomInfo)); // Dinamik bir şekilde oluşturuldu.

	printf("\t\t\t\t WELCOME HOTEL RESERVATION SYSTEM\n");
	printf("If you are working here, please enter your password:");
	scanf("%d", &passwordEnter);

	if (password == passwordEnter)
	{
		userAuthority = personel;
	}
	else
	{
		userAuthority = customer;
	}

	do
	{
		printf("1.If you want to make a new customer entry, please 'E'\n"
			   "2.If you want to query room information, please 'S'\n"
			   "3.If you want to view full room information, please 'G'\n"
			   "4.If you want to make a price inquiry, please 'F'\n");
		printf("5.If you want to make a customer exit real,please 'C'\n"
			   "6.If you want to log out of the system, enter 'Q':");
		fflush(stdin);
		ch = getchar();
		switch (ch)
		{
		case 'E':
		case 'e':

			if (userAuthority == personel)
			{
				newCustomerAdd(roomArray);
			}

			else
			{
				printf("This area can only be used by employees.");
			}

			break;

		case 'S':
		case 's':

			printf("Please enter the room number to be questioned:");
			scanf("%d", &roomNumber);
			roomInfoQerying(roomArray, roomNumber);
			break;

		case 'G':
		case 'g':

			if (userAuthority == personel)
			{
				fullRoomInfoPrint(roomArray);
			}

			else
			{
				printf("This area can only be used by employees.");
			}
			break;

		case 'C':
		case 'c':

			if (userAuthority == personel)
			{
				printf("Enter the number of the room you want to check out:");
				scanf("%d", &roomNumber);
				resercationClean(roomArray, roomNumber);//daha onceden kulllandıgımız resercationClean fonksiyonu.
			}

			else
			{
				printf("This area can only be used by employees.");
			}
			break;

		case 'F':
		case 'f':
			priceInfoPrint();
			break;

		case 'Q':
		case 'q':
			backupRegister(roomArray);
			break;

		default:
			break;
		}

	} while (ch != 'Q');

	return 0;
}