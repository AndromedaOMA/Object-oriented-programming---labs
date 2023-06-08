#include <iostream>

template <typename Fn>
class Generator {
	Fn fn;
	Generator(Fn fn) :fn(fn) {
	}
	unsigned gen() {
		return fn();
	}
};

int main()
{
	auto fn = [count = 5]() mutable { return count--; };
	auto gen = Generator<decltype(fn)>(fn);
	for (auto i = gen.gen(); i != 0; i = gen.gen())
		std::cout << i << ' ';
	return 0;
}