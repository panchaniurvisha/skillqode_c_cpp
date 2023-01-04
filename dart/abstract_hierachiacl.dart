abstract class Animal {
  void talk(String, int);
  void growl(String);
}

class Cat extends Animal {
  @override
  void growl(name) {
    print("\n Animal name is $name........");
  }

  @override
  void talk(name, data) {
    print("\n Cat name is $name");
    print("\n cat age is $data");
  }
}

class Dog extends Animal {
  @override
  void growl(dynamic name1) {
    print("\n Dog name is $name1........");
  }

  @override
  void talk(name1, data2) {
    print("\n Dog name is $name1");
    print("\n dog age is $data2");
  }
}

void main() {
  final cat = Cat();
  cat.talk("nora", 5);
  cat.growl("nora");
  final dog = Dog();
  dog.talk("kairv", 15);
  dog.growl("kairav");
}
