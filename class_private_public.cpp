#include <iostream>

class happy{
private:
    int length, breath;
public:
    int getLength(int a){
        if(a >= 0){
            return length = a;
        }else{
            return length = 0;
        }
    }int getBreath(int b){
        if(b >= 0){
            return breath = b;
        }else{
            return breath = 0;
        }
    }int getLength(){
        return length;
    }int getBreath(){
        return breath;
    }int area(){
        return length * breath;
    }
};

int main(){
    happy r;
    r.getBreath(10); r.getLength(22);
    std::cout << r.area() << std::endl;
    
    return 0;
}
