#ifndef INPUT_HELPER_H
#define INPUT_HELPER_H

#include <vector>
#include <nlohmann/json.hpp>

using namespace std;

template <typename T>
vector<T>
read_vector_from_json_str()
{
    string json_str;
    cin >> json_str;
    auto json_array = nlohmann::json::parse(json_str);
    vector<T> vec;
    for (int i = 0; i < json_array.size(); i++)
    {
        vec.push_back(json_array[i]);
    }
    return vec;
}

#endif