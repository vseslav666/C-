#include <stdio.h>
int main()
{
	int tab;
	int spc;
	int eol;
	int c;
	tab = 0; spc = 0; eol = 0;
	
	while ((c = getchar()) !='\\')
	 
	
	{   if (c == '\t')
	      tab++;
	    else if (c == ' ')
	      spc++;
	    else if (c == '\n')
	       eol++; 
	      } 
	    	 
	printf("TAB_Simblos = %d\t\n", tab);
	printf("SPACE_Simblos = %d\t\n", spc);
	printf("EOL_Simblos = %d\t\n", eol);
}
