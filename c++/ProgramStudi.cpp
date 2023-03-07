#include <iostream>
#include <string>
#include <bits/stdc++.h>
// #include "Course.cpp"

using namespace std;

//Dicki Fathurohman_2103842_Ilmu Komputer LATIHAN4DPBO2023
/* Saya Dicki Fathurohman [2103842] mengerjakan LATIHAN4DPBO2023 dalam mata kuliah DPBO
   untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikan.
   Aamiin.*/

//Deklarasi untuk kelas ProgramStudi
class ProgramStudi{
	//Atribut yang dimiliki oleh ProgramStudi, ada kode, nama_prodi, dan fakultas
	private:
		string kode;
		string nama_prodi;
		string fakultas;
		vector<Course> courses; //satu prodi dapat memiliki banyak matakuliah

	public:

		// Constructor
		ProgramStudi(){
			this->kode = "";
			this->nama_prodi = "";
			this->fakultas = "";
			this->courses.clear();
		}

		//Constructor lain dengan atribut sebagai parameternya
		ProgramStudi(string kode, string nama_prodi, string fakultas, vector<Course> courses){
			this->kode = kode;
			this->nama_prodi = nama_prodi;
			this->fakultas = fakultas;
			this->courses = courses;
		}

		//setter untuk atribut-atribut yang dimiliki ProgramStudi
		void set_kode(string kode){
			this->kode = kode;
		}

		void set_nama_prodi(string nama_prodi){
			this->nama_prodi = nama_prodi;
		}

		void set_fakultas(string fakultas){
			this->fakultas = fakultas;
		}

		void set_courses(Course courses){
			this->courses.push_back(courses);
		}

		//getter untuk atribut-atribut yang dimiliki ProgramStudi
		string get_kode(){
			return this->kode;
		}

		string get_nama_prodi(){
			return this->nama_prodi;
		}

		string get_fakultas(){
			return this->fakultas;
		}

		vector<Course> get_courses(){
			return this->courses;
		}

		//destructor
		~ProgramStudi(){

		}

};



