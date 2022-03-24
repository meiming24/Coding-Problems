#include <iostream>
#include <locale>
using namespace std;
struct g3 : std::numpunct<char> {
    char do_thousands_sep()   const { return ',';  }
    std::string do_grouping() const { return "\3"; } 
};
int main() {
    std::cout.imbue(std::locale(std::cout.getloc(), new g3));
    int n;
    cin >> n;
    std::cout << n;
}
