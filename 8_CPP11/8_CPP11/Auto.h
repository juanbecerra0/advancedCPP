#pragma once

/* 8.40 */
template <class T, class S>
auto test(T value1, S value2) -> decltype(value1 + value2) {
	return value1 + value2;
}

int get() {
	return 999;
}

auto test2() -> decltype(get()) {
	return get();
}