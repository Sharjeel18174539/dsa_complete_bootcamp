#include<iostream>
using namespace std;

// * 
// * * 
// * * * 
// * * * * 

void p2(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<"* ";                                 
        }
        cout<<endl;
    }
}
// * * * * * 
// * * * * 
// * * * 
// * * 
// * 
void p3(int n){
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}


void p4(int n){
// * 
// * * 
// * * * 
// * * * * 
// * * * * * 
// * * * * 
// * * * 
// * * 
// *      
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void p5(int n){
// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5    
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
}
void p6(int n){
// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5     
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}
void p7(int n){

// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1    
    for(int i=0; i<n; i++){
        for(int j=n; j>i; j--){
            cout<<n-j+1 <<" ";                                 
        }
        cout<<endl;
    }
}

int main(){
    p2(5);
    cout<<endl;
    p3(5);
    cout<<endl;
    p4(5);
    cout<<endl;
    p5(5);
    cout<<endl;
    p6(5);
    cout<<endl;
    p7(5);
}