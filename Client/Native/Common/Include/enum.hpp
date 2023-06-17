#ifndef ENUM_HPP
#define ENUM_HPP

#include <type_traits>

template <typename Enumeration>
auto as_integer(Enumeration const value) -> typename std::underlying_type<Enumeration>::type;

#endif
