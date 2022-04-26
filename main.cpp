#include "Element.hpp"
#include "Tree.hpp"
#include "z3a/stack.h"
#include <exception>
#include <iostream>

using namespace std;
class DeleteMissing : public exception {
public:
  DeleteMissing() {}

  virtual const char *what() const throw() {
    return "\nBrak elementu do usunięcia\n";
  }
  ~DeleteMissing() {}
};

class AddContains : public exception {
public:
  AddContains() {}

  virtual const char *what() const throw() {
    return "\nElement znajduje się w drzewie\n";
  }
  ~AddContains() {}
};

class EmptyTree : public exception {
public:
  EmptyTree() {}

  virtual const char *what() const throw() { return "\nDrzewo jest puste\n"; }
  ~EmptyTree() {}
};

int main() {
  int sz;
  cin >> sz;
  switch (sz) {
  case 3: {
    Stack<int> mojStack;
    // int value;
    // for(int i=0;i<6;i++){
    //     cin>>value;
    //     mojStack.push(value);
    // }
    // mojStack.pop();
    char control;
    int number;
    bool check_while = false;
    while (!check_while) {
      cin >> control;
      switch (control) {
      case ('U') /* constant-expression */:
        cin >> number;
        mojStack.push(number);
        break;
      case ('O'):
        cout << mojStack.topStack();
        break;
      case ('T'):
        mojStack.pop();
        break;
      default:
        check_while = true;
        break;
      }
    }
    break;
  }
  case 5: {
    Tree<int> myTree;
    bool check = true;
    while (check) {
      int n;
      std::cout << "Operacja:\n1.Dodaj do drzewa 2. Wyświetl drzewo 3. Usuń z "
                   "drzewa\n";
      std::cin >> n;
      switch (n) {
      case 1: {
        int temp;
        std::cin >> temp;
        try {
          myTree.add(temp);
        } catch (AddContains &t) {
          std::cout << t.what();
        }
        break;
      }
      case 2: {
        std::cout << "Drzewo:\n";
        myTree.toDisp(1);
        std::cout << "\n";
        break;
      }
      case 3: {
        int temp;
        std::cin >> temp;
        try {
          myTree.remove(myTree.getFirst(), temp);
        } catch (EmptyTree &t) {
          std::cout << t.what();
        } catch (DeleteMissing &t) {
          std::cout << t.what();
        }
        break;
      }
      default:
        check = false;
        break;
      }
    }
  }

  default:
    cout << "ok";
    break;
  }

  return 0;
}