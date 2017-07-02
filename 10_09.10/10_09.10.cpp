// 10_09.10.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

const int SIZE = 10;
const int LENGTH = 10;

using namespace std;

int main()
{
	int* ap[LENGTH];
	for (int i = 0; i < LENGTH; i++)
	{
		*(ap + i) = new int[SIZE];
	}
	for (int i = 0; i < LENGTH; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			*(*(ap + i) + j) = j+i;
		}
	}
	//cout << "Number of element?" << endl;
	for (int i = 0; i < LENGTH; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			cout << *(*(ap + i) + j) << endl;
		}
	}
	system("pause");
    return 0;
}

