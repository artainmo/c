#include <stdio.h>

char    *firstshot(int tab[6][6])
{
    int r;
    int c;
    int prov;
    int val;

    r = 0;
    c = 0;
    while (r < 6)
    {
        while (c < 6)
        {
            val = 1;
            if (tab[r][c] == 4)
            {
                if (c != 0 && c != 5 && r == 0)    //coll down
                {
                    prov = r;
                    while (prov < 4)
                    {
                        prov++;
						if (tab[prov][c] == 0 || tab[prov][c] == val)
							tab[prov][c] = val;
						else
							return ("ERROR");
                        tab[prov][c] = val;
                        val++;
                    }
                }
                else if (c != 0 && c != 5 && r == 5)    //coll up
                {
                    prov = r;
                    while (prov > 1)
                    {
                        prov--;
						if (tab[prov][c] == 0 || tab[prov][c] == val)
							tab[prov][c] = val;
						else
							return ("ERROR");
                        tab[prov][c] = val;
                        val++;
                    }
                }    

				if (r != 0 && r != 5 && c == 0)     //row to right
                {
                    prov = c;
                    while (prov < 4)
                    {
                        prov++;
						if (tab[r][prov] == 0 || tab[r][prov] == val)
                        	tab[r][prov] = val;
						else
							return ("ERROR");
                        val++;
                    }
                }
                else if (r != 0 && r != 5 && c == 5)   //row to left
                {
                    prov = c;
                    while (prov > 1)
                    {
                        prov--;
						if (tab[r][prov] == 0 || tab[r][prov] == val)
							tab[r][prov] = val;
						else
							return ("ERROR");
                        val++;
                    }
                }
            }
            c++;
        }
        c = 0;
        r++;
    }
	return (0);
}

void    display(int tab[6][6])
{
    int r;
	int c;

	r = 0;
	c = 0;
	while (r < 6)
    {
        while (c < 6)
        {
            if (tab[r][c] == 0)
            {
                printf(" ");
            }
            else 
                printf("%d",tab[r][c]);
            c++;
            printf("  ");
        }
        printf("\n");
        c = 0;    
        r++;
    }
}

int main()
{
    int tab[6][6] = {{0,4,3,2,1,0},
                    {4,0,0,0,0,1},
                    {3,0,0,0,0,2},
                    {2,0,0,0,0,2},
                    {1,0,0,0,0,2},
                    {0,1,2,2,2,0}};

    if (firstshot(tab) == 0)
		display(tab);
	else
		printf("%s",firstshot(tab));
}
