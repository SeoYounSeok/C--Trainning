#include <iostream>
using namespace std;

class Point {
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y)
	{ }
	void ShowPosition() const
	{
		cout << '[' << xpos << "," << ypos << ']' << endl;
	}
	Point operator- ()
	{
		Point pos(-xpos, -ypos);
		return pos;
	}
	friend Point operator~ (const Point &);
};


int main(void) {

	Point pos1(9, -7);
	pos1.ShowPosition();

	Point pos2 = -pos1;

	Point pos2(9, -7);
	pos1.ShowPosition();


	return 0;
