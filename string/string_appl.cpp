#include <iostream>
using namespace std;

string returnFloatingPart(string num){
    int pos = num.find(".");
    if (pos == string::npos)
        return "";
    else
        return num.substr(pos+1);
}

bool containsOnlyDigit(string num){
    for (int i = 0; i < num.length(); i++){
        if(num.at(i) < '0' || num.at(i) > '9'){
            return false;
        }
    }
    return true;
}

string replaceBlankWith20(string num){
    string replaceby = "%20";
    int n = 0;
  
    while ((n = num.find(" ", n)) != string::npos )
    {
        num.replace(n, 1, replaceby);
        n += replaceby.length();
    }
    return num;
}

int main(){

    // returnFloatingPart
    // containsOnlyDigit
    // replaceBlankWith20

    string num1 = "34.545";
    string float_part = returnFloatingPart(num1);
    cout << float_part << endl;

    string num2 = "344532";
    bool isNumeric = containsOnlyDigit(num2);
    cout << isNumeric << endl;

    string name = "Tejas Anil Sathe";
    string correctedName = replaceBlankWith20(name);
    cout << correctedName << endl;

}