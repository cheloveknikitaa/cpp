#include <iostream>
#include <string>

struct Data
{
	std::string name;
	int			age;
	float		weight;
	char		gender;
};

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

std::ostream &operator<<(std::ostream &out, Data& data)
{
	out << "Name : " << data.name << std::endl;
	out << "Age : " << data.age << std::endl;
	out << "Weight : " << data.weight << std::endl;
	out << "Gender : " << data.gender << std::endl;
	return (out);
}

int main(void)
{
	Data data;

	std::cout << "Insert name : ";
	std::cin >> data.name;
	std::cout << "Insert age : ";
	std::cin >> data.age;
	std::cout << "Insert weight : ";
	std::cin >> data.weight;
	std::cout << "Insert gender(one char M or W) : ";
	std::cin >> data.gender;

	std::cout << std::endl << "DATA BEFORE SERIALIZE" << std::endl << data << std::endl;

	uintptr_t serial = serialize(&data);
	Data *deserial = deserialize(serial);
	
	std::cout << "DATA AFTER DESERIALIZE" << std::endl << *deserial;
	return 0;
}

