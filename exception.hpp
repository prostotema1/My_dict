#include"not_found_exception.hpp"
template <class Key>
class KeyNotFoundException : public not_found_exception<Key>
{
public:
    explicit KeyNotFoundException(Key key);

    const Key& get_key() const noexcept override;

    const char* what() const noexcept override;
private:
    Key key;
}
