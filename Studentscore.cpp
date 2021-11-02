// A program to output a student name and their grade.
#include <iostream>
using namespace std;

int main()
{
    string sName;
    int score;
    cout<< "Please enter Student name:\n";
    getline(cin, sName);
    cout<<"Enter Student score:\n";
    cin>>score;
     if (score>=70){
        cout<< sName << "A";
    }
    else if (score>=60 && score<=69){
        cout<< sName << "B";
    }
    else if (score>=50 && score<=59){
        cout<< sName << "C";
    }
    else if (score>=40 && score<=49){
        cout<< sName << "D";
    }
    else if (score<40){
        cout<< sName<< "F";
    }
    return 0;
    
}
