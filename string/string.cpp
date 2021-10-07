#include <iostream>
using namespace std;

int main(){

    // str. clear()
    // str.at(index)
    // str.front(), str.back()
    // str.c_str()
    // str.append(str1), str.append(str2, start_index, end_index)
    // str.erase(start_index, end_index)
    //str.replace(range_to_replace, str2)
    // str.find(str1) if not present return string::npos


    string str = "Hello";
    string str1("World");
    cout << str << " " << str1 << endl;

    string str3(5, '5');
    string str4(str, 0, 3);
    cout << str3 << " " << str4 << endl;

    str4.clear();
    char ch = str.at(1);
    cout << str4 << " " << ch << endl;

    char char_f = str.front();
    char char_l = str.back();
    cout << char_f << " " << char_l << endl;

    string str = "Hello world";
    const char * char_str = str.c_str();
    cout << char_str << endl;

    str.append(" C++");
    cout << str << endl;

    str.erase(0, 5);
    cout << str << endl;

    str.replace(1, 5, "Hello");
    cout << str << endl;

    if(str.find("world") != string::npos){
        cout << "World Found" << endl;
    }else{
        cout << "World Not Found" << endl;
    }

}