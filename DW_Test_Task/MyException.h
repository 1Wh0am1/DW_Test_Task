#pragma once
#include "Exception.h"

/*My class responsible for error handling*/
template <class Key>
class my_not_found_exception final : public not_found_exception<Key>
{
public:
	explicit my_not_found_exception(Key key) : _data(key) { }
	const Key& get_key() const noexcept override
	{
		return _data;
	}
private:
	Key _data;
};
