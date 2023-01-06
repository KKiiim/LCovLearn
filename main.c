#include <assert.h>

int a = 1;

int main(){
    
    while(a<10){
        a++;
    }
    
/*LCOV_EXCL_START*/
    assert(a == 10);
/*LCOV_EXCL_STOP*/
    return 0;
}