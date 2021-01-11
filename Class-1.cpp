#include <iostream>
#include <string>
#include <bits/stdc++.h> 
using namespace std;

class Point{
public: 
	double x;
	double y;
};

class Vector{
public:
	Point start;
	Point end;	
}

void offsetVector(Vector &v, double offsetX, double offsetY){
	v.start.x += offsetX;
	v.start.y += offsetY;
	v.end.x += offsetX;
	v.end.y += offsetY;
}

void printVector(Vector v){
	cout<<"("<<v.start.x<<","<<v.start.y<<")"<<"->"<<"("<<v.end.x<<","<<v.end.y<<")"<<"\n";
}

int main(){
	Vector vec;
	vec.start.x = 1.2; vec.end.x = 2.0; vec.start.y = 0.4; vec.end.y = 1.6;
	offsetVector(vec, 1.0, 1.5);
	printVector(vec);
}