#include<iostream>
using namespace std;

int main(){

    // pyramid triangle
    // num

    // int n=4;
    //     for(int row=0; row<n; row++){
        
    //     // space  n-row-1
    //          for(int col=0; col< n-row-1; col++){
    //         cout<<" ";
    //     }

    //     // num 1 row+1
    //         for(int col=1; col<=row+1; col++){
    //         cout<<col;
    //     }

    //     // num 2
    //         for(int col=row; col>0; col--){
    //             cout<<col;
    //         }
    //         cout<<endl;
    //     }


        // ch

    // int n=4;
    // char ch ='a';
    //     for(int row=0; row<n; row++){
    //         // space
    //         for(int col=0; col<n-row-1; col++){
    //             cout<<" ";
    //         }
    //         // ch 1
    //         for(int col=0; col<=row; col++){
    //             cout<<char('a'+col);
    //         }
    //         // ch 2
    //         for(int col=row-1; col>=0; col--){
    //             cout<<char('a'+col);
    //         }
    //         cout<<endl;
    //     }

    // *
        int n=4;
        for(int row=0; row<n; row++){
            // space
            for(int col=1; col<n-row-1; col++){
                cout<<" ";
            }
            // * 1
            for(int col=1; col<=row+1; col++){
                cout<<"*";
            }
            // * 2
            for(int col=row; col>0; col--){
                cout<<"*";
            }
            cout<<endl;
        }
}