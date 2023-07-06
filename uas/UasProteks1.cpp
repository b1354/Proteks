#include <iostream> // 1
#include <conio.h>

using namespace std;

struct mahasiswa
{
   char nim[13];
   char nama[15];
   float ntgs; // 2
   float nuts;
   float nuas;
   float na; // 3
   char nh; // 4
};
mahasiswa ilkom; // 5

void garis()
{
   int i;
   cout << "\t";
   for(i=0; i<=40; i++)
   {
      cout << "-"; // 6
   }
   cout << endl;
}

int main()
{
  system("cls");
  cout << "\n\t\tPROGRAM NILAI MAHASISWA" << endl; 
  cout << "\n\n\tMASUKAN DATA : " << endl;
  garis();
  cout << "\n\tMasukan Nama        = "; cin.getline(ilkom.nama,15);
  cout << "\tMasukan NIM         = "; cin >> ilkom.nim; // 7
  cout << "\tMasukan Nilai Tugas = "; cin >> ilkom.ntgs; // 8
  cout << "\tMasukan Nilai UTS   = "; cin >> ilkom.nuts;
  cout << "\tMasukan Nilai UAS   = "; cin >> ilkom.nuas; // 9
  garis();
 
  ilkom.na = (0.3 * ilkom.ntgs) + (0.35 * ilkom.nuts) + (0.35 * ilkom.nuas); // 10

  if ((ilkom.na > 79) && (ilkom.na <=100)) { ilkom.nh = 'A'; } // 11 & 12
  else if ((ilkom.na >= 64.99) && (ilkom.na <= 79.00)) {ilkom.nh = 'B';}
  else if ((ilkom.na >= 55.99) && (ilkom.na <= 63.00)) {ilkom.nh = 'C';}
  else if ((ilkom.na >= 40.99) && (ilkom.na <= 54.00)) {ilkom.nh = 'D';} // 13
  else if ((ilkom.na >= 40.99) && (ilkom.na <= 54.00)) {ilkom.nh = 'D';}
  else  {ilkom.nh = 'E'; };    
  system("cls");
  cout << "\n\n\tDATA NILAI MAHASISWA" << endl;
  garis();
  cout << "\n\t - Nama        = " << ilkom.nama << endl; // 14
  cout << "\n\t - NIM         = " << ilkom.nim << endl; // 15
  cout << "\n\t - Nilai Tugas = " << ilkom.ntgs << endl; // 16
  cout << "\n\t - Nilai UTS   = " << ilkom.nuts << endl; // 17
  cout << "\n\t - Nilai UAS   = " << ilkom.nuas << endl; // 18
  garis();
  cout << "\n\t Nilai Akhir = " << ilkom.na << endl; // 19
  cout << "\n\t Nilai Huruf = " << ilkom.nh << endl; // 20
  garis();
 
  getch();
}
