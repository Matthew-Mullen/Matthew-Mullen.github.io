#include <iostream>
#include <vector>

using namespace std;
int main(){
    long m, n;
    cin>>m;
    cin>>n;
    vector<vector<long>> matrix;
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            long k;
            cin>>k;
            matrix[i].push_back(k);
        }
    }
    long m2,n2;
    vector<vector<long>> matrix2;
    for(int i=0;i<m2;++i){
        for(int j=0;j<n2;++j){
            long k;
            cin>>k;
            matrix2[i].push_back(k);
        }
    }
    
}