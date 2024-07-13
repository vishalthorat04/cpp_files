//programme to take input from user and change their values
#include <iostream>
using namespace std;
int main()
{
    int val1,val2,val3;
    cout<<"Enter the two values "<<endl;
    cin>>val1>>val2;
    val3=val1;
    val1=val2;
    val2=val3;
    cout<<"changed values are "<<val1 <<" "<< val2<<endl;
    return 0;
}
