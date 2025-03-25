#include <string>
#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr
			<< "Usage: " << argv[0]
			<< " <FILE> <SEARCH> <REPLACE>"
			<< std::endl;
		return (1);
	}

	std::ifstream in_file(argv[1]);
	if (!in_file)
	{
		std::cerr << "Can't open file " << argv[1] << std::endl;
		return (1);
	}
	std::string	out_file_name(std::string(argv[1]).append(".replace"));
	std::ofstream out_file(out_file_name);
	if (!out_file)
	{
		in_file.close();
		std::cerr << "Can't open file " << out_file_name << std::endl;
		return (1);
	}
	std::string str1(argv[2]), str2(argv[3]), line;
	while (std::getline(in_file, line))
	{
		std::string new_line;
		size_t	start =0,
				index;
		while (true)
		{
			index = line.find(str1, start);
			if (index != std::string::npos)
			{
				new_line.append(line.substr(start, index - start));
				new_line.append(str2);
				start = index + str1.length();
			}
			else
			{
				if (new_line.length() == 0)
					new_line = line;
				else
					new_line.append(line.substr(start));
				break ;
			}
		}
		out_file << new_line << std::endl;
	}
	out_file.close();
	in_file.close();
}
