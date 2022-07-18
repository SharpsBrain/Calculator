#include <iostream>

using namespace std;

int main()
{
   //program to learns nested switch statements:
   //variable declaration:
  /* int a=100;
   int b=200;
   switch(a){
   case 100:
       cout<<"This is the part of outer switch"<<endl;
       switch(b){
   case 200:
    cout<<"This is the part of inner switch"<<endl;
    }
    cout<<"Exact values of a is: "<<a<<" and exact value of b is: "<<b<<endl;
*/
//program to make a calculator using the switch case statements:
/*int num1,num2;
char oper_ators;
cout<<"Enter the two numbers :"<<endl;
cin>>num1>>num2;
cout<<"Enter the operator to be performed from the following:"<<endl;
cout<<" + , - ,/ ,* ,"<<endl;
cin>>oper_ators;
switch(oper_ators){
case '+':
    cout<<num1<<"+"<<num2<<"="<<num1+num2;
    break;
case '-':
    cout<<num1<<"-"<<num2<<"="<<num1-num2;
    break;
    case '*':
    cout<<num1<<"*"<<num2<<"="<<num1*num2;
    break;
    case '/':
    cout<<num1<<"/"<<num2<<"="<<num1/num2;
    break;
    default:
        cout<<"ERROR! YOU HAVE INPUT THE WRONG OPERATOR------"<<endl;

   }*/
   int month;
   cout<<"Enter the month u want to see the days :"<<endl;
   cin>>month;
   switch(month){
   case 1://for january
   case 3://for march
   case 5://for may
   case 7://for july
   case 8://for august
   case 10://for octuber
   case 12://for december
       cout<<month<<" having 31 days "<<endl;
       break;
   case 2://for february
        cout<<month<<" having 28/29 days "<<endl;
        break;
   default:
    cout<<month<<" having 30 days "<<endl;
   }


    return 0;
}//}
