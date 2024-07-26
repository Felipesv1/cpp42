# Variáveis
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = megaphone




# Regra padrão
all: $(TARGET)

# Regra para criar o executável
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -rf $(OBJ) 

fclean: clean
	$(TARGET)
re: fclean all

.PHONY: all clean
