abstract class Animal {
  void talk(
    String name,
    String data,
    int data2,
  );

  void growl(String);
}

class Dog extends Animal {
  @override
  void growl(name) {
    print("\n dog name is $name........");
  }

  @override
  void talk(name, data, data2) {
    print("\n Dog name is $name");
    print("\n Dog age is $data");
    print("\n Dog colour is $data2");
  }
}

class Puppy extends Dog {
  @override
  void growl(name1) {
    print("\n Puppy name is $name1........");
  }

  @override
  void talk(name1, data3, data4) {
    print("\n Puppy name is $name1");
    print("\n Puppy age is $data3");
    print("\n Puppy colour is $data4");
  }
}

void main() {
  Puppy puppy = Puppy();
  puppy.growl("kairav");
  puppy.talk("kairav", "red", 20);
  Dog dog = Dog();
  dog.growl("Nora");
  dog.talk("Nora", "yellow", 15);
}
