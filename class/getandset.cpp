#include <iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int breadth;

public:
    void setlength(int l) //Mutator Of a Class/setter method
    {
        length = l;
    }
    void setbreadth(int b)
    { //Mutator of a Class/setter method
        breadth = b;
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
    rectangle r1;
    r1.setbreadth(10);
    r1.setlength(20);
    cout << "area=" << int(r1.area()) << endl;
    cout << "perimeter=" << r1.perimeter() << endl;
    cout << "Length of a =" << r1.getlength() << endl;
    cout << "Bradth of a classs=" << r1.getbreadth() << endl;
    return 0;
}