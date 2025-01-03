/*
Full Name
Lab2, input and output streaming, string and character variabls
Jan2, 2025
*/
#include<iostream>

using namespace std;

int main(){
    cout<<"\v----------Example 1: cout and endl ------------- "<<endl;
    cout<<"\v This is my first program!"<<endl;
    cout<<"\n Lab 2 \t\t variables"<<endl;

    cout<<"\v----------Example 2: string and character variables ----------"<<endl;
    string username;
    cout<<"Initial username: "<<username<<endl;
    username = "peter pan";
    cout<<"update username = "<<username<<endl;
    cout<<"Enter a username: ";
    cin>>username;
    cout<<"Entered username: "<<username<<endl;
    return 0;

}