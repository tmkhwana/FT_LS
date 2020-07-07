#include "ls.h"

/*function to sort the file list in descending order*/
t_file_list     *desc_file_sort(t_file_list *files)
{
    t_file_list *curr;
    char        *temp;

    curr = files;
    while(curr && curr->next)
    {
        if (strcmp(curr->file, curr->next->file) < 0)
        {
            temp = curr->next->file;
            curr->next->file = curr->file;
            curr->file = temp;
            temp = curr->next->path;
            curr->next->path = curr->path;
            curr->path = temp;
            curr = files;
        } else
            curr = curr->next;
    }
    return (files);
}