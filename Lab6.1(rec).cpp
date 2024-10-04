// lab6.1(rec).cpp
#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* r, const int size, const int Low, const int High, int i)
{
	r[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1)
		Create(r, size, Low, High, i + 1);
}
void Print(int* r, const int size, int i)
{
	cout << setw(4) << r[i];
	if (i < size - 1)
		Print(r, size, i + 1);
	else
		cout << endl;
}
int Sum(int* r, const int size, int i, int S, int& count_element)
{
	if (i < size)
	{
		if (r[i] % 6 == 0 || !(i % 5 == 0))
		{
			count_element++;
			int current_value = r[i];
			r[i] = 0;
			return current_value + Sum(r, size, i + 1, S,  count_element);
		}
		else
		{
			return Sum(r, size, i + 1, S, count_element);
		}
	}
	else
		return 0;
}
int main()
{
	srand((unsigned)time(NULL));
	const int n = 25;
	int r[n];
	int Low = 4;
	int High = 73;
	int count_element = 0;
	Create(r, n, Low, High, 0);
	Print(r, n, 0);

	int sum = Sum(r, n, 0, 0, count_element);
	cout << "S = " << sum << endl;
	cout << "Count of element = " << count_element << endl;
	Print(r, n, 0);
	return 0;
}
