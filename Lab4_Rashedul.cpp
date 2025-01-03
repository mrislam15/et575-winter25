/*
MD Rashedul Islam
Jan 3, 2025
string and string methods
*/
#include<iostream>
#include<string>


using namespace std;


int main(){
    cout<<"\v------------- Example 1: string indexing ------------"<<endl;
    string msg = "Think before you speak!";
    // extracting the character at index 13
    int charindex13 = msg[13];
    cout<<" The character of index 13 = "<<charindex13<<endl;
    cout<<" The character at index = "<<msg.at(3)<<endl;
    

    cout<<"\v------------- Example 2: length of string ------------"<<endl;
    int length_msg = msg.length();
    cout<<"msg has "<<length_msg<<" characters ."<<endl;


    cout<<"\v------------- Example 3: concatenate strings ------------"<<endl;
    string author ="Fran Labowitz";
    //concatenate strings using the + operator
    string conc_msg = msg + " --  by " + author;
    cout<<conc_msg<<endl;

    cout<<"\v------------- Example 4: repeating strings ------------"<<endl;
    cout<<msg+msg+msg<<endl;


    cout<<"\v------------- Example 5: subtracting method ------------"<<endl;
    // subtract 3 characters from index 7
    cout<<" 3 characters from index 7 = " <<author.substr(7,3)<<endl;


    cout<<"\v------------- Example 6: insert method ------------"<<endl;
    // insert the word "Read befor you think! " into the conc_msg from index 24
    string new_msg = conc_msg.insert(24, "Read befor you think!");
    cout<<new_msg<<endl;


    cout<<"\v------------- Example 7: append method ------------"<<endl;
    // appand method is used to add/appand characters to the end of a string
    // appand the word "@ 1970s" to the end of the new_msg
    string new_msg_appand = new_msg.append(" @ 1970s");
    cout<<new_msg_appand<<endl;


    cout<<"\v------------- Example 8: replace method ------------"<<endl;
    // replace method syntex --> stringname.replace(start index, number of character to be replaced, "replace string")
    // replace the "Labowitz" from string author with the character "LW."
    string new_author_name = author.replace(5,8,"LW");
    cout<<new_author_name<<endl;

    cout<<"\v------------- Example 9: erase method ------------"<<endl;
    //stringname.erase(index from where to erase, number of character to be erased)
    //erase the word 'you' from msg
    string message = msg.erase(13, 3);
    cout<<message<<endl;

    cout<<"\v------------- Example 10: find method ------------"<<endl;
    // find method returns the first found index of the string/character that we are looking for.
    // find the first you character in string 'new_msg_appand'
    int find_index = new_msg_appand.find("you");
    cout<<"The index of you is  = "<<find_index<<endl;

    //use method erase to remove the you character form new_msg_appand string
    new_msg_appand.erase(find_index,3);
    cout<<new_msg_appand<<endl;


    cout<<"\v------------- Lab-4 Exercise ------------"<<endl;
    // Ask the user to type a word and save it in 'new_word'
    string new_word;
    cout << "Enter a word: ";
    cin >> new_word;

    // Print the 4th character of the word
    cout << "The 4th character of the word is: " << new_word[3] << endl;

    // Find and print the length of the word
    cout << "The length of the word is: " << new_word.length() << endl;

    // Replace three characters from the second character with "-- $ --"
    new_word.replace(1, 3, "-- $ --");
    cout << "The word after replacement: " << new_word << endl;

    // Remove two characters from the end of the message
    new_word.erase(new_word.length() - 2, 2);
    cout << "The word after removing the last two characters: " << new_word << endl;

    



    return 0;
}