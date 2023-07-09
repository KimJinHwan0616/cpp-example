#include <iostream>
#include <vector>  // vector
#include <algorithm>  // sort 
#include <functional>  // less<>, greater<>


int main() {
    std::vector<int> v(5);
    std::cout << v.size() << ":" << v.capacity() << std::endl; 
}