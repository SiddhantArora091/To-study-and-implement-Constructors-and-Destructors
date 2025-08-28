#include<iostream>
using namespace std;
class Car
{
    int price;
    char carname[77];
    double mileage;
public:
Car()
    {
        cout<<"Enter the price :  ";      
        cin>> price;
        cout<<"Enter the Car Name :";           
        cin>>carname;
        cout<<"Enter the mileage :"<<endl;           
        cin>>mileage;  
    cout<<endl;
    }   

void display()
{       cout<<"Car Details are :"<<endl;
        cout<< price <<"\n"<<carname<<"\n"<<mileage;
    }
};

int main()
{
    Car sedan;       
sedan.display();
    return 0;
 }



 /* output:
 Enter the price :  1200000
Enter the Car Name :toyota
Enter the mileage :
23

Car Details are :
1200000
toyota
23*/
