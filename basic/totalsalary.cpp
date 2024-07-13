//da =20% and hra=80%
#include <iostream>
using namespace std;
int main()
{
    int basal,da,hra,tosal;
    cout<<"Enter the basic salary ";
    cin>>basal;
    da=basal*20/100;
    hra=basal*80/100;
    tosal=basal+da+hra;
    cout<<"total salary is "<<tosal<<endl;
    return 0;

}
