#include <iostream>
#include <boost/filesystem.hpp>

int main() {
    boost::filesystem::path path("directory_path");

    if (boost::filesystem::exists(path)) {
        std::cout << "Path: " << path << " exists!" << std::endl;

        if (boost::filesystem::is_directory(path)) {
            std::cout << "Path: " << path << " is a directory." << std::endl;
        }
        else if (boost::filesystem::is_regular_file(path)) {
            std::cout << "Path: " << path << " is a regular file." << std::endl;
        }
    }
    else {
        std::cout << "Path: " << path << " does not exist!" << std::endl;
    }

    return 0;
}