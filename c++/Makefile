C_FLAGS = -Wall -Werror -Wextra -std=c11
TARGET = lessons

all: $(TARGET) clang-format

lessons:
	g++ $(C_FLAGS) lessons.cpp -o $(TARGET)

rebuild: delete $(TARGET) clang-format

delete:
	@rm -rf *.o $(TARGET) 

clang-format:
	clang-format -i *.cpp

valgrind:
	valgrind --tool=memcheck --leak-check=yes ./$(TARGET)
	