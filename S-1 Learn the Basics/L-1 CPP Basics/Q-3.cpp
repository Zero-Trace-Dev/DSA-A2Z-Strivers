/*
A school has following rules for grading system :

1) Below 25 - F
2) 25 to 44 - E
3) 45 to 49 - D
4) 50 to 59 - C
5) 60 to 79 - B
7) 80 to 100 - A

Ask user to enter marks and print the corresponding grade.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int marks;
    cout<<"Enter your marks : ";
    cin>>marks;

    if (marks >=80 && marks<= 100)
    cout<<"You scored A";
    else if(marks>=60 && marks<80)
    cout<<"You scored B";
     else if(marks>=50 && marks<60)
    cout<<"You scored C";
    else if(marks>=45 && marks<50)
    cout<<"You scored D";
    else if(marks>=25 && marks<45)
    cout<<"You scored E";
    else if(marks<25 && marks>=0)
    cout<<"You Failed :( ";
    else 
    cout<<"Invalid Input";
    
    return 0;
}