#include <iostream>
using namespace std;
int main() {
	// Deklarasi variabel
	string nama;
 	int umur;
	float tinggi;
	// Input data dari pengguna
 	cout << "Masukkan nama: ";
 	cin >> nama;
	cout << "Masukkan umur: ";
	cin >> umur;
	cout << "Masukkan tinggi (dalam cm): ";
	cin >> tinggi;
	 // Menampilkan hasil input
	cout << "\nInformasi yang Anda masukkan:\n";
	cout << "Nama: " << nama << endl;
	cout << "Umur: " << umur << " tahun" << endl;
	cout << "Tinggi: " << tinggi << " cm" << endl;
	return 0;
}

