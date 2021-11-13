#ifndef  GUARD_Sales_data
#define  GUARD_Sales_data
# include <string>
#include "Sales_data.h"
struct Sales_data{
	//constructors added
	friend Sales_data add(const Sales_data& ,const Sales_data&);
	friend std::istream &read(std::istream&, Sales_data&);
	friend std::ostream &print(std::ostream&, const Sales_data&);
public:
	//constructors
	Sales_data()=default;
	Sales_data(const std:: string& s):bookNo(s) { }
	Sales_data(const std:: string& s,unsigned n,double p):
		bookNo(s),units_sold(n),revenue(p*n) { }
	Sales_data(std::istream &);
private:
	std::string bookNo;
	unsigned units_sold =0;
	double revenue=0.0;

public:
	std::string isbn() const {return bookNo;}
	Sales_data& combine(const Sales_data&);
	double avg_price() const;

};

// interface sales data interface funtions
//Functions defined in the class are implicitly inline
Sales_data add(const Sales_data& ,const Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);
std::istream &read(std::istream&, Sales_data&);

double Sales_data::avg_price() const{
	if(units_sold){
		return  revenue/units_sold;
	}
	else
		return 0;

}

Sales_data& combine(const Sales_data& rhs ){
	units_sold+=rhs.units_sold;
	revenue+=rhs.revenue;
	return *this;
}
Sales_data add(const Sales_data& lhs,const Sales_data& rhs){
	Sales_data sum=lhs;//copy data members lhs into sum
	sum.combine(rhs);
	return sum;

}


#endif
