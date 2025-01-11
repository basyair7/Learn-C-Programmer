/*
Berikut adalah 8 algoritma sorting dan 8 algoritma searching yang umum digunakan, diikuti dengan contoh penggunaan dan perbandingan efisiensinya:

Algoritma Sorting:
1. Bubble Sort: Membandingkan dan menukar elemen secara berurutan hingga seluruh data terurut.
2. Selection Sort: Memilih elemen terkecil dan menukar dengan elemen di awal array, kemudian mengulangi proses ini.
3. Insertion Sort: Menyisipkan setiap elemen ke dalam posisi yang benar pada bagian terurut dari array.
4. Merge Sort: Membagi array menjadi dua bagian, mengurutkan kedua bagian secara terpisah, lalu menggabungkan kedua bagian menjadi satu.
5. Quick Sort: Memilih elemen pivot, membagi array menjadi dua bagian berdasarkan pivot, dan mengurutkan kedua bagian secara rekursif.
6. Heap Sort: Membangun max-heap dari data, kemudian menghapus elemen terbesar secara berulang untuk mendapatkan data terurut.
7. Shell Sort: Mengurutkan elemen dengan membandingkan elemen yang terpisah jarak tertentu, lalu mengurangi jarak tersebut secara bertahap.
8. Counting Sort: Menghitung jumlah kemunculan setiap nilai dan menempatkan nilai tersebut pada posisi yang benar dalam array hasil.

Algoritma Searching:
1. Linear Search: Mencari elemen satu per satu secara berurutan hingga elemen yang dicari ditemukan.
2. Binary Search: Mencari elemen di array terurut dengan membagi array menjadi dua bagian dan membandingkan elemen tengah dengan elemen yang dicari.
3. Jump Search: Mencari elemen di array terurut dengan melompati beberapa langkah, lalu melakukan pencarian linear pada blok yang lebih kecil.
4. Interpolation Search: Mencari elemen di array terurut dengan menggunakan estimasi posisi berdasarkan nilai elemen dan ukuran array.
5. Exponential Search: Mencari rentang yang mengandung elemen yang dicari, kemudian melakukan binary search pada rentang tersebut.
6. Fibonacci Search: Mencari elemen di array terurut dengan menggunakan deret Fibonacci untuk menentukan posisi pembagian array.
7. Hashing (Linear Probing): Menggunakan fungsi hash untuk menentukan posisi penyimpanan elemen, kemudian melakukan pencarian linear jika terjadi tabrakan.
8. Hashing (Chaining): Menggunakan tabel hash yang berisi linked list untuk menangani tabrakan, kemudian mencari elemen di dalam linked list.

Perbandingan Efisiensi:
1. Sorting: Algoritma seperti Merge Sort, Quick Sort, dan Heap Sort biasanya lebih efisien daripada Bubble Sort, Selection Sort, dan Insertion Sort untuk jumlah data yang besar, karena kompleksitas waktu mereka biasanya O(n log n) dibandingkan dengan O(n^2).
2. Searching: Binary Search biasanya paling efisien untuk array terurut karena memiliki kompleksitas waktu O(log n), sementara Linear Search memiliki kompleksitas waktu O(n). Namun, algoritma hashing dapat menjadi pilihan yang baik jika kita memiliki banyak pencarian yang akan dilakukan setelah penciptaan tabel hash.

Fungsi dalam Excel:
1. COUNT: Menghitung jumlah sel yang berisi nilai numerik.
2. COUNTIF: Menghitung jumlah sel yang memenuhi kriteria tertentu.
3. SUM: Menjumlahkan semua nilai numerik di dalam rentang sel.
4. SUMIF: Menjumlahkan sel yang memenuhi kriteria tertentu.
5. MAX: Mengembalikan nilai maksimum dari rentang sel.
6. MIN: Mengembalikan nilai minimum dari rentang sel.
7. AVERAGE: Menghitung rata-rata dari rentang sel.
8. STDEV: Menghitung standar deviasi dari rentang sel.

*/