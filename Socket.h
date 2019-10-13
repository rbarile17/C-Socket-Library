#ifndef SOCKET_H_
#define SOCKET_H_

typedef int ClientSocket;

int Initialize();
char * GetIPAddress(ClientSocket );
void ClearWinSock();
ClientSocket Create();
int Send(ClientSocket receiver, char * string);
int Receive(ClientSocket sender, char * buffer, int bufferSize);
void Close(ClientSocket mySocket);

#endif /* SOCKET_H_ */



