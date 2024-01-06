include <stdio.h>
int second()
{
	int i =0, temp =0;
	int j =0;
	while(1)
	{
		for(i = j;i< j+5 ; i++)
		{		
			temp = temp +i;
		}
		j = i;
		if(temp > 100) break;
	}
	return temp;
}
