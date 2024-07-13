#include <iostream>
using namespace std;
int main ()
{
    int a,b;
    cout<<"Enter two variables ";
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"changed values are "<<a<<" "<<b;
    return 0;

}
