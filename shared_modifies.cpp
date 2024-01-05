#include <iostream>
#include <memory>

void go(){
    std::shared_ptr<int> orishare(new  int (12));
    std::shared_ptr<int> orishare2 = orishare;
    
    std:: cout << "The first pointer is : " << *orishare << std::endl;
    std:: cout << "The shared pointer is : " << *orishare2 << std::endl;
    
    *orishare = 10;
    
    std::cout << "The modified first is : " << *orishare << std::endl;
    std:: cout << "The shared modified pointer is : " << *orishare2 << std::endl;
}

int main(){
    go();
    return 0;
}
