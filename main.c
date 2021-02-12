#include<stdio.h>
#include<string.h>

#define STR_LEN 10
#define LETTERS 26

int main()
{
	int i = 0, j = 0,x=0;
	char words[1000] = {0};
	char letters[LETTERS] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int alphabets[26] = {0};
	printf("Enter 10 names:\n");
	for(x = 0; x < STR_LEN;x++)
	{		
		fgets(words, 15, stdin);
		for(i = 0;i < STR_LEN;i++)
		{
			for(j = 0; j < LETTERS;j++)
			{
				if (words[i] == letters[j])
				{
					alphabets[j]++;
				}
			}
		}
    	if (alphabets[0]> 0 && alphabets[1]> 0 && alphabets[2]> 0 && alphabets[3]> 0 && alphabets[4]> 0)
		{
			if (alphabets[5]> 0 && alphabets[6]> 0 && alphabets[7]> 0 && alphabets[8]> 0 && alphabets[9]> 0)
			{
				if (alphabets[10]> 0 && alphabets[11]> 0 && alphabets[12]> 0 && alphabets[13]> 0 && alphabets[14]> 0)
				{
					if (alphabets[15]> 0 && alphabets[16]> 0 && alphabets[17]> 0 && alphabets[18]> 0 && alphabets[19]> 0)
					{
						if (alphabets[20]> 0 && alphabets[21]> 0 && alphabets[22]>0 && alphabets[23]> 0 && alphabets[24]> 0 && alphabets[25]> 0)
						{
							break;
						}
					}
				}
			}
		}
		
    }
	printf("it's a pangram?\n");
	if (alphabets[0]> 0 && alphabets[1]> 0 && alphabets[2]> 0 && alphabets[3]> 0 && alphabets[4]> 0 && alphabets[5]> 0 && alphabets[6]> 0 && alphabets[7]> 0 && alphabets[8]> 0 && alphabets[9]> 0 && alphabets[10]> 0 && alphabets[11]> 0 && alphabets[12]> 0 && alphabets[13]> 0 && alphabets[14]> 0 && alphabets[15]> 0 && alphabets[16]> 0 && alphabets[17]> 0 && alphabets[18]> 0 && alphabets[19]> 0 && alphabets[20]> 0 && alphabets[21]> 0 && alphabets[22]>0 && alphabets[23]> 0 && alphabets[24]> 0 && alphabets[25]> 0)

	{
		printf("Yes!\n");
	}
	else 
	{
		printf("No!");
	}
	
	return 0;
}
