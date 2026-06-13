/*
Problem : Check weather the person is Adult(>=18) or not
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int age;
    cout<<"Enter your Age : ";
    cin>>age;
    if (age>=18)
    cout<<"You're an Adult";
    else
    cout<<"You aren't an Adult";

    return 0;
}