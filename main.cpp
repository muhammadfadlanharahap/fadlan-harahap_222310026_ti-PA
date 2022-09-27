#include <iostream>
using namespace std;

int main () 
{
  double x, y, a, b, phi;

  phi=3.1415;

  cout << "Masukan Nilai Jari - Jari Tabung = ";
  cin >> x ;
  cout << "Masukan Nilai Tinngi Tabung = ";
  cin >> y ;

  a = phi*x*x;
  b = a*y;

  cout << "Luas Tabung Adalah " << a << endl;
  cout << "Volume Tabung Adalah " << b << endl;
  getchar ();
}