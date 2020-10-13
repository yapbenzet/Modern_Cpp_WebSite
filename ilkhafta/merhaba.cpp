#include <vector>
#include <iostream>
using namespace std;
vector <int> CreateVectorOfFullSquares(int size) {
    vector <int> result(size); // Vector of size `size `
    for (int i = 0; i < size; ++i) { 
        result[i] = i * i; 
    }
    return result;
}

int main () {
    auto squares = CreateVectorOfFullSquares (10);
    for (int i=0; i<10;i++) {
        cout<<"result " << i+1 << ". = "  << squares[i] <<endl;
    }
    return 0;
 }