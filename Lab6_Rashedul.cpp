/*
MD Rashedul Islam
Lab 6, Control flow
*/

#include<iostream>
using namespace std;

int main(){
    cout<<"\v------------- example 1: bool variable--------------"<<endl;
    int n = -9;
    bool ispositive = n > 0;
    cout<<"Is "<<n<< " positive? \t"<<ispositive<<endl;

    cout<<"\v------------- example 2: if statement--------------"<<endl;
    //check if num1 is greater than num2
    //declare variables
    int n1, n2;
    //collect variables for n1 and n2
    cout<<"Enter n1 and n2: ";
    cin>>n1>>n2;
    //compare is n1>n2 using if statement
    if(n1>n2){
        cout<<n1<<" is greater than "<<n2<<endl;


    }
    cout<<"End of example 2"<<endl;

    cout<<"\v------------- example 3: if-else statement--------------"<<endl;
    //use if-else statement check if a number is positive (including zero) or negative
    if(n1>=0){
        cout<<n1<<"is positive or zero."<<endl;

    }
    else{

        cout<<n1<<" is negative."<<endl;
    }


    cout<<"\v------------- example 4: Multiway statement--------------"<<endl;
    //use if, else if, else statement to check if n1 is grater, less or equal  to n1
    if(n1>n2){
        cout<<n1<<" is greater than "<<n2<<endl;
    }
    else if(n1<n2){
        cout<<n1<<" is less than "<<n2<<endl;
    }

    else{
        cout<<n1<<" is equal to "<<n2<<endl;

    }

    cout<<"\v------------- example 5: Multiway statement : check --------------"<<endl;
    //use multiway statement to check the color of a given color
    //declare the identifier
    
    int wavelength = 0;
    string light ="";
    //collect the  wavelength
    cout<<"what is the emitting wavelength? ";
    cin>>wavelength;
    //multiway statement
    if (wavelength<379 && wavelength>=10){
        light = "ultraviolet";
    }
    else if (wavelength >=380 && wavelength<=520){
        light = "blue";

    }
    else if (wavelength >=521 && wavelength<=590){
        light = "green";

    }
    else if (wavelength >=591 && wavelength<=740){
        light = "red";

    }
    else if (wavelength >=741){

        light = "infrared";
    }
    else{
        light = "undefinied";

    }
    //prompt the result 
    cout<<"wavelength of "<<wavelength<<" emits "<<light<<endl;



    cout<<"\v------------- EXERCISE--------------"<<endl;
    
    
    float weight;
    float shippingCost;

    cout << "Enter the weight of the package in pounds: ";
    cin >> weight;

    // Multiway if-else if statement to determine shipping cost
    if (weight <= 0) {
        shippingCost = 0.0;
    }
    else if (weight <= 2) {
        shippingCost = 5.0;
    }
    else if (weight <= 5) {
        shippingCost = 8.2;
    }
    else if (weight <= 10) {
        shippingCost = 10.25;
    }
    else {
        shippingCost = 12.5;
    }

    //Prompt the result
    cout << "A package of weight " << weight << " costs $" << shippingCost << endl;




    
















    return 0;




}