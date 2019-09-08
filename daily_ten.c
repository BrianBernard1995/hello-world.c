#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void print_array(int gary[], int size);
void sort(int gary[], int low, int high);
void merge(int gary[], int low, int middle, int high);

int main(int argc, char* argv[])
{
	int size, holder, i;

	printf("Please enter the amount of numbers you would like to sort: \n");
	scanf("%d", &size);
	
	int gary[size];
	
	for (i = 0; i < size; i++)
	{
		gary[i] = rand() % 100;
	}
	printf("initial array: ");
	print_array(gary, size);



	sort(gary, 0, size - 1);
	printf("\nend array: ");
	print_array(gary, size);
	return 0;

}

void sort(int gary[], int low, int high)
{
	int middle;
	middle = (low + high) / 2;
	if (low < high)
	{
		sort(gary, low, middle);
		sort(gary, middle + 1, high);


	}
	merge(gary, low, middle, high);
}

void merge(int gary[], int low, int middle, int high)
{

	int i, x, y, sizeL, sizeR;
	sizeL = middle - low + 1;
	sizeR = high - middle;
	int tempL[sizeL];
	int tempR[sizeR];


	i = 0;
	while (i<sizeL)
	{
		tempL[i] = gary[low + i];
		i++;
	}

	i = 0;
	while (i<sizeR)
	{
		tempR[i] = gary[middle + 1 + i];
		i++;
	}

	i = 0;
	x = 0;
	y = low;
	while (i<sizeL && x<sizeR)
	{
		if (tempL[i]<tempR[x])
		{
			gary[y] = tempL[i];
			i++;
		}
		else
		{
			gary[y] = tempR[x];
			x++;
		}
		y++;
	}
	while (i<sizeL)
	{
		gary[y] = tempL[i];
		i++;
		y++;
	}
	while (x<sizeR)
	{
		gary[y] = tempR[x];
		x++;
		y++;
	}

}

void print_array(int gary[], int size)
{
	int i;

	printf("\n");
	for (i = 0; i < size; i++)
	{
		printf("%d\n", gary[i]);
	}
}

