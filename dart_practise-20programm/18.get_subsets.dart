void main() {
  List result = [];
  List data = [1, 2, 3];
  //int fixed length=2;
  for (int i = 0; i < data.length; i++) {
    for (int j = i; j < data.length; j++) {
      if (i != j) {
        List temp = [data[i], data[j]];
        result.add(temp);
      }
    }
  }
  print(result);
}
