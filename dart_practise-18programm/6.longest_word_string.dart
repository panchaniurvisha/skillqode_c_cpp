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
  var arr = ["Web", "Development", "Tutorial"];
  print("Longest word Name--------------");
  print(long_string(arr));
}
