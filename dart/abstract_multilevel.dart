abstract class Animal {
  void talk();
  void growl();
}

class Dog extends Animal {
  @override
  void growl() {
    print("\n Dog is growling");
  }

  @override
  void talk() {
    print("\n Dog  is talking to another dog");
  }
}

class Puppy extends Dog {
  @override
  void growl() {
    print("\n Puppy is growling........");
  }

  @override
  void talk() {
    print("\n Puppy is talking to another puppy");
  }
}

void main() {
  Puppy puppy = Puppy();
  puppy.growl();
  puppy.talk();
  Dog dog = Dog();
  dog.growl();
  dog.talk();
}
