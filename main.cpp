#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
   for (int a=1; a<=50; a++) {

        cout<<setw(2)<<setfill('0')<<a<< " " ;
        if (a%10==0)
            cout<< endl;
    }

}
