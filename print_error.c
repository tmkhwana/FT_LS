#include "ls.h"

/*function to print an error*/
void        print_error(char *err_file)
{
   ft_putstr("ft_ls: cannot access \'");
   ft_putstr(err_file);
   ft_putendl("\': No such file or directory");
}