#include"main.h"
#include<sys/types.h>
#include<sys/stat.h>

/**
  * create_file-Createsafile
  * @filename:Nameoffile
  * @text_content:Contenttowritetothefile
  *
  * Return:1onsuccess,-1onfailure
  */

int create_file(const char*filename,char*text_content)
{
	int fd,num_written,num_bytes=0;

	if(filename==NULL)
		return(-1);

	fd=open(filename,O_CREAT|O_WRONLY|O_TRUNC,S_IRUSR|S_IWUSR);

	if(fd==-1)
		return(-1);

	if(text_content==NULL)
	{
		close(fd);
		return(1);
	}

	while(text_content[num_bytes])
		num_bytes++;

	num_written=write(fd,text_content,num_bytes);
	close(fd);

	if(num_written==-1||num_written!=num_bytes)
		return(-1);

	return(1);
}

