#include<iostream>

using namespace std;

struct Rectangle
{
    float height;
    float width;
};

int main()
{
    Rectangle r = {9, 9};
    double area = r.width * r.height;
    double perimeter = 2 * (r.height + r.width);
    cout<<"Area is "<<area<<endl;
    cout<<"Perimeter is "<<perimeter<<endl;
    
}