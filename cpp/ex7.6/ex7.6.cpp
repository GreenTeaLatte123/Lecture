#include <iostream>
using namespace std;
class Rectangle
{
private:
	int width;
	int height;
public:
	Rectangle() :width(0), height(0) { };
	Rectangle(int w, int h) :width(w), height(h) { };
	void showRectangle();
};

void Rectangle::showRectangle()
{
	cout << "width : " << width << ", height : " << height << endl;
}

void copyRectangle(Rectangle* des, Rectangle src)
{
	*des = src;
}

int main()
{
	Rectangle rect1(10, 5), rect2(20, 12);
	cout << "(before)rect1 ==> ";
	rect1.showRectangle();
	cout << "(before)rect2 ==> ";
	rect2.showRectangle();
	cout << endl;

	copyRectangle(&rect2, rect1);
	cout << "(after)rect1 ==> ";
	rect1.showRectangle();
	cout << "(after)rect2 ==> ";
	rect2.showRectangle();
	return 0;
}