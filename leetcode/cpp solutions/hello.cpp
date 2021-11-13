#include <iostream>
#include <string>
using namespace std;

int main(){
	cout<<"whats your name: ";
	vector<double> homework;
	typedef vector<double>::size_type vec_sz; 
	vec_sz size = homework.size();

	//declare here
	string name;
	cin>>name; //input

	cout <<"hello "<<name<< '!'<<endl;
	return 0;
}