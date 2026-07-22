#include <iostream>
using namespace std;

int main()
{
  char ch;
  for (int i = 1; i <= 5; i++)
  {

    ch = 'A';

    // spaces
    for (int j = 1; j <= 5 - i; j++)
    {
      cout << "#";
    }
    // 1st part
    for (int k = 1; k <= i; k++)
    {
      cout << ch;
      ch++;
    }
    // 2nd part
    ch = ch - 2;
    for (int l = 1; l <= i; l++)
    {

      if (ch >= 'A')
      {
        cout << ch;
        ch--;
      }
    }
    cout << endl;
  }

  return 0;
}