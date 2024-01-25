
#include <type_traits>
#include <iostream>

template<typename T>
T foo(T x){
    if constexpr (std::is_integral<T>()){
        return x+1;
    }else{
        if(x>0)
        {return x+2;}else{
            return x + 3;
        }
    }
    
}


int main(int argc, const char* argv[]){
    
    int a= foo<int>(1);
    int b =foo<float>(2);

    std::cout<<a<<b<<std::endl;

    return 0;
}