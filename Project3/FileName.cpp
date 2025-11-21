#include <iostream>
#include<vector>
using namespace std;

class Point {
	int x;
	int y;
public:
	Point() { }
	Point(int _x, int _y) {
		x = _x;
		y = _y;
	}
	int SetX(int newX) {
		x = newX;
	}
	const int GetX() const {
		return x;
	}

	int SetY(int newY) { y = newY; }
	const int GetY() const {
		return y;
	}

	void Print() {
		cout << "X: " << x << "\tY: " << y << endl;
	}
};

int main() {
	vector<Point> obj;

	obj.push_back(Point(1, 20));

	for (int i = 0; i < obj.size(); i++) {
		obj[i].Print();
	}
}