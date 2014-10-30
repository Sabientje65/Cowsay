#include <iostream>
#include <vector>

int main(int argc, char* argv[]){
	std::vector<std::string> toSay;
	
	
	std::string line = "    ";
	std::string str = "";
	
	for(int i = 1; i < argc; i++){
		str += std::string(argv[i]);
		
		if(i != argc - 1)
			str += ' ';
	}
		
	for(char c : str)
		line += '-';

	if(argc > 1){
		std::cout << line << '\n';
		std::cout << "   <" << str << ">";
		std::cout << '\n' <<  line;
	}
		
	

	std::cout << '\n';
	std::cout << "\t \\   ^__^\n";
	std::cout << "\t   \\ (00)\\______\n";
	std::cout << "\t     (__)\\       )\\/\\\n";
	std::cout << "\t         ||----w |\n";
	std::cout << "\t         ||     ||\n";
	
	return 0;
}