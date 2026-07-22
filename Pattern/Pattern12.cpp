#include <iostream>
using namespace std;

int main()
{
  int count;

  for (int i = 1; i <= 5; i++)
  {
    count = 1;
    for (int j = 1; j <= i; j++)
    {
      cout << count;
      count++;
    }

    // spaces
    for (int k = 1; k <= 5 - i; k++)
    {
      cout << " ";
    }
    for (int k = 1; k <= 5 - i; k++)
    {
      cout << " ";
    }

    for (int j = 1; j <= i; j++)
    {
      cout << count - 1;
      count--;
    }

    cout << endl;
  }

  return 0;
}