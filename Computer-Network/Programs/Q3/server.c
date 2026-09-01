#include <stdio.h>
#include <netdb.h>
#include <netinet/in.h>
#include <string.h>

#define SERV_TCP_PORT 5035

int main()
{
	int sockfd, newsockfd, clength;
	struct sockaddr_in serv_addr, cli_addr;
	char buffer[4096];
	sockfd = socket(AF_INET, SOCK_STREAM, 0);
	serv_addr.sin_family = AF_INET;
	serv_addr.sin_addr.s_addr = INADDR_ANY;
	serv_addr.sin_port = htons(SERV_TCP_PORT);
	printf("START\n");
	bind(sockfd, (struct sockaddr *)&serv_addr, sizeof(serv_addr));
	printf("Listening.....\n");
	listen(sockfd, 5);
	clength = sizeof(cli_addr);
	newsockfd = accept(sockfd, (struct sockaddr *)&cli_addr, &clength);
	printf("Connected\n");
	read(newsockfd, buffer, 4096);
	printf("File Name : %s\n", buffer);
	char string[4096];
	FILE *f;
	f = fopen(buffer, "r");
	fseek(f, 0, SEEK_END);
	long fsize = ftell(f);
	fseek(f, 0, SEEK_SET);
	fread(string, fsize, 1, f);
	fclose(f);
	string[fsize] = 0;
	write(newsockfd, string, 4096);
	close(sockfd);
}