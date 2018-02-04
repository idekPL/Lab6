#include <iostream>

using namespace std;

double dzielenie (double a,double b){
	if(b==0){
		cout<<"nie dzielimy przez zero!"<<endl;
		return -1;
	}
	return 	a/b;
}
