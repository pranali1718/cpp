//Parameterized Constructor //


#include <iostream>
using namespace std;


class Wall 
{
  private:
    int l;
    int h;

  public:
    // parameterized constructor to initialize variables
    Wall(double len, double hgt) {
      l = len;
      h = hgt;
    }

    double calculateArea() {
      return l * h;
    }
};

int main() 
{
  // create object and initialize data members
  int a,b,c,d;
  cout<<"1.Entar data you want to calculate Area \nlength,height"<<endl;
  cin>>a>>b;
  cout<<"2.Entar data you want to calculate Area \nlength,height"<<endl;
  cin>>c>>d;
  Wall wall1(a, b);
  Wall wall2(c, d);

  cout << "\nOutput\n\nArea of Wall 1: " << wall1.calculateArea() << endl;
  cout << "Area of Wall 2: " << wall2.calculateArea();

  return 0;
}