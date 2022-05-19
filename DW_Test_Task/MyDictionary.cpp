#include "Dictionary.h"
#include "MyException.h"
#include "MyDictionary.h"

/*The method responsible for getting values from the data*/
template <class Key, class Value>
const Value& MyDictionary<Key, Value>::get(const Key& key) const
{
	const auto search = _data.find(key);
	if (search == std::cend(_data))
	{
		throw my_not_found_exception<std::string>("Key Not Found");
	}
	return search->second;
}

/*The method responsible for setting the value in the data*/
template <class Key, class Value>
void MyDictionary<Key, Value>::set(const Key& key, const Value& value)
{
	const auto search = _data.find(key);

	if (search == std::cend(_data))
	{
		_data.insert(key, value);
	}
	else
	{
		search->second = value;
	}
}

/*A method that checks for the presence of a key in the data*/
template <class Key, class Value>
bool MyDictionary<Key, Value>::is_set(const Key& key) const
{
	const auto search = _data.find(key);

	return search != std::cend(_data);
}