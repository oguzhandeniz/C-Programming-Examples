#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// productInfo Struct use and The Dynamic List Product ADD & SEARCH & DISPLAY

typedef struct {
	int ID;                        //4byte
	double priceInfo;              //8byte
	char productNameInfo[20];      //20byte
} productInfo;

void productAddList(productInfo productList[], int productID, double productPrice, char* productName)
{
	int spaceArea = 0;            //for loop
	while (1)
	{
		if (productList[spaceArea].ID == 0)
		{        // there is space,  i can write there.
			productList[spaceArea].ID = productID;
			productList[spaceArea].priceInfo = productPrice;
			strcpy(productList[spaceArea].productNameInfo, productName);
			break;
		}
		spaceArea++;
	}
}

int findProduct(int findId, productInfo productList[], int productCount)
{
	int i;
	for (i = 0; i < productCount; i++)
	{
		if (productList[i].ID == findId)
		{
			return i;                    //we found and index i
		}
	}
	return -1;        // we not found
}

void productInfoShow(int productID, productInfo productList[], int productCount)
{

	int productIndex = findProduct(productID, productList,
			productCount);  // if there is, the index has arrived, or -1 has arrived.
	if (productIndex != -1)
	{
		printf("Product ID:%d\n", productList[productIndex].ID);
		printf("Product Price:%.2lf\n", productList[productIndex].priceInfo);
		printf("Product Name:%s", productList[productIndex].productNameInfo);
	}
	else
	{
		printf("The product you are looking for is not registered.");
	}

}

int main(void)
{

	int productCount, ID, i;
	productInfo* productList;
	double productPrice;
	char productName[15];

	puts("Please tell me how many products you would like to enter.");
	scanf("%d", &productCount);
	productList = (productInfo*)calloc(productCount,
			sizeof(productInfo));    //we have created a product store dynamically

	for (i = 0; i < productCount; i++)
	{
		puts("Please enter the ID information of the product to be added:");
		scanf("%d", &ID);
		puts("Please enter the price information of the product to be added:");
		scanf("%lf", &productPrice);
		puts("Please enter the name of the product to be added:");
		scanf("%s", &productName);
		productAddList(productList, ID, productPrice, productName);      //we have added the products
	}

	printf("Please enter the ID information of the product you want to see:");
	scanf("%d", &ID);
	productInfoShow(ID, productList, productCount);

	return 0;

}

