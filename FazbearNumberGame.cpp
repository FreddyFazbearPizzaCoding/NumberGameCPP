#include<iostream>
#include<windows.h>
#include<cstdlib>
#include<ctime>
#include "ConsoleColor.h"

//Coding by Freddy Fazbear Pizza Coding

using namespace std;

void function(int tahmin,int random){
	if(random==tahmin){
    	cout<<green<<"[+]Harika,bildin !"<<endl;
	}else if(random!=tahmin && tahmin<11 && tahmin>-1){
		cout<<red<<"[-]Bilemedin sayı "<<green<<random<<endl;
	}
}
int main ()
{
    setlocale(LC_ALL, "Turkish");
    

    
    srand(time(NULL));
    string ad;
    int tahmin,random;
    cout<<yellow<<"               Freddy_Fazbear_Pizza_Coding"<<endl;
    Sleep(1500);
    cout<<green<<"[+]Adın nedir?(LÜTFEN ADINIZDA BOŞLUK KULLANMAYINIZ !) :"<<white;
    cin>>ad;
    system("cls");
    Sleep(1200);
    cout<<green<<"[+]Merhaba "<<ad<<endl;
    Sleep(1000);
    random=rand()%10;
    cout<<green<<"[+]1 ile 10 arası rastgele Sayı tuttum"<<endl;
    Sleep(1500);
    system("cls");
    cout<<green<<"[+]Sence hangi sayıyı tuttum :"<<white;
    cin>>tahmin;
    system("cls");
    
    if(random==tahmin){
    	cout<<green<<"[+]Harika,bildin !"<<endl;
	}else if(random!=tahmin && tahmin<11 && tahmin>-1){
		cout<<red<<"[-]Bilemedin sayı "<<green<<random<<endl;
	}
	
	while(tahmin<0 || tahmin>10){
		cout<<yellow<<"[-]Hop! Yavaş dostum abartma başka birşeyler dene..."<<endl;
		cout<<yellow<<":: ";
		cin>>tahmin;
		system("cls");
		function(tahmin,random);
	}
    
	return 0;
}
