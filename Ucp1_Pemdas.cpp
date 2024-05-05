/*
1. 3 Deklarasi Variable;
-String biasanya digunakan untuk kalimat
-float biasanya digunakan untuk mencari hasil yang berbentuk pecahan
-int biasanya digunakan untuk mencari angka 
 
2. Conditional Statment;
int main() {
    // Contoh implementasi dari conditional statement
    int nilai = 75;

    // Jika nilai lebih besar atau sama dengan 70, maka cetak "Lulus", jika tidak, cetak "Tidak Lulus"
    if (nilai >= 70) {
        std::cout << "Lulus" << std::endl;
    } else {
        std::cout << "Tidak Lulus" << std::endl;
    }

    return 0;
}

3. Implementasi Struct
struct Mahasiswa {
    string NIM;
    string Nama;
    string Alamat;
    int umur;
};

4.Implementasi Prosedur dan fungsi
-Prosedur

-Fungsi
int main()
{
    float nAlas, nTinggi, nLuas;
    cout << "Masukkan Alas=";
    cin >> nAlas;
    cout << "Masukkan Tinggi=";
    cin >> nTinggi;
    nLuas = nAlas * nTinggi / 2;
    cout << "Luasnya=" << nLuas;
}


5. Looping;
int main() {
    // Contoh looping menggunakan for untuk mencetak angka dari 1 hingga 5
    for (int i = 1; i <= 5; ++i) {
        std::cout << i << std::endl;
    }
    return 0;
}


*/




#include <iostream>
using namespace std;

struct Pendaftar {
    string Nama;
    float Matematika, BahasaInggris, rerata;
    string status;
};

int main(){
    Pendaftar Pdf;
    cout << "Nama Mahasiswa : " ;
    cin >> Pdf.Nama;
    
    float matematika, bahasainggris, rerata;
 string status;

cout << "Nilai Matematika : " << endl;
cin >> Pdf.Matematika;
cout << "Nilai BahasaInggris : " << endl;
cin >> bahasainggris;
rerata = (matematika, bahasainggris) /2 ;

if (matematika >= 80)
{
status = "Diterima";
}

else if (rerata > 70)
{
status = "Diterima";
}

else
{
status = "Ditolak";
}

cout << "Rerata = " << rerata << endl;
cout << "Status kelulusan = " << status << endl;

return 0;
}