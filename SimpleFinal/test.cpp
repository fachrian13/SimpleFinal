#include "simple.h"

int main() {
	auto layout = hlayout(
		text("hello"),
		text("world")
	);

	auto t = text("hello world");

	simple << t << start;
}