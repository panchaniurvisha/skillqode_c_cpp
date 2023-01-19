String long_string(arr) {
  var longest = arr[0];
  for (var i = 1; i < arr.length; i++) {
    if (arr[i].length > longest.length) {
      longest = arr[i];
    }
  }
  return longest;
}

void main() {
  var arr = ["Australia", "Germany", "United Status Of America", "Icelend"];
  print("Longest Country Name--------------");
  print(long_string(arr));
}
