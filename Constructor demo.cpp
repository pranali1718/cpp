// Constructor demo//


#include<iostream>
using namespace std;

class demoConst
{
     private: int i=10;
     public:
             void setval()
             {  
                i=100;
                cout<< "Setvalue() " << i << endl;
             }
             
                demoConst()
                {
                   cout<< "Inside the constructor\n" << endl;
                }
};              

int main()
{
    demoConst demo1, demo2;
    demo1.setval();
    demo2.setval();
    
return 0;
}                