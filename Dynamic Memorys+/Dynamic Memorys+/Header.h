class DynamicClass
{
private:
	int a = 0, b = 0;
public:
	DynamicClass() {};
	DynamicClass(int height, int width) : a(height), b(width) {}
	int Area() {
		return a * b;
	}
};
