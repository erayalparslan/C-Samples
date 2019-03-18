#include <iostream>
using namespace std;

class Entity{
private:
	int x;
	int y;
public:
	Entity() : x(10), y(20) {
		std::cout << "Entity is created!" << std::endl;
	}
	~Entity() {
		std::cout << "Entity is destructed!" << std::endl;	
	}
	int getX(){
		return x;
	}
};

void mFunction(){
	Entity e;
	std::cout << e.getX() << std::endl;
}


int main()
{
	//Because the object is created in the stack memory (mFunction), it is destructed when the function ends.
	mFunction();
	return 0;
}
