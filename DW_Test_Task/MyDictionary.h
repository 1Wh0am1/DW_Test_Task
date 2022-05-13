#pragma once
#include "Dictionary.h"
#include <unordered_map>

template <class Key, class Value>
class MyDictionary final : public dictionary<Key, Value>
{
public:
	MyDictionary() = default;
	~MyDictionary() override = default;
	const Value& get(const Key& key) const override;
	void set(const Key& key, const Value& value) override;
	bool is_set(const Key& key) const override;

private:
	std::unordered_map<Key, Value> _data;
};


