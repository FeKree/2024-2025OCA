#include <iostream>
using namespace std;
int partition(int arr[], int low, int high, int pivot)
{
    int ind = low;
    for (int i = low; i <= high; i++)
    {
        if (arr[i] >= pivot) 
        {
            swap(arr[ind], arr[i]);
            ind++;
        }
    }
    ind--;
    return ind;
}
void quickSort(int arr[], int low, int high) 
{
    if (low < high)
    {
        int pivot = arr[high];
        int ind = partition(arr, low, high, pivot);
        quickSort(arr, low, ind - 1);
        quickSort(arr, ind + 1, high);
    }
}

int main() 
{
    setlocale(LC_ALL, "ru");
    int arr[7] = { 6, 3, 9, 5, 2, 8, 7 };
    int n = 7;
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    quickSort(arr, 0, n - 1);
    cout << "Отсортированный массив в порядке убывания: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
