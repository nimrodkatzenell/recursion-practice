#include <iostream>
using namespace std;
//
int re(int num, int digit);
//
int a(int arr[], int size, int num);
//
bool iseven(int num, int digit);
int count(int num, int digit);
//
int isl(char* text[], int size, char ch);
//
bool op(int arr1[], int arr2[], int size);

int main()
{
	int a[] = { 1,2,3,5 };
	int b[] = { 3,2,1,2 };
	cout << op(a, b, 4);
	
}
bool op(int arr1[], int arr2[], int size)
{
	if (size == 0)
	{
		return true;
	}
	if (arr1[0] == arr2[size - 1])
	{
		return op(arr1 + 1, arr2, size - 1);
	}
	else
	{
		return false;
	}
}
//
int isl(char* text[], int size, char ch)
{
	if (size <= 0)
	{
		return 1;
	}
	bool flag = false;
	for (int i = 0; text[size - 1][i] != '\0'; i++)
	{

		if (text[size - 1][i] == ch)
		{
			flag = true;
		}
	}
	if (flag)
	{
		return isl(text, size - 1, ch);
	}
	else
	{
		return 0;
	}

}

//
bool iseven(int num, int digit)
{
	if (count(num, digit) % 2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int count(int num, int digit)
{
	if (num <= 0)
	{
		return 0;
	}
	if (num % 10 == digit)
	{
		return 1 + count(num / 10, digit);
	}
	else
	{
		return count(num / 10, digit);
	}

}
//
int a(int arr[], int size, int num)
{
	if (size < 0)
	{
		return 0;
	}
	if (arr[size - 1] > num && arr[size - 1] % num == 0)
	{
		return 1 + a(arr, size - 1, num);
	}
	else
	{
		return a(arr, size - 1, num);
	}
}
int re(int num, int digit)
{

	if (num <= 0)
	{
		return 0;
	}
	if (num % 10 == digit)
	{
		return 1 + re(num / 10, digit);
	}
	else
	{
		return re(num / 10, digit);
	}

}
