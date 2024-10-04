// lab6.2(it).cpp
#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* r, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		r[i] = Low + rand() % (High - Low + 1);
}
void Print(int* r, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << r[i];
	cout << endl;
}
int Max(int* a, const int size)
{
	int max = a[0];
	for (int i = 1; i < size; i++)
		if (a[i] % 2 == 0 && a[i] > max)
			max = a[i];
	return max;
}
int MaxIndex(int* a, const int size)
{
	int max = Max(a, size);
	for (int i = 0; i < size; i++)
		if (a[i] == max)
			return i;
	return -1;
}
int main()
{
	srand((unsigned)time(NULL));
	const int n = 30;
	int r[n];
	int Low = 1;
	int High = 100;
	Create(r, n, Low, High);
	Print(r, n);
	cout << "Max = " << Max(r, n) << endl;
	cout << "Index of Max = " << MaxIndex(r, n) << endl;

	return 0;
}
