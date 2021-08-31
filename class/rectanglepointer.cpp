#include <iostream>
using namespace std;
class rectangle
{
public:
    int length;
    int breadth;
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
    rectangle *p;
    p=&r1;
    p->length=10;
    p->breadth=20;
    cout<<"Area of a rectangle ="<<p->area()<<endl;
    cout<<"perimeter of rectangle= "<<p->perimeter()<<endl;

    
    return 0;
}