#include <iostream>
#include <string>

using namespace std;

//Dicki Fathurohman_2103842_Ilmu Komputer LATIHAN2DPBO2023
/* Saya Dicki Fathurohman [2103842] mengerjakan LATIHAN2DPBO2023 dalam mata kuliah DPBO
   untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikan.
   Aamiin.*/

//Deklarasi kelas Mahasiswa, kelas mahasiswa mewarasi kelas SivitasAkademik
class Mahasiswa : public SivitasAkademik{
	//Mahasiswa memiliki atribut dari Sivitas Akademik
	//Kemudian ada beberapa atribut tambahan dari mahasiswa
	//disini tidak perlu menambahkan nama, jenis kelamin, univ dan email karena sudah diwarisi dari parentnya
	private:
		string nim;

		// fakultas & prodi tetap ada untuk menandakan asal mahasiswa, karena mahasiswa bisa saja mengontrak mata kuliah dari prodi lain
		string prodi;
		string fakultas;

	public:
		//constructor
		Mahasiswa(){
			this->nim = "";
			this->fakultas = "";
			this->prodi = "";
		}

		//constructor dengan parameter
		//diisi juga dengan atribut parent pada parameternya
		Mahasiswa(string nik, string nama, string gender, string univ, string email, string nim, string fakultas, string prodi) : SivitasAkademik(nik, nama, gender, univ, email){
			this->nim = nim;
			this->fakultas = fakultas;
			this->prodi = prodi;
		}

		//setter untuk atribut-atribut mahasiswa
		void set_nim(string nim){
			this->nim = nim;
		}

		void set_prodi(string prodi){
			this->prodi = prodi;
		}

		void set_fakultas(string fakultas){
			this->fakultas = fakultas;
		}

		//getter untuk atribut-atribut mahasiswa

		string get_nim(){
			return this->nim;
		}

		string get_prodi(){
			return this->prodi;
		}

		string get_fakultas(){
			return this->fakultas;
		}

		~Mahasiswa(){

		}
};