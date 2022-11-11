// array-practice
#include <iostream>
#include <random>
using namespace std;

int a[10];

string name[5];


int main() {


for (int i = 0; i < 10; i++)
a[i] = rand() % 51 + 50;

for (int j = 0; j < 10; j++)
cout << a[j] << endl;



for (int n = 0; n < 5; n++) {
cout << "enter name" << endl;
cin >> name[n];
}

for (int l = 0; l < 5; l++) {
if (name[l] == "alejandro" || name[l] == "Alejandro")
cout << "you have some cool friends" << endl;
else
cout << "you need some more cool friends like alejandro" << endl;
cout << name[l] << endl;
}
