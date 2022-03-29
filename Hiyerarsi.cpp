#include <iostream>
#include<string>
using namespace std;
class Humans{
	public:
		string ad,soyad,lakap,kanGurubu,anaAdi,babaAdi;
		double boy,kilo;
		int saglik=100;
		int yas;
		void eat();
		void drink();
		//Humans();
		//Humans(string ad,string soyad);
};
class Burjuvalar:public Humans{
	public:
		string sahipOlduguYerler[30];
		int parasi;
		short int calisanSayisi;
		void calisanKov();
		void maasVer();
		Burjuvalar(string ad,string soyad);
		Burjuvalar();	
};
class Aristokratlar:public Humans{
	public:
		int guc=0;
		void savas(Aristokratlar&a);
		int insaniIliskiler;
		string hangiUlkeninYoneticisi;
		int sayginlik=0;
		int parasi=10000;
		void paraDagit()
		{
			parasi-=10;
			sayginlik+=1;
			guc+=1;
			cout<<ad<<" para dagitildi "<<ad<<"'in kalan parasi: "<<parasi<<endl;
		}
		void sayginligiYazdir();
		/*Aristokratlar();
		Aristokratlar(string ad,string soyad);*/
};
class calisanlar:public Humans{
	public:
		string patronunAdi;
	
}; 

void Aristokratlar::savas(Aristokratlar&a){
			if(a.guc>guc){
				cout<<"Savas kaybedildi savasi "<<a.ad<<" kazandi.";
				sayginlik-=10;
				parasi-=100;
				saglik-=10;
			}
			else{
				cout<<"Savas kazanildi tebrikler muzaffer komutan";
				sayginlik+=10;
				parasi+=100;
			}
			
		}
 
void Humans::eat(){
	cout<<"Yemek yendi"<<endl;
	if(saglik==100)	
	{
	cout<<"Sagliginiz zaten full"<<endl;
	}
	else
	{
		cout<<"Sagliginiz 1 artti"<<endl;
		saglik++;
		cout<<"Yeni sagliginiz "<<saglik;
	}
}


//Humans::Humans(string ad,string soyad):ad(ad),soyad(soyad){ };

//Humans::Humans():ad("Bilinmiyor"),soyad("Bilinmiyor"){ };



int main() {
	setlocale(LC_ALL,"Turkish");
	Aristokratlar mehmet,ahmet;
	ahmet.ad="AHMET";
	mehmet.ad="MEHMET";
	ahmet.paraDagit();
	ahmet.paraDagit();
	
	mehmet.savas(ahmet);
	cout<<mehmet.parasi<<endl<<mehmet.sayginlik<<endl<<mehmet.saglik<<endl;
	
	system("PAUSE");
	return 0;
}
