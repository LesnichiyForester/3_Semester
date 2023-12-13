#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

void cut(std::string& s) {
    size_t dot_pos = s.find('.');
    if (dot_pos != std::string::npos) {
        s.erase(dot_pos);
        s.shrink_to_fit();
    } 
    else {
        s.clear();
        s.shrink_to_fit();
    }
}

int main() {
    string s1 = "cat.dog.mouse.elephant.lion.crocodile";
    cut(s1);
    cout << s1 << endl;
    s1 = "";
    cut(s1);
    cout << s1 << endl;
}
