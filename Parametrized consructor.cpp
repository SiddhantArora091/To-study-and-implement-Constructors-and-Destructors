#include<iostream>
using namespace std;
class Product{
    int ProID;
    string Name;
    string  Category;
    double Price;
public:
Product(int id,string n,string c,double p){
        ProID = id;
        Name = n;
        Category = c;
        Price =p;
    }
void display(){
    cout << endl <<"Details of the product : "<<endl<< "Product ID: " << ProID<< endl << "Name: " << Name<< endl << "Category: " << Category << endl << "Price: " << Price;
}
};
int main(){
    Product p(146,"IQOO Z7","Smartphone",25000);
    p.display();
    return 0;
}

/* output:
Details of the product :   
Product ID: 146
Name: IQOO Z7
Category: Smartphone
Price: 25000
*/
