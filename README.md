# LATIHAN3DPBO2023

## Janji
Dicki Fathurohman_2103842_Ilmu Komputer LATIHAN4DPBO2023
Saya Dicki Fathurohman [2103842] mengerjakan LATIHAN4DPBO2023 dalam mata kuliah DPBO, untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikan. Aamiin.

## Desain
![image](https://user-images.githubusercontent.com/100754802/222119981-095cc807-a827-4116-bd07-6164b8075031.png)

Pada desain ini Mahasiswa dan Dosen merupakan child dari Sivitas Akademik, dan Sivitas Akademik merupakan child dari Human. Alasan dari pewarisan seperti ini yaitu karena Mahasiswa dan Dosen itu termasuk kedalam sivitas akademik karena Sivitas Akademik dapat berisi mahasiswa dan dosen bukan hanya mahasiswa/dosen saja sehingga Sivitas Akademik dijadikan Parent. Kemudian sivitas akademik itu merupakan Manusia sehingga menjadi Child dari Class Manusia.

Class Program Studi memiliki Course, diasumsikan bahwa setiap prodi itu memiliki mata kuliah nya tersendiri. Kemudian Class Course memiliki dosen dan daftar Mahasiswa, diasumsikan bahwa satu course memiliki 1 dosen pengajar dengan beberapa mahasiswa yang mengontrak mata kuliah itu didalamnya.

Penjelasan detail mengenai class :
1) Class Human
Merupakan Base/Super Class, class ini tidak mewarisi atribut dari kelas manapun. Dalam kelas ini terdiri 3 atribut yang pasti dimiliki oleh setiap Human yaitu NIK, Nama dan Gender.
2) Class Sivitas Akademik
Class ini merupakan child dari Human, karena sivitas akademik itu merupakan manusia. Maka dia mewarisi atribut dari parentnya sehingga tidak perlu membuat lagi atribut nik, nama dan gender untuk dirinya. Sivitas Akademik memiliki dua atribut baru yaitu univ yang menandakan asal universitas, dan email yaitu email universitas.
3) Class Mahasiswa
Mahasiswa merupakan child dari Sivitas Akademik, karena termasuk kedalamnya. Walau nantinya prodi dan fakultas mahasiswa bisa didapatkan dari Mata Kuliah pada prodi yang dia kontrak, tetapi disini atribut Fakultas dan Prodi tidak dihilangkan dengan asumsi mahasiswa dari prodi lain dapat mengambil mata kuliah yang ditawarkan di program studi lain.
4) Class Dosen
Dosen merupakan child dari Sivitas Akademik, karena merupakan bagian dari sivitas akademik sama halnya dengan mahasiswa.
5) Class Course
Class Course memiliki(composite) object dosen dan List Mahasiswa (pada program digunakan vector) dengan asumsi bahwa satu course itu memiliki 1 dosen pengampu/pengajar dan dapat memiliki beberapa mahasiswa yang mengontraknya.
6) Class Program Studi
Class ini memiliki kumpulan course, yang dimana pada course tersebut sudah ada dosen dan mahasiswa jadi bisa diketahui siapa saja dosen dan mahasiswa yang berada pada lingkungan program studi tersebut.


## Alur Program
Pada program Main yang dibuat dengan hardcode, hal pertama yang dilakukan yaitu membuat, mengisi dan menambahkan mahasiswa dan dosen. Kemudian dibuat course yang dimana untuk dosen dan mahasiswanya mengambil dari data yang sudah dibuat. Kemudian barulah dibuat program studi dengan data course yang sudah ada. Sehingga untuk keluarannya akan menampilkan list prodi dan data atribut didalamnya, kemudian menampilkan daftar matakuliah yang ada pada prodi tersebut beserta data dosen yang mengajarnya, setelah itu menampilkan daftar mahasiswa yang mengontrak mata kuliah tersebut lengkap dengan data dirinya atau data atribut miliknya sendiri maupun yang diwarisi dari parentnya.


## Dokumentasi

![image](https://user-images.githubusercontent.com/100754802/222110964-832d984b-9c0c-4c58-afab-65adc9a6276f.png)


![image](https://user-images.githubusercontent.com/100754802/223445526-4032fa3a-aa0c-40d1-bc6f-21d9b707880c.png)

