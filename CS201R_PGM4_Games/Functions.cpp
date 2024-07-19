#include "Functions.h"


bool isMenuItem(string str) {
    return str.find_first_not_of("BSCREHQ") == string::npos;
}

string menu() {
    string choice = "B";
    return choice;
}