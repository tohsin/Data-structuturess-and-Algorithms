#include <iostream>
#include <ios>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <iosfwd>
#include "Student_info.hpp"
#include "median.h"
#include "grade.hpp"
using std::cin;                 using std::setprecision;
using std::string;              using std::streamsize;
using std::cout;                using std::domain_error;
using std::endl;                using std::istream;
using std::vector;              using std::sort;
using std::max;


//&is called refrence to an object and assigns a name to that object
// vector<double> homework;
// vector<double>& hw =homework;
//const means read only








int main(){
    vector<Student_info> students;
    Student_info record;
    string::size_type maxlen=0;
    cout<<"hey boo"<<endl;
    while (read(cin,record)){
        maxlen=max(maxlen,record.name.size());
        students.push_back(record);
    }
    sort(students.begin(),students.end(),compare);
    for(vector<Student_info>::size_type i=0;i!=students.size();++i){
        cout<<students[i].name
                <<string(maxlen+1-1 - students[i].name.size(), ' ');
    
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
}
    // cout<<"Please enter your name";
    // string name;
    // cin>>name;
    // cout <<"Hello" <<name<<"!"<<endl;
    //
    // cout << "Please enter your midterm and final exam grades: ";
    // double midterm ,final;
    // cin>>midterm>>final;
    // cout << "Enter all your homework grades, "
    //         "followed by end-of-file: ";
    // //declare container for homework
    // vector<double> homework;
    //
    // // a variable into which to read
    // read_hw(cin,homework);
    // try {
    //     double final_grade=grade(midterm,final,homework);
    //     streamsize prec=cout.precision();
    //     cout << "Your final grade is " << setprecision(3)
    //     << final_grade << setprecision(prec) << endl; }
    // catch (domain_error) {
    //         cout << endl << "You must enter your grades. "
    //          "Please try again." << endl;
    //          return 1;
    //      }
    //      return 0;
    //
    // }

//copies the entire argument vector
