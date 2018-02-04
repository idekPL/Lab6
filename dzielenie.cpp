#include <iostream>

double dzielenie (double a,double b){
	if(b==0){
		std::cout<<"nie dzielimy przez zero!"<<endl;
		return -1;
	}
	return 	a/b;
}
