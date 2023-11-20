#include<iostream>
using namespace std;
int main()
{
    float num1 , num2;
    int choice;
    cout<<"Enter a value of num1 : ";
    cin>>num1;
    cout<<"Enter a value of num2 : ";
    cin>>num2;
    cout<<endl;
    cout<<"Choose an option from the following list: " <<endl;
    cout<<"1.Addition." <<endl;
    cout<<"2.Subtraction." <<endl;
    cout<<"3.Multiplication." <<endl;
    cout<<"4.Division." <<endl;
    cout<<"Your options is : ";
    cin>>choice;
    switch(choice)
    {
        case 1:
        cout<<"The sum of "<<num1<<" and "<<num2<<" is : "<<num1+num2<<endl;
        break;

        case 2:
        cout<<"The difference between "<<num1<<" and "<<num2<<" is : "<<num1-num2<<endl;
        break;

        case 3:
        cout<<"The multiplication of "<<num1<<" and "<<num2<<" is : "<<num1*num2<<endl;
        break;

        case 4:
        if (num2 !=0 )
        {
            cout<<"The division when "<<num1<<" is divided by "<<num2<<" is : "<<num1/num2<<endl;
            break;
        }
        else
        {
            cout<<"Error! Division not possible, because you can't divide by zero!"<<endl;
        }

        default:
        cout<<"Invalid Option! Please enter again..."<<endl;
    }
    return 0;
}