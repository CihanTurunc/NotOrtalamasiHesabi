/*
De�erli takip�ilerim merhaba
Bug�n not ortalamas� hesaplayaca��z.
2 yaz�l� ve 2 s�zl� notunun ortalamas�n� bulup, dersten ge�ti veya kald� yazd�raca��z.

Hadi ba�layal�m.

Derslerimi canl� olarak dinlemek ve yaz�l�m ekibimde yer almak i�in => ANTAKYA TEKNOKENT KOLEJ�'ne bekliyorum..
*/

#include<iostream>
#include<locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");
	int not1, not2, not3, not4;
	float ort; // ortalama ondal�kl� say� olaca��ndan float kulland�m
	cout << "1.notunuzu giriniz: ";
	cin >> not1;  // ilk notu istedik ve not 1 e atad�k.
	cout << "2.notunuzu giriniz: ";
	cin >> not2;
	cout << "3.notunuzu giriniz: ";
	cin >> not3;
	cout << "4.notunuzu giriniz: ";
	cin >> not4;

	//H�z kazanmak i�in copy-paste yapt�m.
	// �u a�amada 4 notu da ald�k hadi ortalama hesab� yapal�m.
	// Burada biziz basit bir matematik bekliyor.

	ort = (not1 + not2 + not3 + not4) / 4;

	if (ort>=50)
	{
		cout << "Tebrikler,dersi ge�tiniz." << endl;
	}
	else
	{
		cout << "Malesef,dersten kald�n�z." << endl;
	}
	cout << "Not ortalaman�z: " << ort << endl;
}


// Kodlar bitti. hadi F5 ile �al��t�ral�m.
// Eksikler = Notlar� yana yazmal� alta de�il.
// En son ortalamay� s�ylemeli. Hadi d�zeltelim.
// endl bir alt sat�ra ge� demek. Sildik.
// �imdi en alta not ortalamas�n� ekleyelim.

// Program 10 numara �al���yor demek isterdim ama bence bir sorun var..

// Bu ortalamay� 40 �al��sak yapamay�z. Kodlar do�ru ama 100 den b�y�k say� eklenemesine izi vermeyelim.

// EVET BU KISIM S�Z�N �DEV�N�Z.. HAD� BAKALIM.. B�T�REN YORUMLARA YAZSIN KODLARI..

/*
KANALIMA ABONE OLMAYI UNUTMAYIN.
AYRICA A�IKLAMADA L�NK�N� EKLEYECE��M "ANTAKYA TEKNOKENT KOLEJ�" YOUTUBE KANALINA DA �YE OLUN L�TFEN. GELECE��N YAZILIMCILARI ORDA YET���YOR..

�Y� KODLAMALAR.. S�ZLER� SEV�YORUM <3
*/