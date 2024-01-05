#include <iostream>
#include <memory>

void ans(){
    std::shared_ptr<int> share(new int(23));
    std::weak_ptr<int> weakshare = share;
    
    std::cout << "Is the pointer expired : " << std::boolalpha << weakshare.expired() << std::endl;
    
    if(auto shared = weakshare.lock()){
        std::cout << "The value of the pointer is " << *share << std::endl;
    }else{
        std::cout << "The weak pointer is expired, the object is no longer available" << std::endl;
    }
    share.reset();
    std::cout << "Is weak expired after the resetting shared ? " << std::boolalpha << weakshare.expired() << std::endl;
}
int main(){
    ans();
    return 0;
}
