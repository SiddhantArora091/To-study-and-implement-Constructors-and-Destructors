#include<iostream>
using namespace std;
class Car
{
    int price;
    char carname[77];
    double mileage;
public:
Car();
void display(); };
Car::Car()
    {
        cout<<"Enter the price :  ";      
        cin>> price;
        cout<<"Enter the Car Name :";           
        cin>>carname;
        cout<<"Enter the mileage :"<<endl;           
        cin>>mileage;  
    cout<<endl;
    }   

void Car::display()
{       cout<<"Car Details are :"<<endl;
        cout<< price <<"\n"<<carname<<"\n"<<mileage;
    }


int main()
{
    Car sedan;       
sedan.display();
    return 0;
 }



 /* output:
Enter the price :  14000000
Enter the Car Name :audi
Enter the mileage :
12

Car Details are :
14000000
audi
12*/
