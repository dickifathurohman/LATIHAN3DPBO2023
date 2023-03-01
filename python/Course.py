# Dicki Fathurohman_2103842_Ilmu Komputer LATIHAN4DPBO2023
# Saya Dicki Fathurohman [2103842] mengerjakan LATIHAN4DPBO2023 dalam mata kuliah DPBO
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikan. Aamiin.

from Dosen import Dosen
from Mahasiswa import Mahasiswa

class Course: #Deklarasi untuk kelas Course

    #Course memiliki dosen serta kumpulan mahasiswa didalamnya (composite)
    __nama_matkul = ""
    __dosen = Dosen() #karena mata kuliah memiliki dosen pengajarnya maka dipanggil di class course
    __mahasiswa = [] #karena mata kuliah bisa di kontrak banyak mahasiswa, maka tipe yg dipanggilnya yaitu list

    # Constructor dengan atribut sebagai parameternya
    def __init__(self, nama_matkul = "", dosen = Dosen(), mahasiswa = []):
        self.__nama_matkul = nama_matkul
        self.__dosen = dosen

        #digunakan or untuk menentukan apakah akan digunakan list mahasiswa yang sudah ada atau membuat list kosong yang baru
        #jika kosong maka akan digunakan '[]' jika tidak maka akan menggunakan mahasiswa
        self.__mahasiswa = mahasiswa or [] # use the given list of mahasiswa or create a new empty list
    
    # setter untuk atribut-atribut yang dimiliki Human
    def set_nama_matkul(self, nama_matkul):
        self.__nama_matkul = nama_matkul

    def set_dosen(self, dosen):
        self.__dosen = dosen

    def set_mahasiswa(self, mahasiswa):
        self.__mahasiswa.append(mahasiswa)

    # getter untuk atribut-atribut yang dimiliki Human
    def get_nama_matkul(self):
        return self.__nama_matkul

    def get_dosen(self):
        return self.__dosen

    def get_mahasiswa(self):
        return self.__mahasiswa
    