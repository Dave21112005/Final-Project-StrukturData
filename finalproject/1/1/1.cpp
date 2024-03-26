#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

int pil, tiket;

string userBaru, passBaru, loginUser, passUser, tanggalBerangkat, jamPemberangkatan;

struct Identitas
{
	string nama;
	int telp;
	string email;

}dataDiri;

void validasiPemberangkatan()
{

}

void PilihanJam()
{
	cout << "Pilih Jam Penerbangan\n";
	cout << "Masukkan Tanggal : ";
	cin >> tanggalBerangkat;
	cout << "Masukkan Jam Pemberangkatan : ";
	cin >> jamPemberangkatan;
	cout << "Jumlah Tiket Yang Dibeli : ";
	cin >> tiket;
	validasiPemberangkatan();
}

void PilihPesawat()
{
	cout << "Pilih Pesawat\n1. Batik Air\n2. Lion Air\n3. Garuda Indonesia\nMasukkan Pilihan : ";
	cin >> pil;
}

void PilihRute()
{
	cout << "Pilihan Penerbangan\n1. Jogja - Klaten\n2. Jogja - Solo\n3. Jogja - Bali\n";
	cout << "Masukkan Pilihan : ";
	cin >> pil;
}

void HalamanAdmin()
{
	cout << "Menu Admin\n1. Lihat Data Penumpang\n2. Cari Nama Penumpang\n3. Jadwal Pesawat\n Masukkan Pilihan : ";
	cin >> pil;
}

void HalamanUser()
{
	PilihPesawat();
	PilihRute();
}

void Registrasi()
{
	cout << "1. Buat Akun\n2. Login\nMasukkan Pilihan : ";
	cin >> pil;
}

void Login();

void BuatAkun()
{
	cout << "Buat Akun\n";
	cout << "Username : ";
	cin >> userBaru;
	cout << "Password : ";
	cin >> passBaru;
	cout << "Akun Berhasil Dibuat!\n";
	_getch();
	system("cls");
	Login();
}

void ValidasiAkun();

void Login()
{
	cout << "Halaman Login\n";
	cout << "Username : ";
	cin >> loginUser;
	cout << "Password : ";
	cin >> passUser;

	ValidasiAkun();

}

void ValidasiAkun()
{

	if (loginUser == "root" && passUser == "root")
	{
		cout << "Anda Login sebagai admin!";
		_getch();
		system("cls");
		HalamanAdmin();
	}
	else if (loginUser == userBaru && passUser == passBaru)
	{
		cout << "Login Berhasil!";
		_getch();
		system("cls");
		HalamanUser();
	}
	else
	{
		cout << "Password atau Username salah!";
		_getch();
		system("cls");
		Login();
	}
}

int main()
{
	Registrasi();
	switch (pil)
	{
	case 1:
		BuatAkun();
		break;
	case 2:
		Login();
		break;
	default:
		cout << "Inputan Salah!";
	}
}