//
// Created by danil on 14.10.2025.
//
#include <iostream>
#include <vector>

std::vector<int>::iterator findInSorted(std::vector<int>::iterator, std::vector<int>::iterator, int);

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5,7,8};
    int n=0;
    std::cout<<"element that needs to be found "; std::cin>>n;
    std::vector<int>::iterator it = findInSorted(v.begin(), v.end(), n);
    std::cout << std::distance(v.begin(),it) << std::endl;
    return 0;
}

std::vector<int>::iterator findInSorted(std::vector<int>::iterator first, std::vector<int>::iterator last, int el) {
    while (*first<=el) {
        if (*first == el) return first;
        ++first;
    }
    return last;
}