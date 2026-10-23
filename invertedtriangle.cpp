#include<iostream>
using namespace std;

int main(){
    
    //inverted reverse triangle  

    // num
    // int n=4;
    // int num=1;
    //     for(int row=0; row<n; row++){
    //         // space
    //         for(int col=0; col<row; col++){
    //             cout<<" ";
    //         }
    //         // print num
    //         for(int col=0; col<n-row; col++){
    //             cout<<row+1;
    //         }
    //         cout<<endl;
    //     }


        // ch

        // int n=4;
        // char ch='a';
        // for(int row=0; row<n; row++){
        //     // space
        //     for(int col=0; col<row; col++){
        //         cout<<" ";
        //     }
        //     // ch print
        //     for(int col=0; col<n-row; col++){
        //         cout<<ch;
        //     }
        //     cout<<endl;
        //     ch++;
        // }  

        // *
        int n=4;
        
        for(int row=0; row<n; row++){

            // space
            for(int col=0; col<row; col++){
                cout<<" ";
            }
            for(int col=0; col<n-row; col++){
                cout<<"*";
            }
            cout<<endl;
        }


    
}