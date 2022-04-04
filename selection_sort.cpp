#include <iostream>
using namespace std;

void selectionSort(int arr[],int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int min = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }
}

int main()
{
    int n; cin>>n;
    int myarr[n];
    cout << "Enter " <<n<< " integers in random order: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> myarr[i];
    }
    selectionSort(myarr,n); 
    cout << "SORTED ARRAY: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << myarr[i] << "  ";
    }
    return 0;
}