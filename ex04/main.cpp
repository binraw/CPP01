

#include <iostream>
#include <fstream>
#include <string>

void replaceInFile(const std::string& filename, const std::string& s1, const std::string& s2) {
    std::ifstream inputFile(filename.c_str());
    if (!inputFile.is_open()) {
        std::cerr << "Could not open the file: " << filename << std::endl;
        return;
    }
    std::string content;
    std::string line;
    while (std::getline(inputFile, line)) {
        content += line + "\n"; 
    }
    inputFile.close();
    size_t pos = 0;
    while ((pos = content.find(s1, pos)) != std::string::npos)
    {
        content.erase(pos, s1.length());
        content.insert(pos, s2);
        pos += s2.length(); 
    }

    std::string outputFilename = filename + ".replace";
    std::ofstream outputFile(outputFilename.c_str());
    if (!outputFile.is_open()) {
        std::cerr << "Could not create the file: " << outputFilename << std::endl;
        return;
    }
    outputFile << content;
    outputFile.close();
}

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    replaceInFile(filename, s1, s2);

    return 0;
}