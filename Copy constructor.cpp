#include<iostream>
#include<string.h>
using namespace std;
class student
{
    int rno;
    char name[50];
    double fee;
    public:
    student(int,char[],double);
student(student &t)     
    {
        rno=t.rno;
        strcpy(name,t.name);
        fee=t.fee;
    }
    void display();

};
student::student(int no,char n[],double f)
    {
        rno=no;
        strcpy(name,n);
        fee=f;
    }    

   void student::display()
    {
        cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
    }

int main()
{
    student s(146,"Harsh",300000);
s.display();

    student manjeet(s);  
manjeet.display();

    return 0;
}

/* output:
146	Harsh	300000
146	Harsh	300000
*/
