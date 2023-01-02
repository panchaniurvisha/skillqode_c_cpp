class University {
  int data = 25;
  void printData(
      String universityName, String collegeName, String name, double height) {
    print("\n student University Name:${universityName}");
    print("\n student College Name:${collegeName}");
    print("\n student name:${name}");
    print("\n student height :${height}");
  }

  void setData() {
    data = 25;
  }

  int getData(int data) {
    return 25;
  }
}

class College {
  int data = 30;
  void printData(
      String universityName, String collegeName, String name, double height) {
    print("\n student University Name:${universityName}");
    print("\n student College Name:${collegeName}");
    print("\n student name:${name}");
    print("\n student height :${height}");
  }

  void setData() {
    data = 30;
  }

  int getData(int data) {
    return 30;
  }
}

class Student implements University, College {
  @override
  int data = 35;
  @override
  void printData(
      String universityName, String collegeName, String name, double height) {
    print("\n student University Name:${universityName}");
    print("\n student College Name:${collegeName}");
    print("\n student name:${name}");
    print("\n student height :${height}");
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
  student1.printData(
      'Gujrat University', 'Gujrat commers college', "urvi", 5.3);
  student1.setData();
  print("\n student roll_no:${student1.getData(35)}");
  print("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
  student1.printData(
      'Vir Narmad University', 'r.v.raval college', "piyush", 5.7);
  student1.setData();
  print("\n student roll_no:${student1.getData(40)}");
}
