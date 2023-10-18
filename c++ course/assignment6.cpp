#include <iostream>
using namespace std;
class Publication {
protected:
string title;
float price;
public:
Publication() {
title = "";
price = 0.0;
}
virtual void getData() {
cout << "Enter title: ";
cin.ignore();
getline(cin, title);
cout << "Enter price: ";
cin >> price;
}
virtual void putData() {
cout << "Title: " << title << endl;
cout << "Price: $" << price << endl;
}
};
class Book : public Publication {
private:
int pageCount;
public:
Book() {
pageCount = 0;
}
void getData() {
Publication::getData();
cout << "Enter page count: ";
cin >> pageCount;
}
void putData() {
Publication::putData();
cout << "Page Count: " << pageCount << endl;
}
};
class Tape : public Publication {
private:
float playingTime;
public:
Tape() {
playingTime = 0.0;
}
void getData() {
Publication::getData();
cout << "Enter playing time (in minutes): ";
cin >> playingTime;
}
void putData() {
Publication::putData();
cout << "Playing Time: " << playingTime << " minutes" << endl;
}
};
int main() {
Publication* pubPtr[2];
int choice;
try {
for (int i = 0; i < 2; i++) {
cout << "Enter data for publication " << i + 1 << ":\n";
cout << "1. Book\n";
cout << "2. Tape\n";
cout << "Enter choice: ";
cin >> choice;
switch (choice) {
case 1:
pubPtr[i] = new Book();
break;
case 2:
pubPtr[i] = new Tape();
break;
default:
throw "Invalid choice!";
}
pubPtr[i]->getData();
}
cout << "\nPublication Details:\n";
for (int i = 0; i < 2; i++) {
cout << "\nPublication " << i + 1 << ":\n";
pubPtr[i]->putData();
}
} catch (...) {
cout << "\nAn exception occurred! Setting all data members to zero.\n";
for (int i = 0; i < 2; i++) {
delete pubPtr[i];
pubPtr[i] = nullptr;
}
}
return 0;
}