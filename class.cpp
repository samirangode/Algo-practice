#include <iostream>
#include <string>
#include <bits/stdc++.h> 
using namespace std;
/*
class MITStudent {
public:
	char *name;
	int studentID;
		
};

int main(){
	MITStudent student1;
	MITStudent student2;
	student1.name = "Geza";
	student1.studentID = 123456789;
	student2.name = "Jesse";
 	student2.studentID = 987654321;
 	cout << "student1 name is" << student1.name << endl;
	cout << "student1 id is" << student1.studentID << endl;
	cout << "student2 name is" << student2.name << endl;
	cout << "student2 id is" << student2.studentID << endl;
}
*/

/*
class Point{
public:
	double x,y;
}

class Vector{
public:
	Point start, end;
}

int main(){
	Vector vec1;
	vec1.start.x = 3.0;
	vec1.start.y = 4.0;
	vec1.end.x = 5.0;
	Vector vec2;
	vec2.start = vec1.start;
	return 0;
}
*/
class Point{
public:
	double x,y;
};

class Vector{
public:
	Point start;
	Point end;
};

void offsetPoint(Point &p, double x, double y){
	p.x += x;
	p.y += y; 
}

void offsetVector(Vector &v, double offsetX, double offsetY){
	v.start.x += offsetX;
	v.end.x += offsetX;
	v.start.y += offsetY;
	v.end.y += offsetY;
}

void printVector(Vector v){
	cout << "(" << v.start.x << ","<< v.start.y << ") -> (" << v.end.x << "," << v.end.y << ")" << "\n";
}

int main(){
	Point p;
	p.x = 3.0;
	p.y = 4.0;
	offsetPoint(p,1.0,2.0);
	cout<< "(" << p.x << "," << p.y << ")"<<"\n";
	Vector vec;
	vec.start.x = 1.2; vec.end.x = 2.0; vec.start.y = 0.4; vec.end.y = 1.6;
 	offsetVector(vec, 1.0, 1.5);
 	printVector(vec);
	return 0;

}