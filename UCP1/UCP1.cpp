//  1. Deklarasi variable terdiri dari int, varchar, dan string
//  2.  Implementasi dari Conditional statement adalah "if, if else dan switch
//   
//  3. #include <iostream>
//using namespace std;
//
//struct Pendaftar {
//	string nama;
//	string status;
//};

//int main() {
//	Pendaftar pdf;
//	cout << "Nama Pendaftar : ";
//	cin >> pdf.nama;
//	cout << "Status pendaftar : ";
//	cin >> pdf.status;
//
//	cout << endl;
//	cout << "/n Nama : " << pdf.nama;
//	cout << "/n Status : " << pdf.status;
//}
//  4. string nama;
//    int nLaptop, nMeja, nBuku;
//    int hLaptop = 10, hMeja = 3, hBuku = 1;
//    
//	  void input(){
//		cout << "Nama Pembeli : ";
//		cin >> nama;
// }
//  5.  while, do while, for
//  6. 
#include <iostream>
using namespace std;

struct Pendaftar {
	string nama;
	string status;
    int nilai;
};

int main() {
	Pendaftar pdf;
	cout << "Nama Pendaftar : ";
	cin >> pdf.nama;
	cout << "Status pendaftar : ";
	cin >> pdf.status;
    cout << "Nilai : ";
    cin >> pdf.nilai;

	cout << endl;
	cout << "\n Nama : " << pdf.nama;
	cout << "\n Status : " << pdf.status;	
    cout << "\n Nilai : " << pdf.nilai;
}
int main() {
    string status;
    int nDiterima, nDitolak, nRerata;

    cout << "Masukan Status Diterima : ";
    cin >> nDiterima;
    cout << "Masukan Status Ditolak : ";
    cin >> nDitolak;

    if (nRerata >= 70)
        status = "Diterima";
    else if (nRerata >= 80)
        status = "Diterima";
    else if (nRerata < 70)
        status = "Ditolak";

    cout << "Tampilkan Status : " << status << endl;

    return 0;
}
