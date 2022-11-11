/*
	Soal nomor 1

	Buatlah program yang dapat menghitung FPB dan KPK 2 bilangan bulat positif (A dan B)!
	Constraint: 1 <= B < A <= 10000
*/

// library
#include <stdio.h>

// fungsi untuk menentukan fpb dari kedua bilangan positif a dan b menggunakan recursion
// fpb(36, 48) -> 12
int fpb(int a, int b) {
	// cek apakah b sama dengan 0 atau tidak, jika iya, maka yang akan dikembalikan adalah nilai dari a
	if (b == 0) return a;
	
	// memanggil fungsi fpb sendiri dengan menggunakan formula fpb(b, a % b) atau fpb(b, a modulo b)
	return fpb(b, a % b);
}

// fungsi untuk menentukan kpk dari kedua bilangan positif a dan b menggunakan recursion yang memanfaatkan fungsi dari fpb()
// kpk(6, 8) -> 24
int kpk(int a, int b) {
	// kalkulasikan dengan formula ( a / fpb(a, b) ) * b yang akan menghasilkan sebuah kpk dari kedua bilangan positif a dan b
	return (a / fpb(a, b)) * b;
}


// fungsi utama
int main() {
	// variabel untuk menyimpan kedua angka dari input user
	int a, b;
	
	// print pertanyaan untuk menanyakan kedua buah angka
	printf("Syarat bilangan: 1 <= a, b <= 10000\n");
	printf("Masukkan dua bilangan: ");
	
	// pengecekan jika salah satu atau keduanya angka negatif atau sama dengan 0 atau lebih dari 10000
	while (1) {
		// masukkan input user ke dalam variabel a dan b
		scanf("%d %d", &a, &b);
		
		// pengecekan jika kedua buah angka sudah memenuhi syarat atau tidak
		if (a >= 1 && a <= 10000 && b >= 1 && b <= 10000 && a > b) 
			// break while loop jika kedua angka sudah memenuhi syarat
			break;
		else
			// print pernyataan bahwa salah satu angka atau kedua angka belum memenuhi syarat
			printf("Belum memenuhi syarat, masukkan kembali: ");
	}
	
	// print out hasil dari fpb dan kpk kedua angka
	printf("Faktor Persekutuan Terbesar: %d\n", fpb(a, b));
	printf("Kelipatan Persekutuan Terkecil: %d\n", kpk(a, b));
	
	getchar();
	
	return 0;
}


