#include<iostream>
#include<string>
class String {
public:
	String() = default;
	String(const char* string) {
		std::cout << "Created!\n";
		m_Size = strlen(string);
		m_Data = new char[m_Size];
		memcpy(m_Data, string, m_Size);
	}
	String(const String& other) {
		std::cout << "Copied!\n";
		m_Size = other.m_Size;
		m_Data = new char[m_Size];
		memcpy(m_Data, other.m_Data, m_Size);
	}
	~String() {
		delete m_Data;
	}
	String(String&& other) noexcept {
		std::cout << "Moved!\n";
		m_Size = other.m_Size;
		m_Data = other.m_Data;

		other.m_Size = 0;
		other.m_Data = nullptr;
	}
	String& operator=(String&& other) noexcept {
		std::cout << "Moved!\n";
		if (this != &other) {
			delete[] m_Data;
			m_Size = other.m_Size;
			m_Data = other.m_Data;

			other.m_Size = 0;
			other.m_Data = nullptr;
		}
		return *this;
	}
	void Print() {
		for (uint32_t i = 0; i < m_Size; i++)
			std::cout << m_Data[i];
		std::cout << "\n";
	}
private:
	char* m_Data;
	uint32_t m_Size;

};

class Entity {
public:
	Entity(const String& name) :m_Name(name) {

	}
	Entity(String&& name) :m_Name((String&&)name) {

	}
	void printName() {
		m_Name.Print();
	}

private:
	String m_Name;
};
int main() {
	Entity entity(String("Cherno"));
	entity.printName();
	String string = "hello";
	String dest = std::move(string);
	dest = std::move(string);
}