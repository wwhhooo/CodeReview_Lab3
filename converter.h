#ifndef CONVERTER_H
#define CONVERTER_H

#include <string>
#include <locale>
#include <codecvt>

using namespace std;

wstring utf8_to_wstring(const string& str);
string wstring_to_utf8(const wstring& str);

#endif