#include<iostream>
using namespace std;

int main(){

    // square 
    // number

    // int n=3;
    // int num=1;
    // for(int row=1; row<=n; row++){
        // for(int col=1; col<=n; col++){
            // cout<<num <<"  ";
            // num++;
        // }
        // cout<<endl;
    // }
     
    // ch
    // int n=3;
    // char ch='a';
    // for(int row=1; row<=n; row++){
        // for(int col=1; col<=n; col++){
            // cout<<" "<<ch;
            // ch++;
        // }
        // cout<<endl;
        // }

        // while loop
        int n=3; 
        // char ch='a';
        int row=1;
        while(row<=n){
            int col=1;
            char ch='a';
            while(col<=n){
                cout<<ch<<"  ";
                col++; 
                ch++;  
            //    ch=ch+1;        
             }
             cout<<endl;
             row++;
        }

    

}