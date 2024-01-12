#include <iostream>

class happy{
private:
    int length, breath;
public:
    void getLength(int a){
        if(a >= 0){
            length = a;
        }else{
            length = 0;
        }
    }
    void setBreath(int b){
        if(b >= 0){
            breath = b;
        }else{
            breath = 0;
        }
    }
    int getLength(){
        return length;
    }
    int getBreath(){
        return breath;
    }
    int area(){
        return  length*breath;
    }
};

int main(){
    happy r;
    r.setBreath(10);
    r.getLength(20);
    std::cout << r.area() << std::endl;
    
    return 0;
}
