#include <iostream>
using namespace std;

int main()
{

  for (int i = 1; i <= 5; i++)
  {
    // spaces
    for (int j = 1; j <= 5 - i + 1; j++)
    {
      cout << " ";
    }

    // star
    for (int k = 1; k <= 2 * i - 1; k++)
    {
      cout << "*";
    }

    cout << endl;
  }
  for (int i = 5; i >= 1; i--)
  {
    // spaces
    for (int j = 1; j <= 5 - i + 1; j++)
    {
      cout << " ";
    }

    for (int k = 2 * i - 1; k >= 1; k--)
    {
      cout << "*";
    }
    cout << endl;
  }

  return 0;
}