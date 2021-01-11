#include <iostream>
#include <string>
#include <bits/stdc++.h> 
using namespace std;

class Point{
public:
	double x;
	double y;
};

void offsetPoint(Point &p, double x, double y){
	p.x += x;
	p.y += y;
}
void offsetVector(double &x0, double &x1, double &y0, double &y1, double offsetx, double offsety){
	x0 += offsetx;
	x1 += offsetx;
	y0 += offsety;
	y1 += offsety;
}

void printVector(double x0, double x1, double y0, double y1){
	cout << "(" << x0 << "," << y0 << ") -> ("<<x1 <<","<<y1<<")" <<"\n";
}



int main()
{	
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	double xStart = 1.2;
	double xEnd = 2.0;
	double yStart = 0.4;
	double yEnd = 1.6;

	offsetVector(xStart,xEnd,yStart,yEnd,1.0,1.5);
	printVector(xStart,xEnd,yStart,yEnd);
	/*Point p;
	p.x = 3.0;
	p.y = 4.0;
	offsetPoint(p,1.0,2.0);
	cout<<"("<<p.x<<","<<p.y<<")"<<"\n";*/



	//char temp[] = {'a','b','c','\0'}; // size 4
	//string temp = "abc"; // size 32
	//char temp[] = "abc"; //size 4
	// char* abc = "abcasdjfhalsdhflas"; 
	//size 8 because only a pointer is saved
	// cout<<abc<<"\n";
	// cout<<sizeof(abc);
	// int x;
	// cin>>x;
	// int &y = x;
	// int z = x;
	// cout<<"Value of y and x and z "<<y<<" "<<x<<" "<<z<<"\n";
	// cout<<"Using ampersand &y and &x and &z"<<&y<<" "<<&x<<" "<<&z<<"\n";
	return 0;
	 
}

