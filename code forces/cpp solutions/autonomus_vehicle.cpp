#include <iostream>
#include <vector>

using namespace std;

struct Gnode{
    vector<int> line;
    vector<vector<int>> children;
};
bool ishorizontal(vector<int> line){

    if (line[1]==line[4]){
        return true;
    }else
    {
        return false;
    }
    
}

void solver(vector<vector<int>>& lines,int t,int& posx,int& posy){
    int count=0;
    posx=lines[0][0];
    posy=lines[0][1];
    vector<
    while (true){

        if (count==t){

            break;
        }else{
             ++count;
        }
       
    }
}
int main(){
    int n,t;
    cin>>n>>t;
    vector<vector<int>> lines;
    while(n--){
        vector<int> lineseg;
        int val;
        cin>>val;
        lineseg.push_back(val);
    }
   
    auto n_lines=lines.size();
    vector<Gnode> graph;
    for(int i=0;i<n;++i){
        Gnode *gnode=new Gnode;
        for(int j=0;j<n;++j){
            if (j!=i){
                gnode->line=lines[0]
            }
        }
    }

}
