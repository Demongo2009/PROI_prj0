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
  Cat(int initAge, string initName){
    age = initAge;
    name = initName;
  };
  virtual void makeACall(){
    cout<<"Meow."<<endl;
  }
};

class Tiger: public Cat{
  int numberOfStripes;
public:
  Tiger(int initAge, string intiName, int initNumberOfStripes){
    age = initAge;
    name = initName;
    numberOfStripes = initNumberOfStripes;
  }
  void makeACall(){
    cout<<"Rawr!"<<endl;
  }
  void tellHowManyStripes(){
    cout<<"I've got "<<numberOfStripes<<" stripes."<endl;
  }
}

int main(){

}
