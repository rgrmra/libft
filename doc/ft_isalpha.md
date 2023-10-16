#   ft_isalpha.c

<pre>
<b>NAME</b>

    ft_isalpha - character classification function

<b>LIBRARY</b>

    forty-two standard library (libft.h)

<b>SYNOPSIS</b>

    #include "libft.h"

    int     ft_isalpha(int c);

<b>DESCRIPTION</b>

    This functions check wheter <i>c</i>, which must have the value of an <i>unsigned char</i>.

    <b>isalpha()</b>
        checks for an alphabetic character; in the standard "C" locale. In some locales, there may be additional characters for which <b>isalpha</b>() is true-letters which are neither uppercase nor lowercase.

<b>RETURN VALUE</b>

    The value returned is nonzero if the character c falls into the tested class, and zero if not.

<b>NOTES</b>

    The standards requite that the argument c for this function is representable in the type <i>unsigned char</i>. If the argument c is of type char, it must be cast to <i>unsigned char</i>, as in the following example:

    char    c;

    res = ft_isalpha((unsigned char) c);

    This is necessary because char may be the equivalente of signed char, in which case a byte where the top bit is set would be sign extended when converting to int, yielding a value that is outside the range of unsigned char.

