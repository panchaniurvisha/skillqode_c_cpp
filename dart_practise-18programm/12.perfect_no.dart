import 'dart:io';

bool perfect(int num) {
  int i, sum = 0;
  for (i = 1; i < num; i++) {
    if (num % i == 0) {
      print("\n$i+");
      sum += i;
    }
  }
  if (sum == num)
    return true;
  else
    return false;
}

int main() {
  int num;
  print("\n enter integer num:");
  num = int.parse(stdin.readLineSync()!);
  if (perfect(num))
    print("$num is a perfect number");
  else
    print("$num is not a perfect number");
  return 0;
}
