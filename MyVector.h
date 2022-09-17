/*************************************************************************
	> File Name: MyVector.h
	> Author: 
	> Mail: 
	> Created Time: Sat 17 Sep 2022 11:35:43 AM CST
 ************************************************************************/

#ifndef _MYVECTOR_H
#define _MYVECTOR_H
#include<memory>
namespace TinySTL{
    template <typename T>
    class vector{
    public:
        typedef T           value_type;
        typedef value_type* pointer;
        typedef value_type* iterator;
        typedef value_type& reference;
        typedef size_t      size_type;
        typedef ptrdiff_t   difference_type;
    protected:
        typedef std::allocator<T> alloc;
        iterator start;
        iterator finsh;
        iterator end_of_storage;
    public:
        vector():start(0),finsh(0),end_of_storage(0){}
        iterator end(){
            return finsh;
        }
        iterator begin(){
            return start;
        }
        size_type size(){
            return size_type(begin()-end());
        }
        bool empty(){
            return size()==0;
        }
        void push_back(const value_type x){
            if(finsh!=end_of_storage)
            {
                alloc::construct(finsh,x);
                ++finsh;
            }else{
                
            }
        }

    };
}
#endif
