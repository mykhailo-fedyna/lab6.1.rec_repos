//// lab6.1(rec).cpp
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

int CountElements(int* r, const int size, int i, int& count_element)
{
    if (i < size)
    {
        if (r[i] % 6 == 0 || i % 5 != 0)
        {
            count_element++;
        }
        return CountElements(r, size, i + 1, count_element);
    }
    return count_element;
}

int SumElements(int* r, const int size, int i)
{
    if (i < size)
    {
        if (r[i] % 6 == 0 || i % 5 != 0)
        {
            return r[i] + SumElements(r, size, i + 1);
        }
        else
        {
            return SumElements(r, size, i + 1);
        }
    }
    return 0;
}

void ReplaceElements(int* r, const int size, int i)
{
    if (i < size)
    {
        if (r[i] % 6 == 0 || i % 5 != 0)
        {
            r[i] = 0;
        }
        ReplaceElements(r, size, i + 1);
    }
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

    int sum = SumElements(r, n, 0);
    cout << "S = " << sum << endl;

    CountElements(r, n, 0, count_element);
    cout << "Count of elements = " << count_element << endl;

    ReplaceElements(r, n, 0);

    Print(r, n, 0);

    return 0;
}
