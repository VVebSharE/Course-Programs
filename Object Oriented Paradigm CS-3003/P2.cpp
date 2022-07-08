/*2. A point on the two dimensional plane can be represented by two numbers: an X coordinate and
a Y coordinate. For example (4,5) represents point 4 unit to the right of origin along the X axis
and 5 units up the y-axis . The sum of the two points can be defined as new point whose X and
Y coordinates.
Write a program that uses a structure called point to model a point . Define three points and
have the user input values to two of them. Than set the third point equal to the sum of the other
two. And display the value of new points. Interaction with the program might look like this.
Enter Coordinate of P1: 3 4
Enter Coordinate of P2: 5 7
Coordinates of P1+P2 are : 8 11*/
#include<iostream>
using namespace std;
struct point
{
    int x,y;
};
int main()
{
    point P1,P2;
    cout<<"Enter Coordinate of P1:";
    cin>>P1.x>>P1.y;
    cout<<"Enter Coordinate of P2:";
    cin>>P2.x>>P2.y;
    point P3;
    P3.x=P1.x+P2.x;
    P3.y=P1.y+P2.y;
    cout<<"Coordinates of P1+P2 are : "<<P3.x<<" "<<P3.y;
    return 0;
}