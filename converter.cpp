#include "converter.h"

wstring utf8_to_wstring(const string& str) {
    wstring_convert<codecvt_utf8<wchar_t>> converter;
    return converter.from_bytes(str);
}

string wstring_to_utf8(const wstring& str) {
    wstring_convert<codecvt_utf8<wchar_t>> converter;
    return converter.to_bytes(str);
}