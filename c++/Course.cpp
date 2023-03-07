#include <iostream>
#include <string>
#include <bits/stdc++.h>
// #include "Dosen.cpp"
// #include "Mahasiswa.cpp"

using namespace std;

//Dicki Fathurohman_2103842_Ilmu Komputer LATIHAN2DPBO2023
/* Saya Dicki Fathurohman [2103842] mengerjakan LATIHAN2DPBO2023 dalam mata kuliah DPBO
   untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikan.
   Aamiin.*/

//Deklarasi untuk kelas Course
class Course{
	//Atribut yang dimiliki oleh Course, ada nama_matkul, objek dosen, dan vector mahasiswa
	private:
		string nama_matkul;
		Dosen dosen; //diasumsikan 1 course 1 dosen
		vector<Mahasiswa> mahasiswa; //asumsi 1 course many mahasiswa

	public:

		// Constructor
		Course(){
			this->nama_matkul = "";
			this->dosen = Dosen();
			this->mahasiswa.clear();
		}

		//Constructor lain dengan atribut sebagai parameternya
		Course(string nama_matkul, Dosen dosen, vector<Mahasiswa> mahasiswa){
			this->nama_matkul = nama_matkul;
			this->dosen = dosen;
			this->mahasiswa = mahasiswa;
		}

		//setter untuk atribut-atribut yang dimiliki Course
		void set_nama_matkul(string nama_matkul){
			this->nama_matkul = nama_matkul;
		}

		void set_dosen(Dosen dosen){
			this->dosen = dosen;
		}

		void set_mahasiswa(Mahasiswa mahasiswa){
			this->mahasiswa.push_back(mahasiswa);
		}

		//getter untuk atribut-atribut yang dimiliki Course
		string get_nama_matkul(){
			return this->nama_matkul;
		}

		Dosen get_dosen(){
			return this->dosen;
		}

		vector<Mahasiswa> get_mahasiswa(){
			return this->mahasiswa;
		}

		//destructor
		~Course(){

		}

};



