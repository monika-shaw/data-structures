//
// Created by shawm on 26-01-2023.
//
#include <iostream>

int linearSearch(int arr[], int N, int x)
{
   for(int i = 0; i < N; i++)
   {
       if(arr[i] == x)
           return i;
   }
    return -1;
}
int main()
{
    int arr[] = {10,3,22,56,87,3};
    int x = 56;
    int N = sizeof(arr)/sizeof(arr[0]);
    int result = linearSearch(arr,N,x);
    if(result == -1)
        std::cout<<"Element not found"<<std::endl;
    else
        std::cout<<result<<std::endl;
}