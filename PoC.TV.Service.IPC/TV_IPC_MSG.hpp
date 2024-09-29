#pragma once

typedef struct _IPC_CLIENTE_CHALLENGE_AUTH {
	unsigned char header[15];
	unsigned char challenge[16];
	unsigned char tail[6];
} IPC_CLIENTE_CHALLENGE_AUTH, *PIPC_CLIENTE_CHALLENGE_AUTH;

typedef struct _IPC_SERVER_CHALLENGE_AUTH {
	unsigned char header[15];
	unsigned char challenge[16];
	unsigned char separator[5];
	unsigned char clientChallengeResponse[16];
	unsigned char tail[6];
} IPC_SERVER_CHALLENGE_AUTH, *PIPC_SERVER_CHALLENGE_AUTH;

typedef struct _IPC_CONTROL_IPC {
	unsigned char header[15];
	unsigned char PID[4];
	unsigned char preBody[20];
	unsigned char version[13];
	unsigned char postBody[125];
	unsigned char iDontKnow[3];
} IPC_CONTROL_IPC, * PIPC_CONTROL_IPC;

typedef struct _IPC_SEND_DRIVER_INSTALL_REQ {
	unsigned char header[4];
	unsigned char lengthIPC[4];
	unsigned char restHeader[22];
	// INF string
	unsigned char restOfStringandTail[177];
} IPC_SEND_DRIVER_INSTALL_REQ, * PIPC_SEND_DRIVER_INSTALL_REQ;