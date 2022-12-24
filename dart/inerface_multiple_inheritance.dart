class University {
  int data = 25;
  void printData(String name) {
    print("\n Enter University Nmame :${String}");
  }

  void setData() {
    data = 25;
  }

  int getData(int data) {
    return 25;
  }
}

class College {
  int data1 = 30;
  void printData(String name) {
    print("\n Enter College Nmame :${String}");
  }

  void setData() {
    data1 = 30;
  }

  int getData(int data) {
    return 30;
  }
}

class Student implements University, College {
  @override
  int data = 35;

  @override
  int data1 = 40;

  @override
  void printData(String name) {
    print("\n students name:${name}");
  }

  @override
  void setData() {
    data = 35;
  }

  @override
  int getData(int data) {
    return data;
  }
}

void main() {
  Student student1 = Student();
  student1.printData("urvi");
  student1.setData();
  student1.getData(35);
  student1.printData("piyush");
  student1.setData();
  student1.getData(40);
}
