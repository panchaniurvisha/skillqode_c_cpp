//no return no parameter
/*class School{
     String name="urvisha";
     int rollno=1,age=25,standard=12;
  
     void getData(){
       print("\nstudent name :$name");
       print("\nstudent roll_no :$rollno");
       print("\nstudent age :$age");
       print("\nstudent standard :$standard"); 
     }
}
void main(){
  School student =School();
  print(student.name);
  print(student.rollno);
  print(student.age);
  print(student.standard);
  student.getData();
} */
//no return with parameter
/*class School{
   void getData(String name,int rollno,int age,int standard){
   print("\nstudent name :$name");
   print("\nstudent roll_no :$rollno");
   print("\nstudent age :$age");
   print("\nstudent standard :$standard"); 
  }
}      
void main(){
   School student =School();
   student.getData("urvisha",1,25,5);   
}*/
//with return with parameter
/*class School{
   dynamic getData(String name,int rollno,int age,int standard){
    print("\nstudent name :$name");
    print("\nstudent roll_no :$rollno");
    print("\nstudent age :$age");
    return standard;
  }  
}
void main(){
   School student =School();  
   print("\nstandard:${ student.getData("urvisha",1,25,5)}");
}*/
//with return no parameter
class School {
  String name = "urvisha";
  int age = 25, standard = 5, rollno = 1;
  dynamic getData() {
    print("\nName:$name");
    print("\nage:$age");
    print("\nstandard:$standard");
    return rollno;
  }
}

void main() {
  School student = School();
  print("\nrollno:${student.getData()}");
}
