#include <iostream>
using namespace std;

int main() {
  int harga[10], a, b, r[10], jumlah[10], totalHarga, hargaAkhir, Pajak;
  char jenis;
  string tipe[10];
  cout << "GEROBAK FRIED CHICKEN" << endl;
  cout << "----------------------" << endl;
  cout << "Kode\tJenis\tHarga" << endl;
  cout << "----------------------" << endl;
  cout << " D\t    Dada\t Rp.2500" << endl;
  cout << " P\t    Paha\t Rp.2000" << endl;
  cout << " S\t    Sayap\t Rp.1500" << endl;
  cout << "----------------------" << endl;
  cout << "Banyak Jenis = ";
  cin >> a;

  for (b = 0; b < a; b++) {
    cout << "Jenis ke - " << b + 1 << endl;
  ulang:
    cout << "Jenis Potong [D/P/S] : ";
    cin >> jenis;
    if (jenis == 'D' || jenis == 'd') {
      r[b] = 2500;
      tipe[b] = "Dada";
    } else if (jenis == 'P' || jenis == 'p') {
      r[b] = 2000;
      tipe[b] = "Paha";
    } else if (jenis == 'S' || jenis == 's') {
      r[b] = 3500;
      tipe[b] = "Sayap";
    } else {
      cout << "Input invalid.\n";
      goto ulang;
    }
    cout << "Banyak Potong : ";
    cin >> jumlah[b];

    harga[b] = jumlah[b] * r[b];
  }
  cout << "\t\t GEROBAK FIRED CHICKEN " << endl;
  cout << "-----------------------------------------" << endl;
  cout << "No.\tJenis\t Harga    Banyak    Jumlah" << endl;
  cout << "\tPotong \tSatuan    Beli      Harga " << endl;
  cout << "-----------------------------------------" << endl;
  for (b = 0; b < a; b++) {
    cout << b + 1 << "   " << tipe[b] << "\t  " << r[b] << "     " << jumlah[b]
         << "        Rp." << harga[b] << endl;
    totalHarga += harga[b];
  }
  Pajak = totalHarga * 0.1;
  cout << "-----------------------------------------" << endl;
  cout << "\n\t\t\tHarga total = " << totalHarga;
  cout << "\n\t\t\tPajak 10%   = " << Pajak;
  cout << "\n\t\t\tTotal Bayar = " << totalHarga - Pajak;
  return 0;
}