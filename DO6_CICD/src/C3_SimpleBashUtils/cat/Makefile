SHELL := /bin/bash
C_FLAGS = -Wall -Werror -Wextra -std=c11
FILES = non-existent.txt test1.txt test2.txt empty.txt
CAT_SHORT_FLAGS = -bevEnstT
CAT_LONG_FLAGS = --number-nonblank --number --squeeze-blank
TARGET = s21_cat
DELIMITER = '.........................................'

all: $(TARGET) tests

s21_cat: s21_cat.o s21_cat_flags.o ../common/s21_common.o
	gcc $(C_FLAGS) s21_cat.o s21_cat_flags.o ../common/s21_common.o -o $(TARGET)

%.o: %.c
	gcc $(C_FLAGS) -c $< -o $@

rebuild: delete $(TARGET) clang-format

delete:
	@rm -rf *.o ../common/*.o ../.clang-format $(TARGET) ../*.txt

clang-format:
	cp ../../../materials/linters/.clang-format ../.clang-format
	clang-format -i *.c *.h ../common/*.c ../common/*.h

tests:
	bash s21_cat_tests.sh

valgrind:
	@echo 'Memory test: FILE *stream'
	valgrind --leak-check=full --show-leak-kinds=all --error-exitcode=1 ./$(TARGET) $(CAT_SHORT_FLAGS) $(FILES)
	@echo $(DELIMITER)

cppcheck:
	cppcheck --enable=all --suppress=missingIncludeSystem *.c *.h ../common/*.c ../common/*.h
	@echo $(DELIMITER)