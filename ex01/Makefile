
EXEC = phonebook
CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp Contact.cpp PhoneBook.cpp
OBJS = $(SRCS:.cpp=.o)

all : $(EXEC)

$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(OBJS)

clean:
	rm -f $(OBJS)

re: fclean all

fclean: clean
	rm -rf $(EXEC)

.PHONY: clean re
