#include<iostream>
using namespace std;

float areaOfCircle(float radius){
    float area=3.14*radius*radius;
    return area;
}



int main(){
    float radius;
    
    cout<<"Enter the radius of Circle:"<<endl;
    cin>>radius;

    float result=areaOfCircle(radius);
    cout<<"Area of the Circle:"<<result<<endl;


    return 0;

}