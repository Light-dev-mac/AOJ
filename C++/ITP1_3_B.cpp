#include<iostream>
using namespace std;
int main(){
    int i=1;
    int x;
    while(true){
        cin>>x;
        if(x==0) break;
        else{
            cout << "Case "<<i<<": "<<x<<endl;
            i++;
        }

    }
}