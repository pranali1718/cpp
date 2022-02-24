// Constructor default action//
/

#include<iostream>
using namespace std;

class demoConst
{
     public: int i=0, j=0, k=0;
     
             void setval()
             {  
                i=100;
                cout<< "Setvalue() " << i << endl;
             }
             
                demoConst()
                {
                   cout<< "Inside the constructor\n" << endl;
                   j=0;
                   k=5;
                }  
};              

int main()
{
    demoConst demo1, demo2;
    cout<< "Values of demo1 memebers: "<< demo1.i << " " << demo1.j << " " << demo1.k << endl;
    demo1.setval();
    cout<< "Values of demo2 memebers: "<< demo2.i << " " << demo2.j << " " << demo2.k << endl;
    demo2.setval();
    
return 0;
}                    