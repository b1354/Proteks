#include <iostream>
using namespace std;

int main ()
{
  int matrik[2][3] = {{2,4,6},{5,7,9}};

  for (int b=0; b<2; b++) {
    for (int k=0; k<3; k++) {
      cout << matrik[b][k] << " ";
    }
    cout << endl;
  }
}
