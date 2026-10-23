#include<iostream>
using namespace std;

int main (){

    // triangle pattern
    // *

    // int n=4;
    
    // for(int row=0; row<n; row++){

    //     for(int col=1; col<=row+1; col++){
    //         cout<<" * ";
    //     }
    //     cout<<endl;
    // }

    // num
    // int n=4;
    // for(int row=0; row<n; row++){
    //     for(int col=0; col<row+1; col++){
    //         cout<<row+1<<" ";
    //     }
    //     cout<<endl;
    // }

    // ch
    // int n=5;    
    // char ch='a';
    //     for(int row=0; row<n; row++){
    //         for(int col=1; col<=row+1; col++){
    //             cout<<ch<<" ";
    //         }
    //         cout<<endl;
    //         ch++;
    //     }

    // different value 
    // num

    // int n=4;
    // for(int row=0; row<n; row++){
    //     for(int col=1; col<=row+1; col++){
    //         cout<<col  ;
    //     }
    //     cout<<endl;
    // }

    // ch
    int n=4;
    for(int row=0; row<n; row++){
        char ch='a';
        for(int col=1; col<=row+1; col++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }

}