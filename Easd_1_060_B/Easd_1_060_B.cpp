//1.Jelaskan, mengapa suatu algorithma dibutuhkan untuk menyelesaikan suatu masalah.
//Jawab : Untuk memecahkan masalah yang diberikan dengan menggunakan komputer, kita membutuhkan sebuah rancangan algoritma untuk itu.
//		: Dengan adanya berbagai macam algoritma, kita juga dapat menyelesaikan berbagai macam masalah komputer yg ada, bahkan sebuah algoritma dapat mencahkan berbagai masalah.
//		: dan efisiensi dari sebuah algoritma dapat dikembangkan lagi melalui struktur data. 	
//2.Dalam algorithma, di klassifikasikan menjadi 2 data struktur. Sebutkan 2 data struktur tersebut.
//Jawab : Terdapat 2 klasifikasi data struktur yaitu static untuk penggunaan array dan dynamic untuk penggunaan linked list
//3.Untuk mengukur sebuah efisiensi waktu suatu algoritma dibutuhkan beberapa faktor. Sebutkan faktor-faktor yang mempengaruhi mempengaruhi efisiensi waktu eksekusi suatu program!
//Jawab : terdapat 3 Faktor utama dalam mempengaruhi efisiensi suatu program, yaitu faktor waktu lama yang dibutuhkan, faktor usaha yang dilakukan, dan faktor ruang penyimpanan yang dibutuhkan
//		: Namun faktor yang mempengaruhi efisiensi waktu eksekusi suatu program itu sendiri yaitu :
//   - Speed of the machine
//   - Compiller
//   - OS
//   - Bahasa Pemrograman
//   - Size of the input

// Menurut saya Quick sort
// Jawab : Menurut saya Quick sort, karena menggunakan pendekatan "Divide and Conqueror" dimana secara berturut-turut membagi masalah menjadi bagian-bagian yang lebih kecil hingga masalah menjadi sangat kecil sehingga dapat langsung diselesaikan.

// 5.	Sebutkan dari algorithma yang telah dipelajari mana yang termasuk kedalam Quadratic dan mana yang termasuk kedalam Loglinear.
//		Quadratic : bublesort, insertion sort, shell sort
//		Loglinear : quick sort, selection sort, merge sort

// 6. Program Algoritma Merge sort :




#include <iostream>
using namespace std;

//array of integers to hold values
int Jodi[80];	//Menggunakan variabel Jodi sebagai arr dan panjang data 80 sesuai ketentuan dengan NIM 60
int n;

void input() {
	while (true)
	{
		cout << "Masukkan panjang element array: ";
		cin >> n;

		if (n <= 80)
			break;
		else
			cout << "\nMaksimum panjang array adalah 80" << endl;
	}

	cout << "\n------------------" << endl;
	cout << "\nEnter Array Element" << endl;
	cout << "\n------------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> Jodi[i];
	}
}
void merge(int Jodi[80], int low, int high) {

	int mid = (low + high) / 2;
	int i = low;
	int jf = mid + 1;
	int k = low;
	int temp[100]{};

	while ((i <= mid) && (jf <= high)) {
		if (Jodi[i] <= Jodi[jf]) {
		
	temp[k++] = Jodi[i++];
		}
		else {
			temp[k++] = Jodi[jf++];
		}
	}

	while (i <= mid) {
		temp[k++] = Jodi[i++];
	}
	while (jf <= high) {
		temp[k++] = Jodi[jf++];
	}
	for (int i = low; i <= high; i++) {
		Jodi[i] = temp[i];
	}

}
void mergeSort(int Jodi[80], int low, int high) {
	if (low >= high) {
		return;
	}
	int mid = (low + high) / 2;
	mergeSort(Jodi, low, mid);
	mergeSort(Jodi, mid + 1, high);
	merge(Jodi, low, high);
}

void display() {
	cout << "\n------------------" << endl;
	cout << "Sorted Array" << endl;
	cout << "------------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << Jodi[i] << " ";
	}
}


int main() {
	input();
	display();
	mergeSort(Jodi, 0, n - 1);
	system("pause");
	return 0;
}