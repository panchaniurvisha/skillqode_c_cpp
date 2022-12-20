import 'dart:io';

void main() {
  String? name, address;
  int? age, phone_no;
  double? height;
  print("enter your name :");
  name = stdin.readLineSync()!;
  print("enter user address:");
  address = stdin.readLineSync()!;
  print("Age :");
  age = int.parse(stdin.readLineSync()!);
  print("Enter user phone no:");
  phone_no = int.parse(stdin.readLineSync()!);
  print("height:");
  height = double.parse(stdin.readLineSync()!);
}
