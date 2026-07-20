#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n)
{

  for (int i = 1; i <= n - 1; i++)
  {
    for (int j = 0; j < n - i; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
      }
    }
  }

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}

int main()
{
  int n;
  cout << "enter the size of the array : " << endl;
  cin >> n;

  int arr[n];

  cout << "enter the elements of the araay" << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  cout << "array before bubble sort : ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  cout << "array after bubble sort : " << endl;

  bubble_sort(arr, n);

  return 0;
}