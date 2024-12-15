// print like this the pattern.
// ******
// ******
// ******

#include<iostream>
using namespace std;
int main(){
    for(int i=0; i<4; i++){
        cout<<"* ";
        for(int i=0; i<3; i++){
            cout<<"* ";
        }
        cout<<endl;
    }
}