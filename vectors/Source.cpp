#include<iostream>
#include<vector>


class Vertex {
public:
	float x, y, z;
	Vertex(float x, float y, float z) :x(x), y(y), z(z) {}
	friend std::ostream& operator<<(std::ostream& stream, Vertex& v);

	Vertex(const Vertex& vertex) :x(vertex.x), y(vertex.y), z(vertex.z) {
		std::cout << "Copied !" << std::endl;
	}
};
std::ostream& operator<<(std::ostream& stream, Vertex& v) {
	stream << v.x << ", " << v.y << ", " << v.z;
	return stream;
}
int main() {
	std::vector<Vertex> vertices;
	vertices.reserve(3);
	vertices.emplace_back(1, 3, 5);
	vertices.emplace_back(1, 3, 5);
	vertices.emplace_back(1, 3, 5);

	/*for (Vertex& v : vertices) {
		std::cout << v << std::endl;
	}*/

}