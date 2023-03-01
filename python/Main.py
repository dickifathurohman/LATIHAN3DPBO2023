# Dicki Fathurohman_2103842_Ilmu Komputer LATIHAN4DPBO2023
# Saya Dicki Fathurohman [2103842] mengerjakan LATIHAN4DPBO2023 dalam mata kuliah DPBO
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikan. Aamiin.

#dalam kasus ini tidak digunakan karena human dan sivitasakademik tidak dipanggil di main, dan sudah diwarisi oleh mahasiswa dan dosen
#from Human import Human 
#from SivitasAkademik import SivitasAkademik 

#import class yang digunakan
from Mahasiswa import Mahasiswa
from Dosen import Dosen
from Course import Course
from ProgramStudi import ProgramStudi

mylist = [] #membuat list untuk menampung data yang akan di append

#membuat variable dan mengisi datanya dengan data mahasiswa
student1 = Mahasiswa("3214022007032006", "Dicki Fathurohman", "Male", "UPI", "dickifathurohman@upi.edu", "2103842", "FPMIPA", "Ilmu Komputer")
student2 = Mahasiswa("3214023382001100", "Gatsby Del Rey", "Male", "UPI", "gatsbydelret@upi.edu", "2166612", "FPMIPA", "Ilmu Komputer")
student3 = Mahasiswa("2383994110088399", "Jang Wonyoung", "Female", "UPI", "wounyoungie@upi.edu", "2133045", "FPMIPA", "Ilmu Komputer")
student4 = Mahasiswa("1431119340288287", "Han Jisung", "Male", "UPI", "jisunghan@upi.edu", "2143222", "FPMIPA", "Ilmu Komputer")
student5 = Mahasiswa("4820110747448849", "Jo Yuri", "Female", "UPI", "yuriz@upi.edu", "2100384", "FPMIPA", "Ilmu Komputer")
student6 = Mahasiswa("7639391000011188", "Minatozaki Sana", "Female", "UPI", "sanashyshyshy@upi.edu", "2103345", "FPMIPA", "Ilmu Komputer")

#membuat variabel dan mengisi datanya dengan data dosen
dosen1 = Dosen("1112984989498949", "Angga Yusuf Fadhillah", "Male", "UPI", "lordangga@upi.edu", "01112342", "FPMIPA", "Ilmu Komputer", "S3", "Manajemen Jaringan")
dosen2 = Dosen("1120477729400220", "Faxhri Harrington", "Male", "UPI", "lordfaxhri@upi.edu", "1123300", "FPMIPA", "Ilmu Komputer", "S3", "Troubleshooting")
dosen3 = Dosen("29994002927727290", "Dauz bin Dauz", "Male", "UPI", "lordauz@upi.edu", "66299182", "FPMIPA", "Ilmu Komputer", "S2", "Raja Tutorial")

#membuat variabel dan mengisi datanya dengan data mata kuliah
#karena course memiliki dosen, dan kumpulan mahasiswa, datanya mengambil dari data dosen dan mahasiswa diatas yang sudah di hardcode
course1 = Course("Jaringan Komputer", dosen1, mahasiswa=[student4, student5])
course2 = Course("Rekayasa Perangkat Lunak", dosen2, mahasiswa=[student1, student2])
course3 = Course("Desain Pemrograman Web", dosen3, mahasiswa=[student3, student6])

#membuat variabel dan mengisi datanya dengan data prodi
#data course mengambil dari data yang sudah di hardcode diatas
Prodi = ProgramStudi("IK143", "Ilmu Komputer", "FPMIPA", courses=[course1, course2, course3])

mylist.append(Prodi) #tambahkan datanya


for prodi in mylist: #perulangan sebanyak jumlah prodi di mylist

    #tampilkan data prodi
    print("Kode Prodi: ", prodi.get_kode())
    print("Nama Prodi: ", prodi.get_nama_prodi())
    print("Fakultas: ", prodi.get_fakultas())
    print("\nList Matakuliah:")

    #kemudian tampilkan matkul dan dosen pengajarnya
    for course in prodi.get_courses():
        print("\nNama Matkul: ", course.get_nama_matkul())
        print("Dosen Pengajar: ", course.get_dosen().get_nama())
        print("NIK: ", course.get_dosen().get_nik())
        print("Gender: ", course.get_dosen().get_gender())
        print("NIP: ", course.get_dosen().get_nip())
        print("Asal : ", course.get_dosen().get_fakultas(), " | ", course.get_dosen().get_prodi())
        print("Pendidikan Terakhir: ", course.get_dosen().get_pendterakhir())
        print("Keahlian: ", course.get_dosen().get_keahlian())

        print("\nDaftar Mahasiswa yang Mengontrak:")
        
        #kemudian tampilkan mahasiswa yang dimiliki matkul tersebut (disini diasumsikan mahasiswa yang mengontrak)
        for student in course.get_mahasiswa():
            print("-", student.get_nama())
            print("NIK: ", student.get_nik())
            print("Gender: ", student.get_gender())
            print("NIM: ", student.get_nim())
            print("Asal : ", student.get_fakultas(), " | ", student.get_prodi())




