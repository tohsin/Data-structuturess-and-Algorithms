#include <iostream>
#include <vector>

using namespace std;

void solver(vector<int> n){
    
}
int main(){
    int t;
    while(t--){
        int n;
        cin>>n;
        vector<int> seqn;
        for(int i=0;i<n;i++){
            int val;
            cin>>val;
            seqn.push_back(val);
        }
        solver(seqn);
    }

}
