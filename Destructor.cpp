#include<iostream>
using namespace std;
int count=0;
int destroy=5;

class destruct{
public:
destruct()
{
    count++;
    cout<<"No. of object created: "<<count<<endl;
}
~destruct()
{
    --destroy;
    cout<<"No. of object destroyed: "<<destroy<<endl;
}
};

int main()
{
destruct aa,bb,cc;
{ destruct dd;
}
return 0;
}


/* output:
No. of object created: 1
No. of object created: 2
No. of object created: 3
No. of object created: 4
No. of object destroyed: 4
No. of object destroyed: 3
No. of object destroyed: 2
No. of object destroyed: 1
No. of object destroyed: 0
*/
