#   ft_isalpha.c


### NAME

- ft_isalpha - character classification function

### LIBRARY

- forty-two standard library (_libft.h_)

### SYNOPSIS

```c
    #include "libft.h"

    int     ft_isalpha(int c);
```

### DESCRIPTION

- This functions check wheter `c` is a character of class alpha in the current locale.

- The argument is an `int` which must have the value of an `unsigned char`.

- **isalpha()**<br>
    checks for an alphabetic character; in the standard _C_ locale. In some locales, there may be additional characters for which `isalpha()` is true-letters which are neither uppercase nor lowercase.

### RETURN VALUE

- The value returned is nonzero if the character `c` falls into the tested class, and zero if not.

### NOTES

- The standards require that the argument `c` for this function is representable in the type `unsigned char`. If the argument `c` is of type `char`, it must be cast to `unsigned char`, as in the following example:

```c
    char    c;

    res = ft_isalpha((unsigned char) c);
```

-    This is necessary because char may be the equivalente of `signed char`, in which case a byte where the top bit is set would be sign extended when converting to `int`, yielding a value that is outside the range of `unsigned char`.
