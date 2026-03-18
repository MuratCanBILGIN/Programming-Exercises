#include <iostream>
#include <string>

int main(){
    int x;
    std::cin>>x;
    std::cout<<x<<"tok"<< '=' << 42;

    std::string a = "Can ";
    std::string b = "Bilgin\n";

    std::cout<< a + b;

    std::string food = "donkei";
    std::string &meal = food;

    std::cout<<meal<<'\n';
    std::cout<<food;

    return 0;
}