# Dicki Fathurohman_2103842_Ilmu Komputer LATIHAN4DPBO2023
# Saya Dicki Fathurohman [2103842] mengerjakan LATIHAN4DPBO2023 dalam mata kuliah DPBO
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikan. Aamiin.

from Course import Course

class ProgramStudi: #deklarasi untuk kelas ProgramStudi
	
    #ProgramStudi memiliki kumpulan mata kuliah di dalamnya
    __kode = ""
    __nama_prodi = ""
    __fakultas = ""
    __courses = []

    # Constructor dengan atribut sebagai parameternya
    def __init__(self, kode = "", nama_prodi = "", fakultas = "", courses = []):
        self.__kode = kode
        self.__nama_prodi = nama_prodi
        self.__fakultas = fakultas
        self.__courses = courses or []

    # setter untuk atribut-atribut yang dimiliki Human
    def set_kode(self, kode):
        self.__kode = kode

    def set_nama_prodi(self, nama_prodi):
        self.__nama_prodi = nama_prodi
    
    def set_fakultas(self, fakultas):
        self.__fakultas = fakultas

    def set_courses(self, courses):
        self.__courses.append(courses)

    # getter untuk atribut-atribut yang dimiliki Human
    def get_kode(self):
        return self.__kode

    def get_nama_prodi(self):
        return self.__nama_prodi

    def get_fakultas(self):
        return self.__fakultas

    def get_courses(self):
        return self.__courses


