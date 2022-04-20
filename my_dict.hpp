#pragma once
#include "dictionary.hpp"
#include <exception>
#include <map>
using  std :: map;

template<class Key,class Value>
class my_dict : public dictionary<Key,Value>{
private:
    map <Key , Value > dict;
public:
    my_dict() = default;
    ~my_dict() override = default;
    my_dict(const my_dict& ) = delete;
    my_dict(my_dict &&) = delete;
    my_dict& operator=(my_dict&) = delete;
    my_dict& operator=(const my_dict&) = delete;

    const Value& get(const Key& key) const override {
        auto find = dict.find(key);
        if (find == dict.end()) {
            throw KeyNotFoundException<Key>(key);
        }
        return find->second;
    }

    void set(const Key& key, const Value& value) override{
        dict[key] =  value;
    }
    bool is_set(const Key& key) const override {
        return dict.find(key) != dict.end();
    }
};
