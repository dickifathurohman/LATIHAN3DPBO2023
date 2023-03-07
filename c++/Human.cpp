#include <iostream>
#include <string>

using namespace std;

//Dicki Fathurohman_2103842_Ilmu Komputer LATIHAN4DPBO2023
/* Saya Dicki Fathurohman [2103842] mengerjakan LATIHAN4DPBO2023 dalam mata kuliah DPBO
   untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikan.
   Aamiin.*/
   
class Human //Deklarasi untuk kelas Human, karena dia merupakan Super/Base class jadi tidak mewarisi atribut dari yg lain (ga pakai extend)
{
	//Atribut yang dimiliki oleh Human, ada nik, nama, dan gender
	//atribut ini nantinya akan dimiliki oleh anak atau turunan dari human
	private:
		string nik;
		string nama;
		string gender;

	public:

		// Constructor
		Human(){
			this->nik = "";
			this->nama = "";
			this->gender = "";
		}

		//Constructor lain dengan atribut sebagai parameternya
		Human(string nik, string nama, string gender){
			this->nik = nik;
			this->nama = nama;
			this->gender = gender;
		}

		//setter untuk atribut-atribut yang dimiliki Human
		void set_nik(string nik){
			this->nik = nik;
		}

		void set_nama(string nama){
			this->nama = nama;
		}

		void set_gender(string gender){
			this->gender = gender;
		}

		//getter untuk atribut-atribut yang dimiliki Human
		string get_nik(){
			return this->nik;
		}

		string get_nama(){
			return this->nama;
		}

		string get_gender(){
			return this->gender;
		}

		//destructor
		~Human(){

		}

};



