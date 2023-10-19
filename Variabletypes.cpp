#include <iostream>
#include <string>

using namespace std;

//Global varioable declaration and installation
int globalVar = 30;
const int age = 25;//constant global variable; Value will not change
void myFunction()
{
    //Function code block
    //Local variable
    int localVar1 = 10, localVar2 = 12;
    string localstring1 = "Local string 1", localString2 ="Local string 2";
    cout << "Local Variable 1 =" <<localVar1 << endl;
    }
//Comment code
int main(){
    //Function code block
    globalVar = 50;
    cout<<" Global variable value =\n"<<globalVar;
    cout<< " Global Variable value =\n"<<age;
    //cout<<""<< localVar1;
    myFunction();
    return 0;
}

void addAndDisplay(int Value1,int Value2)// A fuction to add and display
{
    int Sum= Value1 + Value2;//sum of the parameter variables
    cout<< "The sum of "<< Value1 <<"and"<< Value2 <<"is"<<Sum<<endl;
}