import 'dart:io';

void main() {
  int? x, y, sum = 0;
  print("enter value:");
  x = int.parse(stdin.readLineSync()!);
  y = int.parse(stdin.readLineSync()!);
  sum = y + x;
  print("sum=$sum");
}

