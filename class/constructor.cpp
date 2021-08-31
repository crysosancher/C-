#include <iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int breadth;

public:
     /* rectangle()//constructor can not have any return type
      {
          length=1;
          breadth=1;
      }*/
      rectangle(int l=1,int b=1)//Default argumented constructor
      {
          setlength(l);
          setbreadth(b);
      }
      rectangle(rectangle &r)//copy constructor
      {
          length=r.length;
          breadth=r.breadth;

      }











    void setlength(int l) //Mutator Of a Class/setter method
    {
        if (1 > 0)
            length = l;
        else
            length = 1;
    }
    void setbreadth(int b) //Mutator of a Class/setter method
    {
        if (b > 0)
            breadth = b;
        else
            breadth = 1;
    }
    int getlength()
    { //acceSSor of a class/Getter method
        return length;
    }
    int getbreadth()
    { // acceSSor of a class/Getter method
        return breadth;
    }

    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};
int main()
{
    rectangle r1(10,5);
    rectangle r2(r1);//calling copy constructor
    cout << r2.area() << endl;
}