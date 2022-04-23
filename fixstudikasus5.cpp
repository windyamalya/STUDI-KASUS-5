//2100018418_Ali Ismail Ranggas
//2100018423_Audila Shakira
//2100018432_Windy Sayyida Amalya


#include <iostream>
using namespace std;

class perulangan {
	public:
		void input();
		int proses();
		void output();

	private:
		int i, n;
		int nim, total_sks, total;
		int sks[15], diskon, hasil;
		string matkul[15], nama;
};

void perulangan::input(){
	cout << "Masukkan Nama : ";
	cin >> nama;
	cout << "Masukkan NIM : ";
	cin >> nim;
	cout << "Banyaknya matkul : ";
	cin >> n;
	for(i=0; i<n; i++){
		cout << "\nMatakuliah : ";
		cin >> matkul[i];
		cout << "Masukkan SKS : ";
		cin >> sks[i];
    cout<<endl;
	}
  i = 0;
	total = 0;
	total_sks = 0;
}

int perulangan::proses() {
	if(i==n){
		total = total_sks * 150000;
		diskon = total * 0.25;
		hasil = total - diskon;
		return hasil;
	} else {
		total_sks += sks[i];
		i++;
		return proses();
	}
}

void perulangan::output(){
	int persks=150000;
	cout <<"\n-----------------------";
	cout << "\nNama Mahasiswa : " <<nama;
	cout << "\nNIM Mahasiswa  : " << nim;
	cout << "\nBiaya per SKS  : " <<persks;
	cout <<"\n-----------------------";
	cout << "\nNo.\tDaftar matkul\tSKS\n";
	for(i=0; i<n; i++) {
		cout <<i+1 <<"\t\t" <<matkul[i];
		cout <<"\t\t" <<sks[i]<<endl;
	}
	cout << "Total SKS : " << total_sks <<endl;
	cout << "-------------------------- \n";
	cout << "Total            : " <<total<<endl;
	cout << "Diskon           : " <<diskon<<endl;
	cout << "Total Pembayaran : " <<hasil<<endl;
  cout<<endl<<endl;
}

int main() {
	perulangan p;
	p.input();
	p.proses();
	p.output();
  return 0;
}
