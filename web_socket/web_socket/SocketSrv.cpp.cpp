#include<stdio.h>
#include<Winsock2.h>

void main() {
	WORD wVersionRequseted;
	WSADATA wsaData;
	int err;
	wVersionRequseted = MAKEWORD(1, 1);
	err = WSAStartup(wVersionRequseted, &wsaData);
	if (err != 0) {
		return;
	}
	if (LOBYTE(WSADATA.wVersion) != 1 || HIBYTE(wsaData.wVersion) != 1) {
		WSACleanup();
		return;
	}
	SOCKET sockSrv = socket(AF_INET, SOCK_STREAM, 0);
	SOCKADDR_IN addrSrv;
	addrSrv.sin_addr.S_un.S_addr = htonl(INADDR_ANY);
	addrSrv.sin_family = AF_INET;
	addrSrv.sin_port = htons(6000);
	bind(sockSrv, (SOCKADDR*)&addrSrv, sizeof(SOCKADDR));
	listen(sockSrv, 5);
	SOCKADDR_IN addrClient;
	int len = sizeof(SOCKADDR);
	while (true)
	{
		SOCKET sockConn = accept(sockSrv, (SOCKADDR*)&addrClient, &len);
		char sendBuf[100];
		sprintf(sendBuf, "Welcome %s to http://www.njit.edu.cn", inet_ntoa(addrClient.sin_addr));
		send(sockConn, sendBuf, strlen(sendBuf) + 1, 0);
		char recvBuf[100] = { 0 };
		recv(sockConn, recvBuf, 100, 0);
		printf("%s\n", recvBuf);
		while (true)
		{
			recv(sockConn, recvBuf, 100, 0);
			printf("%s\n", recvBuf);
			memset(sendBuf, 0, sizeof(sendBuf));
			stract(sendBuf, "echo");
			stract(sendBuf, recvBuf);
			send(sockConn, sendBuf, strlen(sendBuf) + 1, 0);
			if (strcmp(recvBuf, "end") == 0) { break; }
		}
		closesocket(sockConn);
	}
	return;
}