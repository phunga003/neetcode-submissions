class Solution {
public:

    string encode(vector<string>& strs) {
        string out = "";
        for (auto& str : strs) {
            out += str + static_cast<char>(31); // ascii separator symbol that should not appear in normal text
        }

        return out;
    }

    vector<string> decode(string s) {
        stringstream stream(s);
        string token;
        vector<string> out;

        while (getline(stream, token, static_cast<char>(31))) {
            out.push_back(token);
        }

        return out;
    }
};
