#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;

    cout << "Size : " << v.size() << endl;
    cout << "Capacity : " << v.capacity() << endl;

    v.push_back(1); // To insert an element in a vector in last index.
    cout << "Size : " << v.size() << endl;
    cout << "Capacity : " << v.capacity() << endl;

    v.push_back(2);
    cout << "Size : " << v.size() << endl;
    cout << "Capacity : " << v.capacity() << endl;

    v.push_back(3);
    cout << "Size : " << v.size() << endl;
    cout << "Capacity : " << v.capacity() << endl;

    v.resize(5); // To change the size of vector.
    cout << "Size : " << v.size() << endl;
    cout << "Capacity : " << v.capacity() << endl;

    v.resize(10); // To change the size of vector.
    cout << "Size : " << v.size() << endl;
    cout << "Capacity : " << v.capacity() << endl;

    v.pop_back();
    v.pop_back();
    cout << "Size : " << v.size() << endl;
    cout << "Capacity : " << v.capacity() << endl;
}