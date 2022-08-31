#include<iostream>
#include<fstream>
#include<string>
namespace SusImposter 
{
	//templat print function
	template <typename T>
	void print(T t)
	{
		std::cout << t << "\n";
	}
	//wtites to textfiles
	void WriteToFile(std::string filePath)
	{
		std::ofstream file(filePath);
		std::string fileContent;
		std::getline(std::cin, fileContent);
		file << fileContent;
		file.close();

	}

	
}




int main()
{
	SusImposter::print(123);
	SusImposter::WriteToFile("minfile.txt");
}