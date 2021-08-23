#include<iostream>
#include<typeinfo>

int main()
{
	int i, j;
	char c;
	const std::type_info& t1 = typeid(i);
	const std::type_info& t2 = typeid(j);
	const std::type_info& t3 = typeid(c);

	if (t1 == t2)
	{
		std::cout << "They are the same" << std::endl;
	}
		if (t2 == t3)
		{
			std::cout << "Same" << std::endl;
		 }
	
	else
	{
	std::cout << "nope" << std::endl;
	}
}