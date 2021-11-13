#include <iostream>
#include <vector>
using namespace std;

void solver(vector<int>& values,vector<int> &solution){
   
    for(int i=0;i<values.size();++i){
        if((i+1)==values[i]){
            solution.push_back(values[i]);
            continue;
        }
        vector<int> checker(0);
        int pi=i;
        checker[pi]=1;
        while(true){
            if (checker[pi]==1){
                solution.push_back(values[i]);
                continue;
            }else{
                pi=values[pi];
                checker[pi]=1;
            }
        }
    }
    return solution;
}
int main(){
    cout<<"Hi";
    vector<int> valuesx={2,3,2};
    vector<int> soln;
    solver(valuesx,soln);
    for(auto v:soln){
        cout<<v;
        cout<<"\n";
    }
}