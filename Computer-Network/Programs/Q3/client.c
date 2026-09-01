#include <stdio.h>
#include <netdb.h>
#include <netinet/in.h>
#include <sys/types.h>
#include <sys/socket.h>

#define SER_TCP_PORT 5035

int main()
{
	int sockfd;
	struct sockaddr_in serv_addr;
	printf("CLIENT\n");
	sockfd = socket(AF_INET, SOCK_STREAM, 0);
	serv_addr.sin_family = AF_INET;
	serv_addr.sin_addr.s_addr = inet_addr("127.0.0.1");
	serv_addr.sin_port = htons(SER_TCP_PORT);
	char buffer[4096];
	connect(sockfd, (struct sockaddr *)&serv_addr, sizeof(serv_addr));
	printf("Enter message to send \n");
	scanf("%s", buffer);
	write(sockfd, buffer, 4096);
	read(sockfd, buffer, 4096);
	printf("File contents: %s\n", buffer);
	close(sockfd);
}