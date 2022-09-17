/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 17 Sep 2022 11:35:53 AM CST
 ************************************************************************/

#include<iostream>
#include"MyVector.h"
#include<memory>
#include<stdlib.h>
#include<unistd.h>
int main(){
    //std::vector<int ,std::allocator<int>> v(0);
    TinySTL::vector<int> v;
    std::cout<<v.size();
    return 0;
}
