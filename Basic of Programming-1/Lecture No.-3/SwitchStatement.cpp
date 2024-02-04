#include<iostream>
using namespace std;

int main(){
    // int day;
    // cout<<"Enter the int value of in a Week lies into 1 t0 7 :"<<endl;
    // cin>>day;

    // switch (day)
    // {
    // case 1:
    //    cout<<"Monday"<<endl;
    //     break;

    // case 2:
    //    cout<<"Tuesday"<<endl;
    //     break;

    // case 3:
    //    cout<<"Wednesday"<<endl;
    //     break;

    // case 4:
    //    cout<<"Thursday"<<endl;
    //     break;

    // case 5:
    //    cout<<"Friday"<<endl;
    //     break;

    // case 6:
    //    cout<<"Saturday"<<endl;
    //     break;

    // case 7:
    //    cout<<"Sunday"<<endl;
    //     break;            

    // default:
    // cout<<"Invalid Input!!"<<endl;
    //     break;
    // }

    char grade;
    cout<<"Enter the Grade A to E :"<<endl;
    cin>>grade;

    switch(grade){
        case 'A':
        cout<<"Excellent"<<endl;
        break;

        case 'B':
        cout<<"Good"<<endl;
        break;

        case 'C':
        cout<<"Better"<<endl;
        break;

        case 'D':
        cout<<"Passed"<<endl;
        break;

        case 'E':
        cout<<"Fail!!"<<endl;
        break;

        default:
        cout<<"Invalid Input !!!"<<endl;
    }
    return 0;
}