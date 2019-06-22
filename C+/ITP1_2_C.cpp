#include<iostream>
#include<vector>
#include<algorithm>
#define NMAX 3
int main(){
    using namespace std;
    vector<int> v;
    int tmp;
    for(int i=0;i<NMAX;i++){
        cin>>tmp;
        v.push_back(tmp);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size()-1;i++){
        cout<<v[i]<<" ";
    }
    cout<<v[v.size()-1]<<endl;
    

}