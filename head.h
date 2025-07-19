#ifndef HEAD_H
#define HEAD_H

#define nil NULL

/*
INFORMASI JENIS MODUL
MODUL KONSTRUKTOR : sebuah jenis modul untuk menyusun atau membangun sebuah node 
MODUL KONTROL : sebuah jenis modul yang bertujuan untuk mengendalikan linked list
MODUL NON KONTROL : Sebuah jenis modul yang berfungsi untuk hal lain yang tidak berpengaruh terhadap pengendalian linked list
MODUL INTERFACE : Sebuah jenis modul yang berfungsi untuk menampilkan interface dari program linked list
MODUL OPERATION FILE : Sebuah jenis modul yang berfungsi untuk mengelola data ke dalam file
*/

// DEKLARASI TIPE DATA
typedef int infotype;
typedef struct  NODE* address;

// NODE DOUBLE LINKED LIST
typedef struct NODE{
    address prev;
    infotype info;
    address next;
}NODE;

// POINTER LIST
typedef struct {
    address First;
    address Last;
}List;

/* MODUL KONTRUKTOR */
// IS : tidak ada node di list 
// FS : mengalokasikan sebuah node
address alokasi(infotype X);

/* MODUL KONTROL */
// IS : list tidak ada atau bisa saja ada
// FS : list betambah satu node di awal
void addAwalNode(List *L, infotype X);

// IS : list tidak ada atau bisa saja ada
// FS : list bertambah node di akhir
void addAkhirNode(List *L, infotype X);

// IS : list tidak ada atau bisa saja ada
// FS : list bertambah satu node di tengah list
void addTengahNode(List *L, infotype X, infotype Y);

// IS : list ada dan belum berkurang
// FS : list ada dan berkurang 
void delAwalNode(List *L, infotype X);

/* MODUL NON KONTROL */
// IS : List tidak di print ke terminal
// FS : List berhasil di print ke terminal secara terurut dari depan
void printList(List L);

// IS : List tidak di print ke terminal
// FS : List berhasil di print ke terminal secara reverse
void printListReverse(List L);

// IS : List ada dan terdapat beberapa node
// FS : mengembalikan node yg dicari
address searchNodeList(List L, infotype X);


#endif