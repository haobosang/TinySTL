/*************************************************************************
	> File Name: MyAllocator.h
	> Author: 
	> Mail: 
	> Created Time: Sat 17 Sep 2022 11:40:30 AM CST
 ************************************************************************/

#ifndef _MYALLOCATOR_H
#define _MYALLOCATOR_H
template <typename T>
class MyAllocator{
public:
    using value_type T;


    MyAllocator() = default;
    ~MyAllocator() = default;

    T* allocate(size_t numObj){
        return static_cast<T*>(operator new(sizeof(T)*numObj));
    }
    T* allocate(size_t numObj,const void * hit)
    {
        return allocate(numObj);
    }
    void deallcate(T* p,size_t numObj){
        return delete(p);
    }
private:
};
#endif
