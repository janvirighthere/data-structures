#include<iostream>
#include<stdio.h>

using namespace std;

int main() {
    int A[5];
    int B[10]={1, 2, 3, 4, 4, 7, 8, 9, 10};
    for (int i = 0; i < 10; i++)
    {
        cout<<B[i]<<endl;
    }
    
    for (int x:A)
    {
        cout<<x<<endl;
    }
    return 0;
}