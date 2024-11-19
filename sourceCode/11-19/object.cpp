#include <iostream>
using namespace std;

// 新增排名 rank
// 新增計算 Bmi

struct Person {
  string name;
  float height, weight;
  int age;

  Person(string name, float height, float weight, int age) {
    this -> name   = name;
    this -> height = height;
    this -> weight = weight;
    this -> age    = age;
  }

  void printInfo() {
    cout << "name:   "<< name << "\n";
    cout << "height: " << height << "\n";
    cout << "weihgt: " << weight << "\n";
    cout << "age:    " << age << "\n";
    return;
  }
  float getBmi(){
    float newHeight=(height/100.0);
    return weight/(newHeight*newHeight);
  }

};

int main() {
  Person Ivan("Ivan", 177, 67, 16);
  Ivan.printInfo();
  cout << Ivan.name << "\'s bmi: " << Ivan.getBmi() << "\n";

}