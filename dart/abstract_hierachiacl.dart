abstract class Animal {
  void set(String gender) ;
  void printDeails(String name,String colour,int data);
}
class Cat extends Animal {
  @override
  void printDeails(name,colour,data) {
      print("\n Cat name is $name");
      print("\n Cat Colour is $colour");
      print("\n cat age is $data");
  }
  @override
  void set(gender) {
      print("\n Animal Gender is $gender........");
  }
  }
class Dog extends Animal {
  @override
  void printDeails(name1, colour1,data1) {
      print("\n Dog name is $name1");
      print("\n Dog age is $data1");
      print("\n Dog colour is $colour1");
  }
  @override
  void set(gender2) {
      print("\n Aniaml Gender is $gender2........");
  }
}
void main() {
  Cat cat = Cat();
  cat.printDeails("nora","red",5);
  cat.set("female");
  Dog dog = Dog();
  dog.printDeails("kairv","yelllow",15);
  dog.set("male");
}