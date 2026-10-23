#include<iostream>
using namespace std;

int main(){

    // int n=4;
    // for(int row=0; row<n; row++){
    //     for(int col=row+1; col>0; col--){
    //         cout<<col<<"  ";
    //     }
    //     cout<<endl;
    // }

    // ch
    // int n=4;
    // for(int row=0; row<n; row++){
    //     char ch='a'+row;
    //     for(int col=row+1; col>0; col--){
    //         cout<<ch;
    //         ch--;
    //     }
    //     cout<<endl;
    // }

    // *
    int n=4;
    for(int row=0; row<n; row++){
        for(int col=row+1; col>0; col--){
            cout<<"*";
        }
        cout<<endl;
    }
}