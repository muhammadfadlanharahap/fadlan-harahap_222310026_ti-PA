#include <iostream>
using namespace std;

int main() {
  int a, b, c[100][100], d[100][100], sum[100][100], y, z;
  cout << "Masukan Jumlah Baris: ";
  cin >> a;
  cout << "Masukan Jumlah Kolom: ";
  cin >> b;

  cout << "Masukan matriks pertama: " << endl;
  for (y = 0; y < a; y++)
    for (z = 0; z < b; z++) {
      cout << "Matriks a" << y + 1 << z + 1 << " : ";
      cin >> c[y][z];
    }
  cout << endl << "Masukan matriks kedua: " << endl;
  for (y = 0; y < a; y++)
    for (z = 0; z < b; z++) {
      cout << "Matriks b" << y + 1 << z + 1 << " : ";
      cin >> d[y][z];
    }for (y = 0; y < a; y++)
    for (z = 0; z < b; z++)
      sum[y][z] = c[y][z] + d[y][z];
  cout << "Penjumlahan kedua matriks: " << endl;
  for (y = 0; y < a; y++) {
    for (z = 0; z < b; z++) {
      cout << sum[y][z] << " ";
      if (z == b - 1)
        cout << endl;
    }
  }

  for (y = 0; y < a; y++)
    for (z = 0; z < b; z++)
      sum[y][z] = c[y][z] - d[y][z];
  cout << "Pengurangan kedua matriks :" << endl;
  for (y = 0; y < a; ++y) {
    for (z = 0; z < b; ++z) {
      cout << sum[y][z] << " ";
      if (z == b - 1)
        cout << endl;
    }
  }

  for (y = 0; y < a; y++)
    for (z = 0; z < b; z++)
      sum[y][z] = c[y][z] * d[y][z];
  cout << "Perkalian kedua matriks :" << endl;
  for (y = 0; y < a; y++) {
    for (z = 0; z < b; z++) {
      cout << sum[y][z] << " ";
      if (z == b - 1)
        cout << endl;
    }
  }
return 0;
}