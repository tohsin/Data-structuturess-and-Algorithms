#include <iostream>

using namespace std;
string solver(int w){
    if ((w%2)==0){
        if(w==2)
            return "NO";
        else return "YES";

    }else  return "NO";
}
int main(){
    int w;
    cin>>w;
    string answer=solver(w);
    cout<<answer;
   

}
