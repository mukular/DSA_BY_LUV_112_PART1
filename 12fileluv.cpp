// pointers
#include<bits/stdc++.h>
using namespace std;

void increment(int *x) // pass by reference
{
    (*x)++;
    *x = *x + 9;
}

int main()
{
    int x = 4;
    int *p_x = &x;
    cout<<"Addr x: "<<&x<<endl;
    cout<<"Val p_x: "<<p_x<<endl;
    cout<<"Val *p_x: "<<*p_x<<endl;
    *p_x = 5;
    cout<<"x: "<<x<<endl;
    cout<<"p_x + 1: "<<p_x + 1<<endl;

    int **p_p_x = &p_x;
    cout<<"Addr p_x: "<<&p_x<<endl;
    cout<<"Val p_p_x: "<<p_p_x<<endl;
    cout<<"Val *p_p_x: "<<*p_p_x<<endl;
    cout<<"Val **p_p_x: "<<**p_p_x<<endl;
    **p_p_x = 7;
    cout<<"x: "<<x<<endl;

    int a[10];
    a[0] = 2;
    a[1] = 4;
    cout<<"a: "<<a<<endl;
    cout<<"&a[0]: "<<&a[0]<<endl;
    cout<<"*a: "<<*a<<endl;
    cout<<"a + 1: "<<a + 1<<endl;
    cout<<"&a[1]: "<<&a[1]<<endl;
    cout<<"*(a+1): "<<*(a+1)<<endl;

    int f = 4;
    cout<<f<<endl;
    increment(&f);
    cout<<f<<endl;
}