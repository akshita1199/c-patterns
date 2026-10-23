#include<iostream>
using namespace std;

int main(){

    // top 
    int n=4;
    for(int row=0; row<n; row++){
        // space
        for(int col=0; col<n-row-1; col++){
            cout<<" ";
        }
        cout<<"*";

        if(row!=0){
            for(int col=0; col<2*row-1; col++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }

        // bottom
        
        for(int row=0; row<n-1; row++){
            // space
            for(int col=0; col<row+1; col++){
                cout<<" ";
            }
            cout<<"*";
            if(row!=n-2){
                // space
                for(int col=0; col<2*(n-row)-5; col++){
                    cout<<" ";
                }
                    cout<<"*";
            }
            cout<<endl;
        }
}