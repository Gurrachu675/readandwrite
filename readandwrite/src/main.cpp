#include<iostream>


namespace SusImposter 
{
	template <typename T>
	void print(T t)
	{
		std::cout << t << "\n";
	}

}




int main()
{
	SusImposter::print(123);
}