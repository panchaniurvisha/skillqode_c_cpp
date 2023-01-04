void main() {
  String name = "urvisha";
  int total;
  double percentage;
  double result;
  int maths = 80;
  int science = 69;
  int english = 75;

  print("Name :$name");
  print("\nMaths :$maths");
  print("\ Science :$science");
  print("English :$english");

  total = maths + science + english;
  print("\n Total :$total");

  percentage = total / 3;
  print("\n Percentage :$percentage");
  if (percentage >= 35) {
    print("\n pass");
  } else {
    print("\n fail");
  }
}
