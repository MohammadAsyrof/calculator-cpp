#include <iostream>
using namespace std;
int tambah(int x, int y){
	int hasil;
	hasil=x+y;
	return hasil;
}

int kurang(int x, int y){
	int hasil;
	hasil=x-y;
	return hasil;
}

int kali(int x, int y){
	int hasil;
	hasil=x*y;
	return hasil;
}

float bagi(float x, float y){
	float hasil;
	hasil=x/y;

	return hasil;
}

int main(){
	int x,y;
	int menu;
	cout<<" PROGRAM KALKULATOR" <<endl;
	cout<<" Menu Operasi : " <<endl;
	cout<<" 1. Penambahan" <<endl;
	cout<<" 2. Pengurangan" <<endl;
	cout<<" 3. Perkalian" <<endl;
	cout<<" 4. Pembagian" <<endl<<endl;
	cout<<" Pilih menu no : "; cin>>menu;
	
	if(menu==1){
		cout<<" Bilangan pertama : "; cin>>x;
		cout<<" Bilangan kedua : "; cin>>y;
		cout<<endl<<"\t Hasil " <<x <<" + " <<y <<" = " <<tambah(x,y);
		}
	else if(menu==2){
		cout<<" Bilangan pertama : "; cin>>x;
		cout<<" Bilangan kedua : "; cin>>y;
		cout<<endl<<"\t Hasil " <<x <<" - " <<y <<" = " <<kurang(x,y);
		}
	else if(menu==3){
		cout<<" Bilangan pertama : "; cin>>x;
		cout<<" Bilangan kedua : "; cin>>y;
		cout<<endl<<"\t Hasil " <<x <<" x " <<y <<" = " <<kali(x,y);
		}
	else if(menu==4){
		cout<<" Bilangan pertama : "; cin>>x;
		cout<<" Bilangan kedua : "; cin>>y;
		cout<<endl<<"\t Hasil " <<x <<" : " <<y <<" = " <<bagi(x,y);
		}
	else{
		cout<<endl<<"\t Data yang anda masukkan salah";
		}
}
