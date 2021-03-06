#include <string>
#include <vector>
#include <cstdio>

int main(int argc, char* argv[]) {
    std::string output;
    std::vector<std::string> args(argv+1, argv + argc);

    if (argc <= 1)
        output = "y";
    else
        for (const auto& str : args) output += str + " ";

    //while(1) - sometimes it checks if 1==1
    for(;;)
        //std::cout << output << "\n";
        printf("%s\n",output.c_str()); //printf is faster
}
