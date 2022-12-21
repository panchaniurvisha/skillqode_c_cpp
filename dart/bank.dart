import 'dart:io';
class Bank {
  String? name;
  int? acc_no, balance, amt;
  void openAccount() {
    print("Enter Account no:");
    acc_no = int.parse(stdin.readLineSync()!);
    print("Enter The Name :");
    name = (stdin.readLineSync()!);
    print("Enter The Balance?");
    balance = int.parse(stdin.readLineSync()!);
  }

  void printAccDetails() {
    print(
        "account details :\n Account no:$acc_no,\n name :$name ,\n Balance:$balance");
  }

  void deposite() {
    print("Enter amount u want to deposite:");
    amt = int.parse(stdin.readLineSync()!);
    balance = balance! + amt!;
  }

  void withdraw() {
    print("Enter amount u want to withdraw:");
    amt = int.parse(stdin.readLineSync()!);
    if (balance! >= 1000) {
      balance = balance! - amt!;
    } else {
      print("less balance Transaction fail");
    }
  }

  void showAccount() {
    print("your Balance:$balance");
  }
}

void main() {
  Bank employee = Bank();
  int ch;
  do {
    print("\n---------------MENU");
    print("1:open account");
    print("2.Show account details");
    print("3.deposite");
    print("4.withdraw");
    print("5.showAccount");
    print("6.exit");
    print("Enter your choice :   ");
    ch = int.parse(stdin.readLineSync()!);
    switch (ch) {
      case 1:
        employee.openAccount();
        break;
      case 2:
        employee.printAccDetails();
        break;
      case 3:
        employee.deposite();
        break;
      case 4:
        employee.withdraw();
        break;
      case 5:
        employee.showAccount();
        break;
      default:
        print("Invalid input ");
    }
  } while (ch != 0);
}
