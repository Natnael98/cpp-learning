#include <iostream>
#include <string>
#include <memory>

using String = std::string;

class Entity
{
private:
	String m_Name;
public:
	Entity() : m_Name("Unknown") {}
	Entity(const String& name) : m_Name(name) {}
	String GetName()
	{
		return m_Name;
	}
};

int main()
{
	Entity e;
	std::cout << e.GetName() << std::endl;
	Entity e2("Natnael");
	std::cout << e2.GetName() << std::endl;
	Entity* e3 = new Entity("Kassahun");
	std::cout << e3->GetName() << std::endl;
	delete e3;
	std::unique_ptr<Entity> e4 = std::make_unique<Entity>("Olika");
	std::cout << e4->GetName() << std::endl;

	std::cin.get();
}