#ifndef	_PUBLIC_BUF_H_
#define	_PUBLIC_BUF_H_
 
 
extern unsigned char KISS_DATA[1024];	// Decoded KISS data, excluding C0 00 ..C0, length &lt; 128
extern unsigned char KISS_LEN;			// Decoded KISS data length
extern unsigned char KISS_START; // used for checking the HLDC checksum when multiple
extern unsigned char SN_RX_BUFFER[350];	// UI data buffer, length &lt; 128
 
// 
extern uchar ASC_TEMP[300];		// Temporary text data
 
extern uint   TIME_1S;
 
extern uchar GPS_LINK;	   // Is GPS connected?

extern uchar A20_OUT_EN;


#endif

