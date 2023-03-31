#include <iostream>

using namespace std;

int main()
{
  int bilangan1, bilangan2, bilangan3;
  int max = 0;

  cout << "masukan bilangan1: ";
  cin >> bilangan1;
  cout << "masukan bilangan2: ";
  cin >> bilangan2;
  cout << "masukan bilangan3: ";
  cin >> bilangan3;

  if (bilangan1 > max) {
    max = bilangan1;
  }

  if (bilangan2 > max) {
    max = bilangan2;
  }

  if (bilangan3 > max) {
    max = bilangan3;
  }

  cout << "bilangan terbesar dari: ";
  cout << bilangan1 << ",";
  cout << bilangan2 << ",";
  cout << bilangan3 << endl;
  cout << "adalah: " << max << endl;

  return 0;
}
