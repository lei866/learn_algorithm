#ifndef BASIC_HPP
#define BASIC_HPP

#include <iostream>

using namespace std;

// 传值函数
int abc(int a, int b);

// 模版函数
// template<class T>
// T abc(T a, T b, T c) {
//     cout << "abc(T a, T b, T c)" << endl; 
//     return a + b * c;
// }

// 引用参数
// template<class T>
// T abc(T &a, T &b, T &c) {
//     cout << "abc(T &a, T &b, T &c)" << endl;
//     return a + b * c;
// }

// 常量引用参数
// template<class T>
// T abc(const T &a,const T &b, const T &c) {
//     cout << "abc(T &a, T &b, T &c)" << endl;
//     return a + b * c;
// }

//一个更通用的版本
// 每个形参可以是任意类型，但返回值与第一个形参类型一致
template<class Ta, class Tb, class Tc>
Ta abc(const Ta &a, const Tb &b, const Tc &c) {
    return a + b * c;
}

template<class T, size_t N>
size_t count(const T(&array)[N]) {
    return N;
}



#endif // BASIC_HPP