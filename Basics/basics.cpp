#include<bits/stdc++.h> // used for including all the standard libraries
using namespace std; // used to avoid writing std:: before every standard function

int main(){
    // --This is a simple C++ program that prints "Hello, World!" to the console--
    cout << "Hello, World!" << endl; // Output the string to the console
    //return 0; // Return 0 to indicate successful execution

   //--number input--
    int x=10; // this is for storing integer values
    // long, long long, float, double; also are different data types used 
    cout<<"The number input is:"<< x<<endl;

    //--string input--
    string s;
    cout<<"Enter your name:";
    cin>> s; // any string with one words will be input
    cout<< s<< endl;
    string s1;
    cout<<"Enter your full name:";
    getline(cin,s1); // getline is used to take multiple words as input
    cout<< s1<<endl; // used for taking multiple words inclusively
    return 0;
}
 