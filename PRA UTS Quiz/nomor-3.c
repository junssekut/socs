/*
	Soal nomor 3
*/

// library
#include <stdio.h>

// fungsi untuk menentukan jumlah karakter dari sebuah string
// tanpa menggunakan library string.h; strlen()
// len("junssekut#4964") -> 14
// len("") -> 0
unsigned int len(const char *str) {
	// variabel untuk penjumlahan karakter
	unsigned int length = 0;
	
	// menggunakan while loop, kita cek apakah karakter pada indeks ini null terminator atau tidak ('\0')
	while (*str != '\0') { length++; str++; }
	
	return length;
}

// fungsi untuk menentukan apakah karakter adalah alphabet [A-Za-z]
// isAlpha('c') -> 1
// isAlpha(' ') -> 0
int isAlpha(int c) {
	// 65 - 90 adalah alphabet dengan huruf kapital
	// 97 - 122 adalah alphabet dengan huruf kecil
	return (c >= 65 && c <= 90) || (c >= 97 && c <= 122);
}

// fungsi untuk menentukan angka fibonacci dari sebuah angka menggunakan recursion
// fibonacci(0) -> 0
// fibonacci(3) -> 1
int fibonacci(int n) {
	// jika n == 0 atau n == 1 maka kita balikkan nilai n agar mencegah stackoverflow
	if (n == 0 || n == 1)
		return n;
		
	// kita kalkulasikan menggunakan formula fibonacci( n - 2 ) + fibonacci( n - 1 )
	return fibonacci(n - 2) + fibonacci(n - 1);
}

// fungsi untuk menentukan apakah angka terdapat dalam barisan fibonacci atau tidak
// isFibonacci(1) -> 1
// isFibonacci(4) -> 0
int isFibonacci(int n) {
	// variabel untuk perhitungan indeks
	int i = 2;
	
	// jika n == 0 atau n == 1 maka kita balikkan dengan angka 1 
	if (n == 0 || n == 1) return 1;
	
	// while loop untuk mengecek apakah fibonacci pada index i adalah angka n
	while (1) {
		if (fibonacci(i) == n)
			return 1;
		
		if (fibonacci(i) > n)
			return 0;
		i++;
	}
	return 0;
}

/*
	65						77
	A B C D E F G H I J K L M
	Z Y X W V U T S R Q P O N
	90						78
*/

// fungsi untuk menukar karakter menggunakan constrain diatas
// swap('C') -> X
// swap('A') -> Z
void swap(char *c) {
	// variabel penampung karakter
	char upp[14][2];
	char low[14][2];
	
	// for loop untuk memasukkan karakter - karakter
	for (int i = 0; i < 14; i++) {
		upp[i][0] = (char) 65 + i;
		upp[i][1] = (char) 90 - i;
		
		low[i][0] = (char) 97 + i;
		low[i][1] = (char) 122 - i;
	}
	
	char ch = *c;
	
	// pengecekkan jika karakter ada di dalam constain atau tidak dan jika iya, maka diubah karakternya
	for (int i = 0; i < 14; i++) {
		if (upp[i][0] == ch) *c = upp[i][1];
		if (upp[i][1] == ch) *c = upp[i][0];
		
		if (low[i][0] == ch) *c = low[i][1];
		if (low[i][1] == ch) *c = low[i][0];
	}
}

// fungsi untuk mem-fibolisasikan sebuah string
// fibolize("I LOVE YOU") -> R OLVV YOF
// fibolize("HALO") -> SZOO
void fibolize(char *str) {
	// variabel untuk menghitung indeks huruf di string
	int j = 1;

	// for loop untuk pengecekkan seluruh karakter pada string
	for (int i = 0; i < len(str); i++) {
		// jika bukan alphabet, maka lanjutkan loop dan tidak terjadi perhitungan variabel j
		if (!(isAlpha(str[i]))) continue;
			
		// jika j fibonacci, panggil function swap untuk merubah karakter
		if (isFibonacci(j)) swap(&str[i]);
		
		j++;
	}	
	
}

// fungsi untuk menunggu enter
void waitForEnter() {
	printf("\nTekan [ENTER] untuk melanjutkan...");
	
	getchar();
}

// fungsi utama
int main() {
	// variabel untuk menampung string
	char s[256];
	
	// pertanyaan untuk input user
	printf("Masukkan kata [maksimal 256 huruf]: ");
	
	// scan input user dan masukkan jika ada spasi juga
	scanf("%[^\n]s", s); 

	getchar();
	
	// fibolisasi string input user dan rubah menjadi sesuai dengan constrain	
	fibolize(s);
	
	// print hasil perubahan kata dari fibolisasi sebelumnya
	printf("Kata berubah menjadi: %s\n", s);
	
	waitForEnter();
	
	return 0;
}
