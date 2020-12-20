#include<iostream>
#include<string>

class string {
private:
	char* m_Buffer;
	unsigned int m_Size;
public:
	string(const char* string) {
		m_Size = strlen(string);
		m_Buffer = new char[m_Size + 1];
		memcpy(m_Buffer, string, m_Size);
		m_Buffer[m_Size] = 0;
	}
	string(const string& other) :m_Size(other.m_Size) {
		m_Buffer = new char[m_Size + 1];
		memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
	}
	~string() {
		delete[] m_Buffer;
	}
	friend std::ostream& operator << (std::ostream& stream, const string& string);
};

std::ostream& operator << (std::ostream& stream, const string& string) {
	stream << string.m_Buffer;
	return stream;
}

int main() {
	string first = "alvin";
	string second = first;
	std::cout << first << std::endl;
	std::cout << second << std::endl;
}