#include <iostream>
#include <vector>

using namespace std;

vector<int> add(vector<int> vec, int val) {
    vector<int> newVec(vec.size() + 1);
    for (int i = 0; i < vec.size(); i++)
        newVec[i] = vec[i];
    newVec[vec.size()] = val;

    return newVec;
}

int main() {

    vector<int> vec = {};

    int count = 0;
    int age = 0;
    int sum = 0;
    while (age != -1) {
        cout << "Please enter pacient age: ";
        cin >> age;

        if (age != -1) {
            vec = add(vec, age);
        }
    }

    for (int i = 0; i < vec.size(); i++) {
        sum += vec[i];
    }
    sum /= vec.size();
    cout << "Middle age is " << sum << " elements is " << vec.size();
}