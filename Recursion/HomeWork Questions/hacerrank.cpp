#include<iostream>
using namespace std;
#include <vector>

int fourthBit(int number) {
    vector<int> binaryRepresntation;
    
    while(number > 0){
        binaryRepresntation.push_back(number % 2);
        number =number/2;
    }
    
    int size=binaryRepresntation.size();
    
    if(size > 4){
        return binaryRepresntation[size-4];
    }
    else{
        return -1;
    }
    

}

int main() {
    int inputNumber;

    std::cout << "Enter a decimal number: ";
    std::cin >> inputNumber;

    int result = fourthBit(inputNumber);

    std::cout << "The value at the 4th index from the right: " << result << std::endl;

    return 0;
}
