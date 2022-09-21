//..program menghitung harga total
#include <iostream>
using namespace std;
#define harga 4500.02 //..menentukan harga dengan define
int main() {
  float jumlah, total;
  cout << "Masukan Jumlah Barang = ";
  cin >> jumlah;
  total = harga * jumlah;
  cout << "\nYang Harus Dibayar = \n " << total;

  return 0;
}