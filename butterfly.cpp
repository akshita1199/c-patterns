#include<iostream>
using namespace std;

int main(){

    int n=4;

    // first * part
    for(int row=0; row<n; row++){
        for(int col=0; col<row+1; col++){
            cout<<"*";
        }
        // /space 
        for(int col=0; col<2*(n-row); col++){
            cout<<" ";
        }
        // * 
        for(int col=0; col<row+1; col++){
            cout<<"*";
        }
        cout<<endl;
        }

        // 2nd part
        for(int row=n-1; row>=0; row--){
            for(int col=0; col<row+1; col++){
                cout<<"*";
            }
            // space
            for(int col=0; col<2*(n-row); col++){
                cout<<" ";
            }
            // *
            for(int col=0; col<row+1; col++){
                cout<<"*";
            }
            cout<<endl;
        }
        
    }
