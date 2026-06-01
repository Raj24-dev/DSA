#include<iostream>
using namespace std;
int main (){
int marks;
    cin >> marks;
    if (marks < 0 || marks > 100) {
        cout << "Error: Marks must be between 0 and 100.\n";
    }
    else if(marks>=90){
        cout << "Grade A";
    }
    else if(marks>=70){
        cout << "Grade B";
    }
    else if(marks>=50){
        cout<<"Grade C";
    }
    else if(marks>=35){
        cout<<"Grade D";
    }
    else{
        cout << "Fail";
    }
    return 0;

}