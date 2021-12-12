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
		short int calistirdigiKoleSayisi;
		void koleKov();
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
		void raconKes();
		void paraDagit()
		{
			parasi-=10;
			sayginlik+=1;
			guc+=1;
			cout<<ad<<" para daðýtýldý "<<ad<<"'ýn kalan parasý: "<<parasi<<endl;
		}
		void sayginligiYazdir();
		/*Aristokratlar();
		Aristokratlar(string ad,string soyad);*/
};
class Koleler:public Humans{
	public:
		string efendisininAdi;
	
}; 

void Aristokratlar::savas(Aristokratlar&a){
			if(a.guc>guc){
				cout<<"Savas kaybedildi savaþý "<<a.ad<<" kazandý.";
				sayginlik-=10;
				parasi-=100;
				saglik-=10;
			}
			else{
				cout<<"Savaþ kazanýldý tebrikler muzaffer komutan";
				sayginlik+=10;
				parasi+=100;
			}
			
		}
 
/*void Humans::eat(){
	cout<<"Oh doyduk"<<endl;
	if(saglik==100)	
	{
	cout<<"Sagliginiz zaten full"<<endl;
	}
	else
	{
		cout<<"Sagliginiz 1 artti"<<endl;
		saglik++;
		cout<<"Yeni saðlýðýnýz "<<saglik;
	}
}
*/

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
