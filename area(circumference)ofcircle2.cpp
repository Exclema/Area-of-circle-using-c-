//area&circumference of a circle by DSE-01-1274/2021//
#include<iostream>
using namespace std;
class my_circle
{
    public:
        float findArea(float r)
        {
            return (3.14*r*r);
        }
        float findCircum(float r)
        {
            return (2*3.14*r);
        }
};
int main()
{
    my_circle c;
    float rad, area, circum;
    cout<<"Enter the Radius of Circle: ";
    cin>>rad;
    area = c.findArea(rad);
    circum = c.findCircum(rad);
    cout<<"\nArea of Circle = "<<area;
    cout<<"\nCircumference of Circle = "<<circum;
    cout<<endl;
    return 0;
}
