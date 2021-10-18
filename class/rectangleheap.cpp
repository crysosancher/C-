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
int main(){
    rectangle  *ptr=new rectangle();//dynamic object created in a heap.
    ptr->length=10;
    ptr->breadth=20;
    cout<<"Area is="<<ptr->area()<<endl;
    cout<<"perimeter is="<<ptr->perimeter()<<endl;
    
}