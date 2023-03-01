from SivitasAkademik import SivitasAkademik

# Dicki Fathurohman_2103842_Ilmu Komputer LATIHAN4DPBO2023
# Saya Dicki Fathurohman [2103842] mengerjakan LATIHAN4DPBO2023 dalam mata kuliah DPBO
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikan. Aamiin.

#Deklarasi kelas Mahasiswa, kelas mahasiswa mewarasi kelas SivitasAkademik
class Mahasiswa(SivitasAkademik):
	#Mahasiswa memiliki atribut dari Sivitas Akademik dan Human
	#Kemudian ada beberapa atribut tambahan dari mahasiswa
	#disini tidak perlu menambahkan nama dan jenis kelamin karena sudah diwarisi dari human

	__nim = ""

	#fakultas & prodi tetap ada untuk menandakan asal mahasiswa, karena mahasiswa bisa saja mengontrak mata kuliah dari prodi lain
	__fakultas = "" 
	__prodi = ""

	#constructor dengan parameter, # constructor dengan parameter, parameter juga diisi dengan atribut parentnya
	def __init__(self, nik = "", nama = "", gender = "", univ = "", email = "", nim = "", fakultas = "", prodi = ""):

		#fungsi super digunakan untuk memanggil construct milik parent sehingga anak mewarisi semua method dan atribut dari parentnya
		super().__init__(nik, nama, gender, univ, email)
		self.__nim = nim
		self.__fakultas = fakultas
		self.__prodi = prodi

	#setter untuk atribut-atribut mahasiswa
	def set_nim(self, nim):
		self.__nim = nim
	
	def set_fakultas(self, fakultas):
		self.__fakultas = fakultas
	
	def set_prodi(self, prodi):
		self.__prodi = prodi



	#getter untuk atribut-atribut mahasiswa

	def get_nim(self):
		return self.__nim
	
	def get_fakultas(self):
		return self.__fakultas
	
	def get_prodi(self):
		return self.__prodi