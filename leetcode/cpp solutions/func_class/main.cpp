#include <iostream>
#include <string>
#include "Sales_data.h"




int main(){
	int *a=new int;
	*a=2;
	printf("of lagos");
	std<<endl;
	
	Sales_data total;

	total.units_sold = 65;
	total.revenue =98.9;
	std::cout << total.revenue << '\n';
	return 0;

	// assert()
}
