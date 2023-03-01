from Human import Human

# Dicki Fathurohman_2103842_Ilmu Komputer LATIHAN4DPBO2023
# Saya Dicki Fathurohman [2103842] mengerjakan LATIHAN4DPBO2023 dalam mata kuliah DPBO
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikan. Aamiin.
   
# Deklarasi kelas Sivitas Akademik, SivitasAkademik mewarasi kelas Human
class SivitasAkademik(Human):

	# karena dia merupakan anak dari Human, jadi dia sudah memiliki atribut bawaan dari human
	# kemudian ada atribut tambahan yang dimiliki oleh sivitas akademik
	__univ = ""
	__email = ""
	
	# constructor dengan parameter, parameter juga diisi dengan atribut parentnya
	def __init__(self, nik = "", nama = "", gender = "", univ = "", email = ""):
		#fungsi super digunakan untuk memanggil construct milik parent sehingga anak mewarisi semua method dan atribut dari parentnya
		super().__init__(nik, nama, gender) 
		self.__univ = univ
		self.__email = email
	

	# setter untuk atribut-atribut sivitas akademik
	def set_univ(self, univ):
		self.__univ = univ
	

	def set_email(self, email):
		self.__email = email
	

	# getter untuk atribut-atribut sivitas akademik
	def get_univ(self):
		return self.__univ
	

	def get_email(self):
		return self.__email