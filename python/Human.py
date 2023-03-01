# Dicki Fathurohman_2103842_Ilmu Komputer LATIHAN4DPBO2023
# Saya Dicki Fathurohman [2103842] mengerjakan LATIHAN4DPBO2023 dalam mata kuliah DPBO
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikan. Aamiin.
   
class Human: #Deklarasi untuk kelas Human, karena dia merupakan Super/Base class jadi tidak mewarisi atribut dari yg lain
	# Atribut yang dimiliki oleh Human, ada nik, nama, dan gender
	# atribut ini nantinya akan dimiliki oleh anak atau turunan dari human
	__nik = ""
	__nama = ""
	__gender = ""

	# Constructor dengan atribut sebagai parameternya
	def __init__(self, nik = "", nama = "", gender = ""):
		self.__nik = nik
		self.__nama = nama
		self.__gender = gender

	# setter untuk atribut-atribut yang dimiliki Human
	def set_nik(self, nik):
		self.__nik = nik

	def set_nama(self, nama):
		self.__nama = nama

	def set_gender(self, gender):
		self.__gender = gender

	# getter untuk atribut-atribut yang dimiliki Human
	def get_nik(self):
		return self.__nik

	def get_nama(self):
		return self.__nama

	def get_gender(self):
		return self.__gender



