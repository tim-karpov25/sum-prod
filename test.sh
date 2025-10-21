#!/bin/sh

g++ code.cpp -o sumprod

./sumprod < ./tests/001.dat > output.txt
cmp output.txt ./tests/001.ans && echo "Test 1 - OK" || exit 1

./sumprod < ./tests/002.dat > output.txt
cmp output.txt ./tests/002.ans && echo "Test 2 - OK" || exit 1

./sumprod < ./tests/003.dat > output.txt
cmp output.txt ./tests/003.ans && echo "Test 3 - OK" || exit 1

./sumprod < ./tests/004.dat > output.txt
cmp output.txt ./tests/004.ans && echo "Test 4 - OK" || exit 1

./sumprod 123 < ./tests/004.dat > output.txt
cmp output.txt ./tests/001.ans && echo "Test 5 - OK" || exit 1

./sumprod 99 < ./tests/004.dat > output.txt
cmp output.txt ./tests/002.ans && echo "Test 6 - OK" || exit 1

./sumprod 0 < ./tests/004.dat > output.txt
cmp output.txt ./tests/003.ans && echo "Test 7 - OK" || exit 1

./sumprod 101 < ./tests/004.dat > output.txt
cmp output.txt ./tests/004.ans && echo "Test 8 - OK" || exit 1
