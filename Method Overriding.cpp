// Method Overriding //


#include <iostream>
using namespace std;
class A
{
   public:
   void show(int x,int y)
   {
       cout<<"sum="<<x+y<<endl;
     
   }
};
class B: public A
{
    public:
    void show(int x,int y)
    {
        cout<<"Multi="<<x*y<<endl;
    }
};
int main()
{
    A b;
    b.show(15,2);
    
}