from SivitasAkademik import SivitasAkademik

# Dicki Fathurohman_2103842_Ilmu Komputer LATIHAN4DPBO2023
# Saya Dicki Fathurohman [2103842] mengerjakan LATIHAN4DPBO2023 dalam mata kuliah DPBO
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikan. Aamiin.

#Deklarasi kelas Dosen, kelas Dosen mewarasi kelas SivitasAkademik
class Dosen(SivitasAkademik):

	#Dosen memiliki atribut dari Sivitas Akademik dan Human
	#Kemudian ada beberapa atribut tambahan dari Dosen
	#disini tidak perlu menambahkan nama dan jenis kelamin karena sudah diwarisi dari human

    __nip = ""
    __fakultas = ""
    __prodi = ""
    __pendterakhir = ""
    __keahlian = ""

	#constructor dengan parameter, # constructor dengan parameter, parameter juga diisi dengan atribut parentnya
    def __init__(self, nik = "", nama = "", gender = "", univ = "", email = "", nip = "", fakultas = "", prodi = "", pendterakhir = "", keahlian = ""):

		#fungsi super digunakan untuk memanggil construct milik parent sehingga anak mewarisi semua method dan atribut dari parentnya
        super().__init__(nik, nama, gender, univ, email)
        self.__nip = nip
        self.__fakultas = fakultas
        self.__prodi = prodi
        self.__pendterakhir = pendterakhir
        self.__keahlian = keahlian

    #setter untuk atribut-atribut Dosen
    def set_nip(self, nip):
        self.__nip = nip

    def set_fakultas(self, fakultas):
        self.__fakultas = fakultas

    def set_prodi(self, prodi):
        self.__prodi = prodi

    def set_pendterakhir(self, pendterakhir):
        self.__pendterakhir = pendterakhir

    def set_keahlian(self, keahlian):
        self.__keahlian = keahlian


    #getter untuk atribut-atribut Dosen

    def get_nip(self):
        return self.__nip

    def get_pendterakhir(self):
        return self.__pendterakhir

    def get_keahlian(self):
        return self.__keahlian
    
    def get_fakultas(self):
        return self.__fakultas

    def get_prodi(self):
        return self.__prodi