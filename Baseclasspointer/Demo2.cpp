#include <bits/stdc++.h>
using namespace std;
class rectangle
{
	public:
	void area()
	{
		cout << "Hey i'm base rectangle" << endl;
	}
};
class cuboid : public rectangle
{
public:
	void volume()
	{
		cout << "Hey i'm derived cuboid" << endl;
	}
};
int main()
{
	cuboid c;
	//rectangle r;
	rectangle *p = &c;//we are pointing a cuboid and saying its rectangle 
	//cuboid *k=&r;//here the object is rectangle and we are saying its cuboid which is wrong
	p->area();
	//p->volume();  //will not work as rectangle does not have volume..*p=&c means storing cuboid in rectangle
	return 0;
}
