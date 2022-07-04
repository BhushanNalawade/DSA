#include<iostream>
using namespace std;

int first(int arr[], int i,int n, int key)
{
    if(i==n)
    {
        return -1;
    }
    if(arr[i]==key)
    {
        return i;
    }
    return first(arr,i+1,n,key);
}

int last(int arr[], int i, int n, int key)
{
    if(i==n)
    {
        return -1;
    }
    
    int restarray =last(arr,i+1,n,key);
    if(restarray!=-1){
        return restarray;
    }
    if(arr[i]==key)
    {
        return i;
    }
    return -1;
}
int main()
{
    int arr[]={1,10,2,5,9,2,4,6,10};
    int n;
    int key;

    cout<<first(arr,0,9,10)<<endl;
    cout<<last(arr,0,9,10);
    return 0;
}