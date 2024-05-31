#include <iostream>
#include <string> 

class Number1 {
private :
    int y;
public : 
// setter 
    void setY (int numY) {
        y = numY;
    }
// getter int getY (int getY){
    int getY(){
        return y;
}
};

class Number2 {
public: 
    int x;
};

int main(){ 
    Number1 satu; 
    Number2 dua;

    satu.setY(25);
    dua.x = 30; 

std::cout << "y :" << satu.getY()<< std::endl;
std::cout << "x :" << dua.x << std::endl;

    return 0;
}