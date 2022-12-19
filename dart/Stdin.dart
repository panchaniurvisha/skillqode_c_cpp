import 'dart:io';

void main() {
  String data, data1;
  int data2, data3;
  data = stdin.readLineSync()!;
  print("enter your name :$data");
  data1 = stdin.readLineSync()!;
  print("enter user address:$data1");
  data2 = int.parse(stdin.readLineSync()!);
  print("Age :$data2");
  data3 = int.parse(stdin.readLineSync()!);
  print("Enter user phone no:$data3");
}
