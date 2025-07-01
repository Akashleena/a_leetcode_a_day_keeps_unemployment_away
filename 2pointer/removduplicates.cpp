#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int remove_duplicates(std::vector<int>& arr){
    int slow = 0;
    for (int fast = 0; fast < arr.size(); fast++)
    {
        if (arr.at(fast) != arr.at(slow))
        {
            slow++;
            arr.at(slow) = arr.at(fast);
        }
    }
    return slow + 1;
}
template<typename T>
std::vector<T> get_words(){
    std::string line;
    std::getline(std::cin, line);
    std::istringstream ss{line};
    ss >> std::boolalpha;
    std::vector<T> v;
    std::copy(std::istream_iterator<T>{ss}, std::istream_iterator<T>{}, std::back_inserter(v));
    return v;
}

template<typename T>
void put_words(const std::vector<T>& v)
{
    if(!v.empty()){
        std::copy(v.begin(), std::prev(v.end()), std::ostream_iterator<T>{std::cout, " "});
        std::cout<<v.back();
    }
    std::cout<<'\n';
}
int main()
{
    std::vector<int> arr = get_words<int>();
    int res = remove_duplicates(arr);
    arr.resize(res);
    put_words(arr);
}

/*
🔁 TEMPLATED I/O HELPERS (for generic vector input/output)

----------------------------------------------
📥 get_words<T>()
- Reads a full line from cin
- Parses space-separated values into vector<T>
- Works with any type T (int, string, bool, etc.)

Usage:
    vector<int> v = get_words<int>();

Syntax:
    template<typename T>
    std::vector<T> get_words() {
        std::string line;
        std::getline(std::cin, line);
        std::istringstream ss{line};
        ss >> std::boolalpha; // allows reading "true"/"false" for bool
        std::vector<T> v;
        std::copy(std::istream_iterator<T>{ss},
                  std::istream_iterator<T>{},
                  std::back_inserter(v));
        return v;
    }

----------------------------------------------
📤 put_words<T>(v)
- Prints all elements in vector<T> space-separated
- Avoids trailing space

Usage:
    put_words(v);  // where v is vector<T>

Syntax:
    template<typename T>
    void put_words(const std::vector<T>& v) {
        if (!v.empty()) {
            std::copy(v.begin(), std::prev(v.end()),
                      std::ostream_iterator<T>{std::cout, " "});
            std::cout << v.back();  // last element (no trailing space)
        }
        std::cout << '\n';
    }

✅ Works for all types that support >> and <<
*/