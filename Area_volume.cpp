// To find area and volume //


#include<iostream>
using namespace std;

class Measure
{
     public:
       double length;
       double width;
       double height;
       
       double Area()
       {
           return length * width;
       }
       
       double Volume()
       {
           return length * width * height;
       }

};

int main()
{
     Measure value;
     
     value.length = 30.5;
     value.width = 25.6;
     value.height = 15.2;
     
     cout<< "Area = " << value.Area() << endl;
     cout<< "Volume = " << value.Volume() << endl;
     
     return 0;
}          
 