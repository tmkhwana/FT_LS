#include "ls.h"

t_file_list     *sort_file_list(t_file_list *files, char *flags, int main)
{
    if (ft_strchr(flags, 't'))
    {
        if(main == 1)
            return (mtime_file_sort(files));
        else
            return (atime_file_sort(files));
    }else if(ft_strchr(flags, 'S'))
    {
        if(main == 1)
            return (msize_file_sort(files));
        else
            return (size_file_sort(files));
    }else if(ft_strchr(flags, 'r'))
    {
        return (desc_file_sort(files));
    } else 
    {
        return (asc_file_sort(files));
    }
}