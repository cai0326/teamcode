#include<iostream>
#include<string.h> 
using namespace std;
int main()
{
	char str[]="sac,bia,sbcib \n  sc\n\ncs";
	int a=0;
	int line(char str[]);
	a=line(str);
	cout<<a;
 } 
int line(char str[])
	{
		int length=strlen(str);
	    int lines=0;
	    int sign=0;
	    int i;
	    for(i=0;i<length;i++)
	    {
		    if(str[i]!='\n'&&str[i]!=' ')
		    {
			    sign=1;	
		    }
		    else if(str[i]=='\n')
		    {
			    if(sign==1)
			    {
				    lines++;
				    sign=0;
			    }
		    }
	    }
	    lines=lines+1;
	    return(lines);
	}
