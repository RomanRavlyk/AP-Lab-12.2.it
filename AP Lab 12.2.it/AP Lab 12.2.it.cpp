#include <iostream>

using namespace std;



struct Elem {
	Elem *link;
	int info;

	Elem(int value) : info(value), link(nullptr) {}
};


void append(Elem*& first, int value) {
	Elem* newElem = new Elem(value);
	if (first == nullptr) {
		first = newElem;
	}
	else {
		Elem* current = first;
		while (current->link != nullptr) {
			current = current->link;
		}
		current->link = newElem;
	}
}
		
void display(Elem* first) {
	Elem* current = first;
	while (current != nullptr) {
		std::cout << current->info << " ";
		current = current->link;
	}
	cout << endl;
}


int calculatesumnotuples(Elem* first) {
	int sum = 0;
	Elem* current = first;

	while (current != nullptr) {
		if (current->info % 2 == 0) {
			sum += current->info;
		}
		current = current->link;
	}
	return sum;
}

void DeleteList(Elem* first) {
	Elem* current = first;
	while (current != nullptr) {
		Elem* temp = current;
		current = current->link;
		delete temp;
	}
	first = nullptr;
}
	

int main() {
	Elem* list = nullptr;

	for (int i = 0; i < 10; i++) {
		append(list, i);
	}

	cout << "Your list: ";
	display(list);

	cout << "Sum: " << calculatesumnotuples(list);

	DeleteList(list);
	return 0;
}
