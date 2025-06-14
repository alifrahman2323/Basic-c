#include <iostream>
using namespace std;
int main()
{
	int a = 1,b = 1, d = 1;
	 std::cout << (++a + ++a + a++) << ", " << (a++ + ++b) << ", " << (++d + d++ + a++) << std::endl;

}
