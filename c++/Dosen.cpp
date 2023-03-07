#include <iostream>
#include <string>

using namespace std;

//Dicki Fathurohman_2103842_Ilmu Komputer LATIHAN2DPBO2023
/* Saya Dicki Fathurohman [2103842] mengerjakan LATIHAN2DPBO2023 dalam mata kuliah DPBO
   untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikan.
   Aamiin.*/

//Deklarasi kelas Dosen, kelas Dosen mewarasi kelas SivitasAkademik
class Dosen : public SivitasAkademik{
	//Dosen memiliki atribut dari Sivitas Akademik
	//Kemudian ada beberapa atribut tambahan dari Dosen
	//disini tidak perlu menambahkan nama, jenis kelamin, univ dan email karena sudah diwarisi dari parentnya
	private:
		string nip;
		string prodi;
		string fakultas;
		string pendterakhir;
		string keahlian;

	public:
		//constructor
		Dosen(){
			this->nip = "";
			this->fakultas = "";
			this->prodi = "";
			this->pendterakhir = "";
			this->keahlian = "";
		}

		//constructor dengan parameter
		//diisi juga dengan atribut parent pada parameternya
		Dosen(string nik, string nama, string gender, string univ, string email, string nip, string fakultas, string prodi, string pendterakhir, string keahlian) : SivitasAkademik(nik, nama, gender, univ, email){
			this->nip = nip;
			this->prodi = prodi;
			this->fakultas = fakultas;
			this->pendterakhir = pendterakhir;
			this->keahlian = keahlian;
		}

		//setter untuk atribut-atribut Dosen
		void set_nip(string nip){
			this->nip = nip;
		}

		void set_prodi(string prodi){
			this->prodi = prodi;
		}

		void set_fakultas(string fakultas){
			this->fakultas = fakultas;
		}

		void set_pendterakhir(string pendterakhir){
			this->pendterakhir = pendterakhir;
		}

		void set_keahlian(string keahlian){
			this->keahlian = keahlian;
		}

		//getter untuk atribut-atribut Dosen

		string get_nip(){
			return this->nip;
		}

		string get_prodi(){
			return this->prodi;
		}

		string get_fakultas(){
			return this->fakultas;
		}

		string get_pendterakhir(){
			return this->pendterakhir;
		}

		string get_keahlian(){
			return this->keahlian;
		}

		~Dosen(){

		}
};