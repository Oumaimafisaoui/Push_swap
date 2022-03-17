########################################################################
####################### My Makefile ##############################
########################################################################

# Compiler settings
CC = gcc
CFLAGS = -Wall -Wextra -Werror
 

# Makefile settings
NAME = push_swap
PUSHSRC = sorts/sort_three.c sorts/sort_two.c \
sorts/sort_type.c tools/atoi_check.c tools/error.c tools/is_duplicated.c \
tools/is_sorted.c tools/stack_operations.c push_swap.c moves/pa.c \
moves/pb.c	moves/ra.c	moves/rb.c	moves/rr.c moves/sa.c \
moves/sb.c	moves/ss.c	moves/rra.c moves/rrb.c moves/rrr.c
HEADER = push_swap.h


############## The referencing #############

#PUSHOBJ = $(PUSHSRC:.c=.o)


# UNIX-based OS variables & settings

RM = rm -rf

########################################################################
####################### Targets beginning here #########################
########################################################################

all: $(NAME)


# Builds the app

%.o:%.c 
		$(CC) $(CFLAGS) -c $<

$(NAME)  : $(PUSHOBJ) $(HEADER)
#$(CC) $(CFLAGS) -o $@ $(PUSHOBJ)
	echo "the project is cooking..."

# Building rule for .o files and its .c


################### Cleaning rules for Unix-based OS ###################

clean:
			$(RM) $(PUSHOBJ)

fclean:		clean
			$(RM) push_swap 

re:			fclean all

.PHONY:		all clean fclean re 