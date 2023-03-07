#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include "Human.cpp"
#include "SivitasAkademik.cpp"
#include "Mahasiswa.cpp"
#include "Dosen.cpp"
#include "Course.cpp"
#include "ProgramStudi.cpp"

using namespace std;

int main(){

	//deklrasi vector untuk menampung data yang akan di add
	vector<Mahasiswa> group1;
	vector<Mahasiswa> group2;
	vector<Mahasiswa> group3;
	vector<Dosen> lecturer;
	vector<Course> listofcourse;
	vector<ProgramStudi> prodilist;

	// mengisi data mahasiswa
	Mahasiswa mhs1("3214022007032006", "Dicki Fathurohman", "Male", "UPI", "dickifathurohman@upi.edu", "2103842", "FPMIPA", "Ilmu Komputer");
	Mahasiswa mhs2("3214023382001100", "Gatsby Del Rey", "Male", "UPI", "gatsbydelret@upi.edu", "2166612", "FPMIPA", "Ilmu Komputer");
	Mahasiswa mhs3("2383994110088399", "Jang Wonyoung", "Female", "UPI", "wounyoungie@upi.edu", "2133045", "FPMIPA", "Ilmu Komputer");
	Mahasiswa mhs4("1431119340288287", "Han Jisung", "Male", "UPI", "jisunghan@upi.edu", "2143222", "FPMIPA", "Ilmu Komputer");
	Mahasiswa mhs5("4820110747448849", "Jo Yuri", "Female", "UPI", "yuriz@upi.edu", "2100384", "FPMIPA", "Ilmu Komputer");
	Mahasiswa mhs6("7639391000011188", "Minatozaki Sana", "Female", "UPI", "sanashyshyshy@upi.edu", "2103345", "FPMIPA", "Ilmu Komputer");

	//menambahkan data mahasiswa kedalam 3 group yang berbeda
	group1.push_back(mhs1);
	group1.push_back(mhs2);
	group2.push_back(mhs3);
	group2.push_back(mhs4);
	group3.push_back(mhs5);
	group3.push_back(mhs6);

	//membuat variabel dan mengisi datanya dengan data dosen
	Dosen dosen1("1112984989498949", "Angga Yusuf Fadhillah", "Male", "UPI", "lordangga@upi.edu", "01112342", "FPMIPA", "Ilmu Komputer", "S3", "Manajemen_Jaringan");
	Dosen dosen2("1120477729400220", "Faxhri Harrington", "Male", "UPI", "lordfaxhri@upi.edu", "1123300", "FPMIPA", "Ilmu Komputer", "S3", "Troubleshooting");
	Dosen dosen3("29994002927727290", "Dauz bin Dauz", "Male", "UPI", "lordauz@upi.edu", "66299182", "FPMIPA", "Ilmu Komputer", "S2", "Raja_Tutorial");

	//menambahkan data ke dosen
	lecturer.push_back(dosen1);
	lecturer.push_back(dosen2);
	lecturer.push_back(dosen3);

	//membuat variabel dan mengisi datanya dengan data mata kuliah
	//karena course memiliki dosen, dan kumpulan mahasiswa, datanya mengambil dari data dosen dan mahasiswa diatas yang sudah di hardcode
	Course course1("Jaringan Komputer", dosen1, group2);
	Course course2("Rekayasa Perangkat Lunak", dosen2, group1);
	Course course3("Desain Pemrograman Web", dosen3, group3);

	listofcourse.push_back(course1);
	listofcourse.push_back(course2);
	listofcourse.push_back(course3);

	//menambahkan data program studi
	ProgramStudi Prodi("IK143", "Ilmu Komputer", "FPMIPA", listofcourse);	
	prodilist.push_back(Prodi);


	//perulangan sebanyak prodi
	for(int i = 0; i < prodilist.size(); i++){
		cout << "Kode Prodi    : " << prodilist[i].get_kode() << '\n';
		cout << "Nama Prodi    : " << prodilist[i].get_nama_prodi() << '\n';
		cout << "Asal Fakultas : " << prodilist[i].get_fakultas() << '\n';

		vector<Course> tempcourse = prodilist[i].get_courses(); //digunakan untuk menampung data list matakuliah pada prodi tersebut

		cout << "\nDaftar Mata Kuliah :\n";

		//perulangan sebanyak jumlah matakuliah di prodi tersebut
		for(int j = 0; j < tempcourse.size(); j++){
			cout << "\n" << j+1 << ") " << tempcourse[j].get_nama_matkul() << '\n';
			cout << "Dosen : " << tempcourse[j].get_dosen().get_nama() << " | " << tempcourse[j].get_dosen().get_nik() << " | " << tempcourse[j].get_dosen().get_gender() << '\n';
			cout << "NIP   : " << tempcourse[j].get_dosen().get_nip() << " | " << tempcourse[j].get_dosen().get_fakultas() << " | " << tempcourse[j].get_dosen().get_univ() << " | " << tempcourse[j].get_dosen().get_email() << '\n';
			cout << "Keahlian : " << tempcourse[j].get_dosen().get_keahlian() << '\n';

			cout << "\nDaftar Mahasiswa yang Mengontak :\n";

			//untuk tampugan list mahasiswa yg mengontrak course tersebut
			vector<Mahasiswa> tempmhs = tempcourse[j].get_mahasiswa();

			//perulangan sebanyak jumlah mahasiswa yang mengontrak course tersebut
			for(int k = 0; k < tempmhs.size(); k++){
				cout << k+1 << ". " << tempmhs[k].get_nim() << " | " << tempmhs[k].get_nama() << " | " << tempmhs[k].get_gender() << "\n";
				cout << "Asal : " << tempmhs[k].get_prodi() << " | " << tempmhs[k].get_fakultas() << " | " << tempmhs[k].get_univ() << " | " << tempmhs[k].get_email() << "\n";
				cout << "NIK  : " << tempmhs[k].get_nik() << "\n";
			}
		}
	}

	return 0;
}
