#if defined WIN32
#include <winsock.h>
#else
	#define closesocket close
	#include <sys/socket.h>
	#include <arpa/inet.h>
	#include <unistd.h>
#endif

#include "ClientSocket.h"

int Connect(ClientSocket mySocket, char * ip, int port) {
	struct sockaddr_in sad;
	memset(&sad, 0, sizeof(sad));
	sad.sin_family = AF_INET;
	sad.sin_addr.s_addr = inet_addr(ip);
	sad.sin_port = htons(port);

	return connect(mySocket, (struct sockaddr *) &sad, sizeof(sad));
}

