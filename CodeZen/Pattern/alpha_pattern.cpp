/*
A
BB
CCC

*/


#include<iostream>
using namespace std;


int main(){
    
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
     int n ;
     cin>>n;
     
     for(int i = 0 ; i < n ; i ++)
     {
         for(int j = 0 ; j < n ; j ++)
         {
            
            if(i>=j)
            cout<<char(65+i);
         }
         cout<<"\n";
     }
    
}
