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
    r1.length = 10;
    r1.breadth = 20;
    cout << "area is " << r1.area() << endl;
    cout << "perimeter " << r1.perimeter() << endl;
    return 0;
}
