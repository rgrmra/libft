#   ft_isdigit.c

### NAME

- ft_isdigit - character classification function

### LIBRARY

- forty-two standard library (_libft.h_)

### SYNOPSIS

```c
    #include "libft.h"

    int     ft_isdigit(int c);
```

### DESCRIPTION

- This functions check wheter `c` is a digit (0 through 9).

- The argument is an `int` which must have the value of an `unsigned char`.

- **ft_isdigit()**<br>
    Checks for a digit in the current locale.

### RETURN VALUE

- The value returned is nonzero if the character `c` falls into the tested class, and zero if not.