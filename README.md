# C-Double-Linked-List
# 🔗 Implementasi Double Linked List dalam Bahasa C

Proyek ini merupakan implementasi sederhana dari **Double Linked List** menggunakan bahasa pemrograman C.  
Proyek ini dibuat sebagai bagian dari dokumentasi dan proses pembelajaran saya dalam memahami **struktur data dan algoritma**, khususnya pada topik linked list ganda.

## 🎯 Tujuan
Tujuan dari program ini adalah untuk memahami cara kerja **Double Linked List** (linked list ganda) yang memungkinkan traversal **dua arah (maju dan mundur)**, serta pemanfaatan pointer `prev` dan `next` dalam pengelolaan node secara dinamis.

## 🧩 Fitur Program
Program ini mendukung beberapa operasi dasar pada double linked list, seperti:
- Menambahkan node di awal dan akhir list
- Menghapus node dari awal, akhir, atau berdasarkan nilai
- Menelusuri dan menampilkan isi list dari awal ke akhir dan sebaliknya
- Mencari node tertentu dalam list
- Menghitung jumlah node yang tersimpan
- Menyimpan dan memuat data dari file untuk persistensi data

## 🛠️ Teknologi yang Digunakan
- Bahasa Pemrograman: C
- Paradigma: Modular Programming (menggunakan file `.h` dan `.c` terpisah)
- Penyimpanan: Menggunakan file `.txt` sebagai media penyimpanan data

## 🗂️ Struktur Direktori
```plaintext
.
├── main.c         // Fungsi utama
├── body.c         // Implementasi ADT double linked list
├── head.h         // Header file untuk deklarasi fungsi dan struct
├── run.sh         // Script compile & run otomatis
├── README.md      // Dokumentasi proyek
├── .gitignore     // File/folder yang diabaikan Git
└── data.txt       // File penyimpanan data

```

---

## 🧪 Cara Menjalankan Program

### 🔧 Jalankan Otomatis dengan Script

Program ini sudah dilengkapi dengan file `run.sh` agar proses **kompilasi dan eksekusi lebih mudah**.

#### ✅ Langkah-langkah:

1. Buka terminal (Bash)
2. Pastikan kamu berada di direktori project ini
3. Jalankan perintah berikut:

```bash
./run.sh