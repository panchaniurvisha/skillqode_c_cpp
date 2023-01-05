import 'dart:io';
abstract class College{
    String ?name,university_name,college_name;
    int ?roll_no,total,maths,english,science;
    double ?height,percentage;
    void printStudentDetails();
    void calculateResult();
    void showStudentDetails();
}
class Student extends College{
  @override
  void printStudentDetails() {
    print("\nStudent University name :");
    university_name=stdin.readLineSync()!;
    print("\nStudent College Name :");
    college_name=stdin.readLineSync()!;
    print("\nStudent Name:");
    name=stdin.readLineSync()!;
    print("\nStudent roll no:");
    roll_no=int.parse(stdin.readLineSync()!);
    print("\nstudent height:");
    height=double.parse(stdin.readLineSync()!);
  }
  @override
  void calculateResult() {
    print("\nmaths :");
    maths=int.parse(stdin.readLineSync()!);
    print("\nenglish :");
    english=int.parse(stdin.readLineSync()!);
    print("\nscience :");
    science=int.parse(stdin.readLineSync()!);

    total=maths!+english!+science!;
    print("\nStudent Total Marks :=$total");

    percentage=total!/3;
    print("\nStudent Percentage :$percentage");
    
  }
  @override
  void showStudentDetails() {
    print("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\nStudent University name :$university_name");
    print("\nStudent College Name :$college_name");
    print("\nStudent Name:$name");
    print("\nStudent roll no:$roll_no");
    print("\nStudent Height :$height");
    print("\nmaths :$maths");
    print("\nenglish :$english");
    print("\nscience :$science");
    print("\nStudent Total Marks :=$total");
    print("\nStudent Percentage :$percentage");
  }
 
}
void main(){
  Student student =Student();
  student.printStudentDetails();
  student.calculateResult();
  student.showStudentDetails();
}