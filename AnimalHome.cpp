#include <iostream>
#include <string>
using namespace std;

class HomeAnimal {
protected:
	int paws;
	string color;
	string breed;

public:
	HomeAnimal(string breed, int paws, string color) : breed{ breed }, paws{ paws }, color{ color } {}
	virtual void Print() {}
};

class Dog :public HomeAnimal {
public:
	Dog(string breed, int paws, string color) : HomeAnimal(breed, paws, color) {}
	void Print() override {
		cout << "Info for Dog: \nCount Paws: " << paws << "\nColor: " << color << "\nBreed: " << breed << endl;
	}
};
class Cat :public HomeAnimal {
public:
	Cat(string breed, int paws, string color) : HomeAnimal(breed, paws, color) {}
	void Print() override {
		cout << "Info for Cat: \nCount Paws: " << paws << "\nColor: " << color << "\nBreed: " << breed << endl;
	}
};
class Parrot :public HomeAnimal {
public:
	Parrot(string breed, int paws, string color) : HomeAnimal(breed, paws, color) {}
	void Print() override {
		cout << "Info for Parrot: \nCount Paws: " << paws << "\nColor: " << color << "\nBreed: " << breed << endl;
	}
};

int main() {
	Dog dog("Lablador", 4, "White");
	Cat cat("Egypt breed", 4, "Gray");
	Parrot parrot("Brazil", 2, "Green-Yellow");

	dog.Print();
	cout << endl;
	cat.Print();
	cout << endl;
	parrot.Print();
}