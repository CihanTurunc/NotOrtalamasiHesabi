/*
Deðerli takipçilerim merhaba
Bugün not ortalamasý hesaplayacaðýz.
2 yazýlý ve 2 sözlü notunun ortalamasýný bulup, dersten geçti veya kaldý yazdýracaðýz.

Hadi baþlayalým.

Derslerimi canlý olarak dinlemek ve yazýlým ekibimde yer almak için => ANTAKYA TEKNOKENT KOLEJÝ'ne bekliyorum..
*/

#include<iostream>
#include<locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");
	int not1, not2, not3, not4;
	float ort; // ortalama ondalýklý sayý olacaðýndan float kullandým
	cout << "1.notunuzu giriniz: ";
	cin >> not1;  // ilk notu istedik ve not 1 e atadýk.
	cout << "2.notunuzu giriniz: ";
	cin >> not2;
	cout << "3.notunuzu giriniz: ";
	cin >> not3;
	cout << "4.notunuzu giriniz: ";
	cin >> not4;

	//Hýz kazanmak için copy-paste yaptým.
	// Þu aþamada 4 notu da aldýk hadi ortalama hesabý yapalým.
	// Burada biziz basit bir matematik bekliyor.

	ort = (not1 + not2 + not3 + not4) / 4;

	if (ort>=50)
	{
		cout << "Tebrikler,dersi geçtiniz." << endl;
	}
	else
	{
		cout << "Malesef,dersten kaldýnýz." << endl;
	}
	cout << "Not ortalamanýz: " << ort << endl;
}


// Kodlar bitti. hadi F5 ile çalýþtýralým.
// Eksikler = Notlarý yana yazmalý alta deðil.
// En son ortalamayý söylemeli. Hadi düzeltelim.
// endl bir alt satýra geç demek. Sildik.
// Þimdi en alta not ortalamasýný ekleyelim.

// Program 10 numara çalýþýyor demek isterdim ama bence bir sorun var..

// Bu ortalamayý 40 çalýþsak yapamayýz. Kodlar doðru ama 100 den büyük sayý eklenemesine izi vermeyelim.

// EVET BU KISIM SÝZÝN ÖDEVÝNÝZ.. HADÝ BAKALIM.. BÝTÝREN YORUMLARA YAZSIN KODLARI..

/*
KANALIMA ABONE OLMAYI UNUTMAYIN.
AYRICA AÇIKLAMADA LÝNKÝNÝ EKLEYECEÐÝM "ANTAKYA TEKNOKENT KOLEJÝ" YOUTUBE KANALINA DA ÜYE OLUN LÜTFEN. GELECEÐÝN YAZILIMCILARI ORDA YETÝÞÝYOR..

ÝYÝ KODLAMALAR.. SÝZLERÝ SEVÝYORUM <3
*/