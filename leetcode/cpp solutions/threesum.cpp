#include <iostream>
#include <string>



struct Sales_data{
	std::string bookNo;
	unsigned units_sold =0;
	double revenue=0.0;
	
	std::string isbn(){return bookNo;}
	Sales_data& combine(const Sales_data&);
	double avg_price() const; // i dont understand this

};
// interface sales data interface funtions
Sales_data add(const Sales_data& ,const Sales_data&,);
std::ostream &print(std::ostream&, const Sales_data&);
std::istream &read(std::istream&, Sales_data&);

std:: string isbn() const{ return bookNO}
int main(){
	return 0;
}