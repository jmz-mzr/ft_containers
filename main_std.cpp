#include <iostream>
#include "enable_if__is_integral__tests_std.hpp"
#include "equal__tests_std.hpp"
#include "lexicographical_compare__tests_std.hpp"

int	main(void)
{
	enable_if__is_integral__tests_std();
	std::cout << std::endl;
	equal__tests_std();
	std::cout << std::endl;
	lexicographical_compare__tests_std();
	return (0);
}
