#include<iostream>

using namespace std;

int main (){
	float Presensi, Tugas, Quiz, UTS, UAS, Nilai_Akhir;
	char Predikat;
	
	cout<<"Menghitung Nilai Akhir Mahasiswa"<<endl;
	
	cout<<"Masikkan Presensi = ";
	cin>> Presensi;
	
	cout<<"Masukkan Nilai Tugas = ";
	cin>> Tugas;
	
	cout<<"Masukkan Nilai Quiz = ";
	cin>>Quiz;
	
	cout<<"Masukkan Nilai UTS = ";
	cin>>UTS;
	
	cout<<"Masukkan Nilai UAS = ";
	cin>> UAS;
	
	Nilai_Akhir = ((Presensi*0.1)+(Tugas*0.2)+(Quiz*0.1)+(UTS*0.3)+(UAS*0.3));
	
	if (Nilai_Akhir >= 85){
		Predikat = 'A';
	}else if (Nilai_Akhir >= 65){
		Predikat = 'B';
	}else if (Nilai_Akhir >= 50){
		Predikat = 'C';
	}else if (Nilai_Akhir >= 45){
		Predikat = 'D';
	}else {
		Predikat = 'E';
	}
	cout<<"Nilai Akhir = "<<Nilai_Akhir<<endl;
	cout<<"Predikat    = "<<Predikat<<endl;
}

