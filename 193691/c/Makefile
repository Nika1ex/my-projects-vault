C_FLAGS = -Wall -Werror -Wextra -std=c11
TARGET = lessons

all: $(TARGET) clang-format

lessons:
	gcc $(C_FLAGS) lessons.c -o $(TARGET)

rebuild: delete $(TARGET) clang-format

delete:
	@rm -rf *.o $(TARGET) 

clang-format:
	clang-format -i *.c */*.c

valgrind:
	valgrind --tool=memcheck --leak-check=yes ./$(TARGET)
	