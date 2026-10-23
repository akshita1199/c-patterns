#include<iostream>
using namespace std;

int main(){
    // num
    // int n=4;
    // int num=1;
    // for(int row=0; row<n; row++){
    //     for(int col=row+1; col>0; col--){
    //         cout<<num<<" ";
    //         num++;
    //     }
    //     cout<<endl;   
    // }

    // ch
    int n=4; 
    char ch='a';
    for(int row=0; row<=n; row++){
        for(int col=1; col<=row; col++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    

}