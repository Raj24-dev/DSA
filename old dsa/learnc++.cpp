// #include<iostream>
#include<bits/stdc++.h>
using namespace std; 
// int main(){
    // std::cout <<"Hey striver!"<<"\n";
    // std::cout <<"Hey striver!"<< std::endl <<"Hey raj!"<<std::endl;
    // int x,y;
    // cin >> x>>y;
    // cout<<"The value of x: "<<x  << "and y: " <<y;
    // int x = 5;
    // long z = 15;
     //cin >> x;
    // long long y = 150000000000;
    //string and getline
    // string s1;
    // string s2;
    // cin>> s1>>s2;
    // cout <<s1<<" "<<s2;
    // string str; 
    // getline(cin, str);
    // cout<<str;
    //char
    //write a program that takes an input of age
    // and prints if you are adult or not
    //>= 18, yes
    //<18, no

    // int age;
    // cin >>age;
    // if(age>=18){
    //   cout<<"You are an adult";
    // }
    // else if(age<18){
    //   cout<<"You are not an adult";
    // }
    /*
    a school has following rules for grading system
    a. Below 25 - F
    b. 25-44 - E
    c. 45-49 - D
    d. 50-59 - c
    e. 60 - 79 - B
    f80-100 - A
    */
//    int marks;
//    cin>> marks;
//    if(marks<25){
//     cout<<"F";
//    }
//    else if(marks>=25 && marks<= 44){
//     cout << "E";
//    }
//    else if(marks>=45 && marks<= 49){
//     cout << "D";
//    }
//    else if(marks>=50 && marks<= 59){
//     cout << "C";
//    }
//    else if(marks>=60 && marks<= 79){
//     cout << "B";
//    }
//    else if(marks>=80 && marks<= 100){
//     cout << "A";
//    }
//trimed code
//    if(marks<25){
//     cout<<"F";
//    }
//    else if( marks<= 44){
//     cout << "E";
//    }
//    else if( marks<= 49){
//     cout << "D";
//    }
//    else if(marks<= 59){
//     cout << "C";
//    }
//    else if(marks<= 79){
//     cout << "B";
//    }
//    else if(marks<= 100){
//     cout << "A";
//    }
//NESTED loops
/*
Take the age from the user and then decide accordingly
1. If age <18,print-> "eligible not for job"
2. iif age>= 18,print - > "eligible for job"
3. If age >= 55 and age <= 57 , ptint -> "eligible for job, but retirement  soon"
4. if age>57
print->"retirement time"*/ 
// int age;
// cin >>age;
// if(age<18){
//     cout<< "not elligible for job";
// }
// else if(age<=54){
//     cout << "eligible for job";
// }
// else if(age<=57){
// cout << "eligible for job, but retirement soon.";
// }
// else{
//     cout << "retirement time";
// }
//nested loop use
// int age;
// cin >>age;
// if(age<18){
//     cout<< "not elligible for job";
// }
// else if(age<=57){
// cout << "eligible for job";
//    if(age<=57){
//     cout <<", but retirement soon";
//    }
// }
// else{
//     cout << "retirement time";
// }
// switch case

/*
Take the day no and print the corresponding day
for 1 print monday
for 2 print Tuesday and so on for 7 print sunday.
*/
// int day;
// cin>> day;
// switch (day)
// {
// case 1:
//    cout<<"Monday";
//     break;
// case 2:
//     cout<<"Tuesday";
//     break;
// case 3:
//     cout<<"Wednesday";
//     break;;
// case 4:
//     cout<<"Thrusday";
//     break;
// case 5:
//     cout<<"Friday";
//     break;
// case 6:
//     cout<<"Saturday";
//     break;
// case 7:
//     cout<<"Sunday";
 
//     break;
// default:
// cout <<"Invalid";
// }
// cout<< "check";
// array;
// int arr[5];
//  cin >> arr[0] >> arr[1] >> arr [2] >> arr [3]>> arr[4];
// arr[3] += 10;
//  cout << arr[3];
/// 2d array
// int arr [3][5];
// arr[1][3] = 78;
// cout << arr[1][3];
// string
// string s = "striver";
// int len = s.size();
// cout << s[len - 1];
// int i;
// for( i = 1; i<=25; i = i+5){
//     cout << "Striver"<< i << endl;
// }
// cout << i << endl;
// int i=2;
// while(i<=5){
//     cout << "striver " << i << endl;
//     i = i+1;
// }
// cout << i << endl;
// do
// { 
//     cout << "striver " << i << endl;
//     i= i+1;
// } while (i<=1);
//  cout << i << endl;

// Functions are set of code which performs something for you
// function are used to modularise code
// function are use to increase readability
// function are used to use same code multiple times
// voif
//return
//parameterised
// non parameterised
// void printName(string name){
//     cout << "Hey " << name << "!"<<endl;
// }
// int main(){
//     string name;
//    cin>> name;
//    printName (name);
//     string name2;
//    cin>> name2;
//    printName (name2);
//     return 0;
// }
//Take two numbers and print its sum

// int sum(int num1,int num2){
//     int num3 = num1+ num2;
//      cout << num3;
// }
// int main(){
//     int num1, num2;
//     cin>>num1>>num2;
//    int res = sum(num1, num2);
//     cout << res;
// int maxx(int num1,int num2){
//     if(num1 >= num2) return num1;
//   else return num2;
// }
// void doSomething(string s ){
//     s[0] = 't';
//     cout << s << endl;
// }
// int main(){
//     string s = "raj";

//     doSomething(s); // maximum /maximum is an inbuilt function
//     cout<< s<< endl;
//pass by reference
// void doSomething(int &num ){
//   cout<< num << endl;
//   num += 5;
//   cout<< num << endl;
//   num += 5;
//   cout<< num << endl;
//   num += 5;

// }
// int main(){ 
//    int num = 10;

//     doSomething(num); // maximum /maximum is an inbuilt function
//     cout<< num<< endl;
void doSomething(int arr[], int n){
   arr[0] += 100;
   cout << "value inside function " << arr[0] << endl;

}
int main (){
    int n = 5;
     int arr [n];
   for(int i = 0; i < n; i++){
      cin >> arr[i];
   }
    
   doSomething(arr,n);


    return 0;
}