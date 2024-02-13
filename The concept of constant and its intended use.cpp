#include<iostream>
using namespace std;
//#define PI 3.14
main(){
	const float PI = 3.14;
	float r,area;
	cout<< "Enter the radius:";
	cin>>r;
	area=PI*r*r;
	cout<<"Area: "<<area;
}
