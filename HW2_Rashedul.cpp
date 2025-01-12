/*
MD Rashedul Islam
Home work 2, Loops mechanism
*/

#include<iostream>
using namespace std;

int main(){
    cout<<"\n-------------------Question 1---------------"<<endl;
    int num;

    // Do-while loop to prompt the user to enter a number >= 10
    do {
        cout << "Enter a number greater than or equal to 10: ";
        cin >> num;

        if (num < 10) {
            cout << num << " is invalid. ";
        }

    } while (num < 10); 

    cout << num << " is a valid number!" << endl;


    cout<<"\n-------------------Question 2---------------"<<endl;
    int num1, num2;

    // Prompt user to enter two numbers
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;

    // Determine the minimum and maximum numbers
    int start = (num1 < num2) ? num1 : num2;
    int end = (num1 > num2) ? num1 : num2;

    // Prompt output 
    cout << "RESULT = ";
    while (start <= end) {
        cout << start << " ";
        start++; 
    }
    cout << endl;





    cout<<"\n-------------------Question 3---------------"<<endl;
    //declare dimension of 2D grid
    const int DIMENSION =8;
    for(int row = 1; row<= DIMENSION+1; row++){
        for(int col = 1; col<= DIMENSION+1; col++){
                if((col==3) && ((row<=4 && row>=5))||(col==4) && ((row<=3 && row>=6))||(col==5) && ((row<=5 && row>=7))||(col=6) && ((row<=3 && row>=6))||((row >=3 && row <=8))||(col==7) && ((row<=4 && row>=5))){
                    cout<<" % ";
                }
                else
                    cout<<" . ";
        }
        cout<<endl;
    
    }



 
    return 0;




}
