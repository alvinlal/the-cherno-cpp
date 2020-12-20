#include<iostream>


template<typename T>
class Vector {
private:
	T* m_Data = nullptr;
	size_t m_Size = 0;
	size_t m_Capacity = 0;

	void realloc(size_t newCapacity) {
		T* newBlock = new T[newCapacity];
		if (newCapacity < m_Size) {
			m_Size = newCapacity;
		}
		for (size_t i = 0; i < m_Size; i++) {
			newBlock[i] = std::move(m_Data[i]);
		}
		delete[] m_Data;
		m_Data = newBlock;
		m_Capacity = newCapacity;
	}

public:
	Vector() {
		realloc(2);
	}
	~Vector() { delete[] m_Data; }
	void pushBack(const T& value) {
		if (m_Size >= m_Capacity) {
			realloc(m_Capacity + m_Capacity / 2);
		}
		m_Data[m_Size] = value;
		m_Size++;
	}
	void pushBack(T&& value) {
		if (m_Size >= m_Capacity) {
			realloc(m_Capacity + m_Capacity / 2);
		}
		m_Data[m_Size] = std::move(value);
		m_Size++;
	}
	template<typename...Args>
	T& emplaceBack(Args&&...args) {
		if (m_Size >= m_Capacity) {
			realloc(m_Capacity + m_Capacity / 2);
		}
		new(&m_Data[m_Size]) T(std::forward<Args>(args)...);
		return m_Data[m_Size++];
	}
	void popBack() {
		if (m_Size > 0) {
			m_Size--;
			m_Data[m_Size].~T();
		}
	}
	size_t length() const { return m_Size; }
	T& operator[](size_t index) { return m_Data[index]; }
	const T& operator[](size_t index) const { return m_Data[index]; }

};
template<typename T>
void printVector(const Vector<T>& v) {
	for (size_t i = 0; i < v.length(); i++) {
		std::cout << v[i] << std::endl;
	}
	std::cout << "------------------------------\n";
}


struct vector3 {
	float x = 0.0f;
	vector3() {}
	vector3(float x) :x(x) {}
	vector3(const vector3& vector) {
		x = vector.x;
	}
	vector3& operator=(vector3&& other) noexcept {
		if (this != &other) {
			std::cout << "Move\n";
			x = other.x;

		}
		return *this;
	}
};

template<>
void printVector(const Vector<vector3>& vector) {
	for (size_t i = 0; i < vector.length(); i++) {
		std::cout << vector[i].x << std::endl;
	}
	std::cout << "---------------------------------\n";
}
int main() {
	Vector<vector3> vector;
	vector.emplaceBack(2.9f);
	vector.emplaceBack(2.9f);
	vector.emplaceBack(2.9f);

	printVector(vector);
}