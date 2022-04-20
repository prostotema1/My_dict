#pragma once
#include"not_found_exception.hpp"
template <class Key>
class KeyNotFoundException : public not_found_exception<Key>
{
public:
    explicit KeyNotFoundException(Key key) : key(std :: move(key)) {}

    const Key& get_key() const noexcept override {
        return key;
    }

    const char* what() const noexcept override {
        return "Key was not found in dictionary.";
    }
private:
    Key key;
};
