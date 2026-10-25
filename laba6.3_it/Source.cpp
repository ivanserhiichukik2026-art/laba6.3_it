#include <iostream>
#include <iomanip>

using namespace std;

void readArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void printArray(const int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << setw(5) << a[i];
    }

    cout << endl;
}

int countOdd(const int a[], int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            count++;
        }
    }

    return count;
}

template <typename T>
int countOddTemplate(const T a[], int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    const int MAX = 100;
    int a[MAX];
    int n;

    cout << "Enter n (1..100): ";
    cin >> n;

    if (!cin || n < 1 || n > MAX)
    {
        return 1;
    }

    cout << "Enter array elements:" << endl;
    readArray(a, n);

    cout << "Array:" << endl;
    printArray(a, n);

    cout << "Count (function) = "
        << countOdd(a, n) << endl;

    cout << "Count (template) = "
        << countOddTemplate(a, n) << endl;

    return 0;
}