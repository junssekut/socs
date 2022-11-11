/*
	Soal nomor 2 

	Buatlah sebuah program yang memiliki menu-menu berikut:
	a) Menentukan suatu bilangan bulat positif tidak nol prima atau tidak
	b) Menentukan hasil suatu Kombinasi
	c) Menentukan hasil suatu Permutasi
	
	Syarat no 1 & 2:
	- Jika memungkinkan dibuat function, buatlah jadi function!
	- Jika suatu proses dapat dibuat menjadi fungsi rekursif, buatlah jadi rekursif!
	- User dapat memilih untuk mengakhiri program (program tidak boleh berakhir jika user tidak mengakhirinya)
*/

// library
#include <stdio.h>
#include <stdlib.h>

// fungsi untuk mengkalkulasikan faktorial menggunakan recursion
int factorial(int n) {
	// jika n == 0 atau n == 1 maka kita kembalikan dengan angka n itu sendiri
	if (n == 0 || n == 1)
		return n;
	
	// jika tidak, maka kakulasikan dengan menggunakan formula n * factorial(n - 1)
	return n * factorial(n - 1);
}

// fungsi untuk menghitung permutasi dari kedua buah angka
int permutation(int a, int b) {
	// jika a == b maka return 1
	if (a == b) return 1;
	
	// kalkulasikan dengan menggunakan formula ( a! / ( a - b )! )
	return (factorial(a) / factorial(a - b));
}

// fungsi untuk menghitung kombinasi dari kedua buah angka
int combination(int a, int b) {
	// jika a == b maka return 1
	if (a == b) return 1;
	
	// kalkulasikan dengan menggunakan formula ( a! / (a - b)! b! )
	return factorial(a) / (factorial(a - b) * factorial(b));
}

// fungsi untuk menyatakan bahwa angka itu prima atau tidak dengan menggunakan recursion
// 0 jika angka tidak prima
// 1 jika angka prima
int isPrime(int n, int i) {
    if (i == 1) return 1;
	if (n % i == 0) return 0;
	
	return isPrime(n, i - 1);    
}

// fungsi liner untuk mem-print sebuah karakter dengan jumlah n kali
void liner(char c, int n) {
	for (int i = 0; i < n; i++) printf(i == n - 1 ? "%c\n" : "%c", c);
}

// fungsi untuk menampilkan ui menu
void showMenu() {
	printf("\tMain Menu\n");
	liner('=', 25);
	printf("1) Menentukan suatu bilangan bulat positif tidak nol prima atau tidak\n");
	printf("2) Menentukan hasil suatu kombinasi\n");
	printf("3) Menentukan hasil suatu permutasi\n");
	printf("\nMasukkan angka [-1] untuk exit program: ");
}

// fungsi untuk menunggu sebuah enter dari user
void waitForEnter() {
	getchar();
	
	printf("\n\nTekan [ENTER] untuk melanjutkan...");
	
	getchar();
}

// fungsi utama
int main() {
	// variabel untuk menyimpan input dari user
	int i, a, b;
	
	while (1) {
		// clear console output untuk merapikan output console
		system("cls");
		
		// tampilkan menu menggunakan fungsi showMenu()
		showMenu();
		
		// scan input user dan masukkan ke dalam variabel i
		scanf("%d", &i);
		
		// menggunakan switch case, kita masukkan perhitungan untuk menu yang dipilih
		switch (i) {
			case 1:
				// print pertanyaan untuk menanyakan angka
				printf("Masukkan angka untuk pengecekkan: ");
				
				while (1) {
					// masukkan input user ke dalam variabel a
					scanf("%d", &a);
					
					// pengecekan jika kedua buah angka sudah memenuhi syarat atau tidak
					if (a > 1) 
						// break while loop jika kedua angka sudah memenuhi syarat
						break;
					else
						// print pernyataan bahwa salah satu angka atau kedua angka belum memenuhi syarat
						printf("Masukkan kembali [a > 1]: ");
				}
				
				// print out hasil
				printf("Angka %d merupakan angka %s.", a, isPrime(a, a / 2) == 0 ? "non-prima" : "prima");
				
				// menunggu enter
				waitForEnter();
				
				break;
			case 2:
				// print pertanyaan untuk menanyakan kedua buah angka
				printf("Masukkan dua buah angka: ");
			
				while (1) {
					// masukkan input user ke dalam variabel a dan b
					scanf("%d %d", &a, &b);
					
					// pengecekan jika kedua buah angka sudah memenuhi syarat atau tidak
					if (a >= b) 
						// break while loop jika kedua angka sudah memenuhi syarat
						break;
					else
						// print pernyataan bahwa salah satu angka atau kedua angka belum memenuhi syarat
						printf("Masukkan kembali [a >= b]: ");
				}
				
				// print hasil dari kombinasi a dan b menggunakan fungsi combination()
				printf("Hasil kombinasi %d", combination(a, b));
				
				// menunggu enter
				waitForEnter();
				
				break;
			case 3:
				// print pertanyaan untuk menanyakan kedua buah angka
				printf("Masukkan dua buah angka: ");
				
				while (1) {
					// masukkan input user ke dalam variabel a dan b
					scanf("%d %d", &a, &b);
					
					// pengecekan jika kedua buah angka sudah memenuhi syarat atau tidak
					if (a >= b) 
						// break while loop jika kedua angka sudah memenuhi syarat
						break;
					else
						// print pernyataan bahwa salah satu angka atau kedua angka belum memenuhi syarat
						printf("Masukkan kembali [a >= b]: ");
				}
				
				// print hasil dari permutasi a dan b menggunakan fungsi permutation()
				printf("Hasil permutasi: %d", permutation(a, b));
				
				// menunggu enter
				waitForEnter();
				
				break;
			case -1:
				break;
			default:
				// jika input tidak mengarah ke menu mana saja, maka print pernyataan
				printf("Menu %d tidak dapat ditemukan.", i);
	
				// menunggu enter
				waitForEnter();
				
				break;
		}
		
		// break program dan keluar dari program jika input == -1
		if (i == -1) break;
	}
	
	
	return 0;
}

