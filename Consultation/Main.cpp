#include <iostream>
#include <string>

struct book {std::string title = "nonane";
	std::string author = "noname";
	int year = 1970;
	int pages = 1;
	int price = 0;};

int main() {
	setlocale(LC_ALL, "Ru");
	int n;
	book* books = new book[2]{
		{"Евгений Онегин",
		"Александр Пушкин",
		1833,
		272,
		479},
		{"Alice in the Wonderland",
		"LC",
		1865,
		45,
		763}};
	std::getline(std::cin, books[0].title);	
	delete[] books;

	return 0;
}