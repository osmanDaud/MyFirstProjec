#include <iostream>
#include <cmath>

using namespace std;
class circle
{
public:
	int radius; //class data field

	circle(){			
		radius = 1;
	}

	circle(int newRaduis){
		radius = newRaduis;
	}
		double getArea(){
		return  radius * radius * 3.142;
		
	
	}

};
	int main(){
		circle circle1;
		circle circle2(5);
		circle circle3(7);

	cout << "the  of a circle with radius "<<circle1.radius<<" is: "<< circle1.getArea()<<endl;

	return 0;
	}