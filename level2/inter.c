// Assignment name  : inter
// Expected files   : inter.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes two strings and displays, without doubles, the
// characters that appear in both strings, in the order they appear in the first
// one.

// The display will be followed by a \n.

// If the number of arguments is not 2, the program displays \n.

// Examples:

// $>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
// padinto$
// $>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
// df6ewg4$
// $>./inter "rien" "cette phrase ne cache rien" | cat -e
// rien$
// $>./inter | cat -e
// $
#include <unistd.h>
void ft_inter(char *s1,char *s2)
{
   unsigned char seen[256] = {0};
  while(*s2)
  {
    seen[(unsigned char)*s2] = 1;//each present
    s2++;
  }
  while(*s1)
  {
    if(seen[(unsigned char)*s1] == 1)
    {
        write(1,s1,1);
        seen[(unsigned char)*s1] = 0; //prented
    }
    s1++;
  }
}
int main(int argc, char **argv)
{
    if (argc == 3)
        ft_inter(argv[1],argv[2]);
    write(1,"\n",1);
}
