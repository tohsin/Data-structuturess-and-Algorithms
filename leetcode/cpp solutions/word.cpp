#include <iostream>
#include <ios>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
#include "median.h"
using std::cin;
using std::setprecision;
using std::string;
using std::streamsize;
using std::cout;
using std::endl;
using std::vector;
using std::sort;



struct Student_info {
	string name;
	double midterm, final;
	vector<double> homework;
}; // note the semicolon it's required
double median(vector<double>)
int main(){
	vector<Student_info> students;
	Student_info record;
	string::size_type maxlen=0

	while (read(cin,record)){
		maxlen=max(maxlen,record.name.size())
		students.push_back(record)
	}
	sort(students.begin,students.end,compare);
	for(vector<Student_info>::size_type i=0;i!=students.size;++i){
		count<<students[i].name
		<<string(maxlen+1-1 - students[i].name.size(), ' ');
	}
	try {
		double final_grade = grade(students[i]);
		streamsize prec = cout.precision();
		cout << setprecision(3) << final_grade
				<< setprecision(prec);
		} catch (domain_error e) {
			cout << e.what();
		}
		cout << endl;
	 }
	return 0;
	// cout<<"Please enter your name";
	// string name;
	// cin>>name;
	// cout <<"Hello" <<name<<"!"<<endl;
	//
	// cout << "Please enter your midterm and final exam grades: ";
	// double midterm ,final;
	// cin>>midterm>>final;
	// cout << "Enter all your homework grades, "
	// 		"followed by end-of-file: ";
	// //declare container for homework
	// vector<double> homework;
	//
	// // a variable into which to read
	// read_hw(cin,homework);
	// try {
	// 	double final_grade=grade(midterm,final,homework);
	// 	streamsize prec=cout.precision();
	// 	cout << "Your final grade is " << setprecision(3)
	// 	<< final_grade << setprecision(prec) << endl; }
	// catch (domain_error) {
	// 		cout << endl << "You must enter your grades. "
	// 		 "Please try again." << endl;
	// 		 return 1;
	// 	 }
	// 	 return 0;
	//
	// }
}
//copies the entire argument vector
double median(vector<double> vec){
	typedef vector<double>::size_type vec_siz;

	vec_siz size=vec.size();
	if (size==0){
		cout <<endl<<"you must enter your grades"
			"Please try aagain"<<endl;
		return 1
	}
	//sort the grades
	//Rearranges the elements defined by the range [b, e) into nondecreasing order
	sort(vec.begin(),vec.end());
	vec_siz mid=size/2;
	double median;
	return size%2==0?(vec[mid]+vec[mid-1])/2:vec[mid];

}
//&is called refrence to an object and assigns a name to that object
// vector<double> homework;
// vector<double>& hw =homework;
//const means read only
double grade(double median,double final,const vector<double>& hw){
	if (hw.size()==0){
		throw domain_error("student has done no homework")
	}
	return grade(midterm,final,median(hw))
}

istream& read_hw(istream& in,vector<double>& hw){
	if(in) {
		hw.clear();

		double x
		while (in>>x){
			hw.push_back(x);

			in.clear();
		}

	}
	return in;
}


istream& read(istream& is, Student_info& s) {
// read and store the student's name and midterm and final exam grades
	is >> s.name >> s.midterm >> s.final;
	read_hw(is, s.homework); // read and store all the student's homework grades
	return is;
 }

double grade(const Student_info& s){
	return grade(s.midterm, s.final,s.homework)
}

bool compare(const Student_info& x, const Student_info& y){
	return x.name<y.name;
}
