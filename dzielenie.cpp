double dzielenie (double a,double b){
	if(b==0){
		std::cout<<"nie dzielimy przez zero!"<<endl;
		return -1;
	}
	else return a/b;
}

/*
lista zwracanych wartosci

-1 zwracana jako wynik dzialania albo gdzy argument b jest rowny 0
*/
