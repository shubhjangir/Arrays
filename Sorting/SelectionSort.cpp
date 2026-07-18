#include <iostream>
using namespace std;

void selection_sort(int arr[], int n)
{

  for (int i = 0; i <= n - 1; i++)
  {
    int smallest = i;
    for (int j = i + 1; j <= n - 1; j++)
    {
      if (arr[smallest] > arr[j])
      {
        smallest = j;
      }
    }
    int temp = arr[i];
    arr[i] = arr[smallest];
    arr[smallest] = temp;
  }

  // printing the sorted array done by selection sort
  cout << "Array after sorting : " << endl;
  for (int i = 0; i <= n - 1; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main()
{

  // Initializing array
  int arr[] = {13, 46, 24, 52, 22, 9};
  int n = sizeof(arr) / sizeof(arr[0]);

  // Printing the array before sorting
  cout << "Before Selection Sort : " << "\n";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "\n";
  // call seleciton sort
  selection_sort(arr, n);
  return 0;
}