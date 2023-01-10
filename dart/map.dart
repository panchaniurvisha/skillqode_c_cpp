void main() {
  Map student = {
    "firstname": "Panchani",
    "middlename": "Urvisha",
    "lastname": "Hareshbhai",
    "birth_date": "11-9-98",
    "age": 25,
    "list": ["yellow", "pink", "green", "red", "blue"],
    "list1": {
      "name": ["tom", "jerry"]
    }
  };
  print(student["firstname"]);
  print(student["middlename"]);
  print(student["lastname"]);
  print(student["birth_date"]);
  print(student["age"]);
  student["age"] = 26;
  print(student["age"]);
  print(student["list"]);
  print(student["list"][0]);
  print(student["list"][1]);
  print(student["list"][2]);
  print(student["list"][3]);
  print(student["list"][4]);
  print(student["list1"]["name"][0]);
  print(student["list1"]["name"][1]);
}
