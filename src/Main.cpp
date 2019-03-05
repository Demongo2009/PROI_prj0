#include <iostream>
#include <string>

class Cat{
private:
  int age;
  string name;
public:
  Cat(int initAge){
    age = initAge;
  };
  Cat(int initAge, stirng initName){
    age = initAge;
    name = initName;
  };
  virtual void makeACall(){
    cout<<"Meow."<<endl;
  }
};

// class Tiger: public Cat{
//
// }

int main(){

}
