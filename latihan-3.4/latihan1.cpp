#include <iostream>

using namespace std;

int main()
{
  int nilai;

  cout << "masukan nilai anda: ";
  cin >> nilai;

  if(nilai>=85 && nilai<=100)  {
    cout << "A" << endl;
  } else if (nilai >= 70 && nilai <= 84) {
    cout << "B" << endl;
  } else if (nilai >= 40 && nilai <= 69) {
    cout << "C" << endl;
  } else if (nilai >= 20 && nilai <= 39) {
    cout << "D" << endl;
  } else {
    cout << "E" << endl;
  }

  return 0;
}
