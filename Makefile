NAME = minitalk

CC = cc
CFLAGS = -Wall -Wextra -Werror
REM = rm -rf

all:
	$(CC) $(CFLAGS) srcs/server.c -o srcs/server
	$(CC) $(CFLAGS) srcs/client.c -o srcs/client

clean:
	$(REM) srcs/server srcs/client

fclean: clean
	$(REM) srcs/server srcs/client

re: fclean all

.PHONY: all clean fclean re
