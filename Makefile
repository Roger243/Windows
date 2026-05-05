.PHONY: all configure build test
all: build
configure:
	cmake -S . -B build
build: configure
	cmake --build build --config Release
test:
	ctest --test-dir build --output-on-failure
