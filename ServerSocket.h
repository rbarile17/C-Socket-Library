#ifndef SERVERSOCKET_H_
#define SERVERSOCKET_H_

#include "ClientSocket.h"

typedef int ServerSocket;

int Listen(ServerSocket , int );
int Bind(ServerSocket , char * , int );
Socket Accept(ServerSocket );

#endif /* SERVERSOCKET_H_ */
