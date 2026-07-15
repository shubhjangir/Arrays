// we have to find out the larget element of the array
#include <iostream>
#include <vector>

using namespace std;

int largestElement(vector<int> arr, int n)
{
  int largest = arr[0];

  for (int i = 1; i < arr.size(); i++)
  {
    if (largest < arr[i])
    {
      largest = arr[i];
    }
  }
  return largest;
}

int main()
{

  int n;
  cout << "Enter the size of the array : ";
  cin >> n;

  vector<int> arr(n);

  // range based for loop
  for (int &x : arr)
  {
    cin >> x;
  }

  cout << "The largest element of the array is : " << largestElement(arr, n)
       << endl;

  return 0;
}