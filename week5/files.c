#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp_usn,*fp_sname,*fp_out;
	char usn[10],name[50];
	
	fp_usn=fopen("usn.txt","r");
	if(fp_usn==NULL)
	{
		printf("Error in opening file 'usn.txt'\n");
		exit(0);
	}
	
	fp_sname=fopen("sname.txt","r");
	if(fp_sname==NULL)
	{
		printf("Error in opening file 'sname.txt'\n");
		exit(0);
	}
	
	fp_out=fopen("out.txt","w");
	if(fp_out==NULL)
	{
		printf("Error in opening file 'out.txt'\n");
		exit(0);
	}

	fprintf(fp_out,"USN \t STUDENTNAME");

	while(1)
	{
		fscanf(fp_sname,"%s",name);
		fscanf(fp_usn,"%s",usn);

		if(!feof(fp_sname)&&!feof(fp_usn))
		
			fprintf(fp_out,"\n%s\t%s",usn,name);
		else
			break;
	}
	fclose(fp_usn);
	fclose(fp_sname);
	fclose(fp_out);

	return 0;
}

