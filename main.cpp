/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 17 Sep 2022 11:35:53 AM CST
 ************************************************************************/

#include<iostream>
#include<vector>
#include<memory>
#include<stdlib.h>
#include<unistd.h>
int main(){
    std::vector<int ,std::allocator<int>> v(0);
    for(size_t i=0;i<30;i++)
    {
        sleep(1);
        v.push_back(i);
        std::cout<<"size"<<v.get_allocator().new_allocator<<std::endl;
    }
    return 0;
}
