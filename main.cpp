#include <iostream>
#include <cstdlib>
#include "dodawanie.cpp"
#include "odejmowanie.cpp"
#include "mnozenie.cpp"
#include "dzielenie.cpp"
#include <math.h>

using namespace std;
double a, b;
int wybor;

int main()
{
cout<<"LAborka 6 - kalkulator"<<endl;
cout<<"Wybierz opcjê: 1 - dodawanie; 2 - odejmowanie; 3 - mno¿enie; 4 - dzielenie"<<endl;
cin>>wybor;

back:
	
cout<<"Podaj a: "; 	
cin>>a;
cout<<endl<<"Podaj b: ";	
cin>>b;

switch(wybor)
	{
	case 1:
		{
			
		}
	
	case 2:
		{
			
		}	
	
	case 3:
		{
			
		}
		
	case 4:
		{
			
		}	
	
	case default:
		{
		cout<<"Z³y wybór opcji!!!"<<endl;
		cout<<"Chcesz powtórzyæ program? 1 - tak; 2 - nie"<<endl;
		cin>>d;
		if(d==1)
			{
			go to back;	
			}	
		}		
	}
cout<<"Koniec programu";	
	
system("PAUSE");
return 0;	
}
