bin: main.cpp
	g++ -g -fprofile-arcs -ftest-coverage -o main $<

run: bin
	./main

gcov: run
	gcov -b main.cpp

lcov: gcov
	lcov --no-markers --rc lcov_branch_coverage=1 --capture --directory . --output-file main_coverage.info

html: lcov
	genhtml --branch-coverage -o coverage_reports/ main_coverage.info

json:run
	gcov main.gcda --json
	gzip -dk main.gcov.json.gz

dump: bin
	gcov-dump -l -p ./main.gcno
	gcov-dump ./main.gcda
