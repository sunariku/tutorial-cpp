#include <iostream>

using namespace std;

int main()
{
  /*
  Deklarasi dan inisialisasi nilai ke variabel.
  Dalam kode berikut terdapat empat variabel, sebagai salah satu contoh:

  Untuk variabel "nilaiSiswa1" adalah nama variabel atau identifier, "int" adalah tipe datanya dan "70" adalah nilainya.
  */

  int nilaiSiswa1 = 70;
  int nilaiSiswa2 = 60;
  int nilaiSiswa3 = 80;
  float rerataNilaiSiswa = 0.0;

  rerataNilaiSiswa = (nilaiSiswa1 + nilaiSiswa2 + nilaiSiswa3) / 3; // Ekpresi perhitungan nilai rerata nilai tiga siswa

  cout << "Rerata Nilai Siswa: " << rerataNilaiSiswa;

  return 0;
}
