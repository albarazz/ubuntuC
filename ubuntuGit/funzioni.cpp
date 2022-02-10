
#include "funzioni.h"

void add_char(char array[],char c)
{

	int i=0;
	while(array[i]!='\0')
	i++;

	array[i]=c;
	array[i+1]='\0';
}

void copia_c(char dove[],char chi[])
{
	for(int i=0;i<lunghezza(dove);i++)
	{
		dove[i]=chi[i];
	}

}
int doppio(int n)
{
	return 2*n;
}

void swap_c(char &a,char &b)
{
	
	char tmp=a;	
	a=b;
	b=tmp;
	
}

int lunghezza(char array[])
{

	int i=0;
	while(array[i]!='\0')
	i++;

	return i;

}

void inverti_W(char array[])
{

	int i=0;
	int j=lunghezza(array)-1;
	while(i<j)
	{	

		swap_c(array[i],array[j]);
		i++;
		j--;

	}

}

void inverti_F(char array[])
{

	int i=0;
	char tmp[lunghezza(array)];
	tmp[0]='\0';

	while(array[i]|='\0')
	{

		if(array[i]!=' ')
		{

			add_char(tmp,array[i]);


		}
		else
		{

			inverti_W(tmp);
			cout<<tmp<<" ";
			tmp[0]='\0';

		}



		i++;
	}

		inverti_W(tmp);

		cout<<tmp;
        	cout<<endl;

}




