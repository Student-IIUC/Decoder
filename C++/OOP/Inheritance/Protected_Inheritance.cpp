/*
For a protected member:
                    Public derivation   Private derivation  Protected derivation 
   1. Private           Not Inherited       Not Inherited       Not Inherited
   2. Protected         Protected           Private             Protected
   3. Public            Public              Private             Protected
*/
// C++ program to demonstrate the working of public and protected inheritance

#include <iostream>
using namespace std;

class Base {
  private:
    int pvt = 1;

  protected:
    int prot = 2;

  public:
    int pub = 3;

    // function to access private member
    int getPVT() {
      return pvt;
    }
};

class PublicDerived : public Base {
  public:
    // function to access protected member from Base
    int getProt() {
      return prot;
    }
};

class ProtectedDerived : protected Base {
  public:
    // function to access protected member from Base
    int getProt() {
      return prot;
    }

    // function to access public member from Base
    int getPub() {
      return pub;
    }
};

int main() {
  PublicDerived object1;
  cout << "Private = " << object1.getPVT() << endl;
  cout << "Protected = " << object1.getProt() << endl;
  cout << "Public = " << object1.pub << endl;
  ProtectedDerived object2;
  cout << "Private cannot be accessed." << endl;
  cout << "Protected = " << object2.getProt() << endl;
  cout << "Public = " << object2.getPub() << endl;
}