#include <iostream>
#include <vector>

#include "basic.hpp"

using namespace std;
 
int main()
{
    // int i = abc(1, 2, 3);  // abc(T a, T b, T c)
    double a = 2.1;
    int b = 3;
    char c = '1';
    double d = abc(a, b, c); 
    cout << "d = " << d << endl;

    int arr1[] = {1,2,3,4,5,6};
    double arr2[] = {1.1, 2.2, 3.3, 4.4};
    std::cout << "Number of elements in arr1: " << count(arr1) << std::endl;
    std::cout << "Number of elements in arr2: " << count(arr2) << std::endl;
    
    return 0;
}