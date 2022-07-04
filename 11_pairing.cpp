//question :
// find the number of ways in which n friends can remain single or can be
// paired up.

// example :
/*
 if there are 4 friends like 1 2 3 4
 then ,  1 2 
         1 3
         1 4
         2 3
         2 4
         3 4
         1
         2 
         3
         4
         these above are the ways that they can paired up or stay single.
        its ans is 10.
  */
#include<iostream>
using namespace std;

int pairing(int n){
    if(n==0 || n==1 || n==2){
        return n;
    }
    return pairing(n-1)+pairing(n-2)*(n-1);
}

int main()
{
    cout<<pairing(4);
    return 0;
}