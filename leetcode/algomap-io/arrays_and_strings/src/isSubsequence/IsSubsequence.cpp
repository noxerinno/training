#include "IsSubsequence.h"

using namespace std;

IsSubsequence::IsSubsequence() {}

bool IsSubsequence::isSubsequence(string s, string t) {
    if (!s.empty() && t.empty()) {
        return false;
    }

    // uint previousPos = 0;

    for (char& c : s) {
        auto posInStringT = t.find(c);
        
        if (posInStringT == string::npos) {
            return false;
        }
        
        t = t.substr(posInStringT+1);
    }

    return true;
}
