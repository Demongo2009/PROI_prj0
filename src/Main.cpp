#include <iostream>
#include <string>

using namespace std;

class Cat{
  int age;
  string name;
public:
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
  Tiger(int initAge, string initName, int initNumberOfStripes)
  :Cat(initAge, initName){
    numberOfStripes = initNumberOfStripes;
  };
  void makeACall(){
    cout<<"Rawr!"<<endl;
  }
  void tellHowManyStripes(){
    cout<<"I've got "<<numberOfStripes<<" stripes."<<endl;
  }
};

void makeACallAll(Cat* catList[], int amountOfCats);


int main(){
  Cat* KarolinasCat = new Cat(2,"Mraur");
  Cat* noonesCat = new Cat(0,"Schrodinger");
  Cat* KubasCat = new Tiger(5,"Boss",10);

  const int amountOfCats = 2;
  Cat* cuteCats[amountOfCats] = {KarolinasCat, KubasCat};

  makeACallAll(cuteCats, amountOfCats);

  for(int i=5;i>4;i++){
    cout<<"I love dogs."<<endl;
  }


}

void makeACallAll(Cat* catList[], int amountOfCats){
  for(int i=0;i<amountOfCats+1;i++){
    catList[i]->makeACall();
  }
}
