
#include<stdint.h>
#include<stdio.h>

// size of this union is size of biggest member element
// here packetValue is 32 bits, and struct also 32 bits so
// so size of the union is 32 bits
union Packet
{
	uint32_t packetValue;

	struct
	{
		//crc suppose to be 2 bits, but here use unsigned 8-bit integer
		uint32_t crc		:2;
		uint32_t status		:1;
		uint32_t payload	:12;
		uint32_t bat		:3;
		uint32_t sensor		:3;
		uint32_t longAddr	:8;
		uint32_t shortAddr	:2;
		uint32_t addrMode	:1;
	}packetFields;
};


int main(void)
{

	union Packet packet;
	printf("Enter the 32bit packet value:");
	scanf("%X",&packet.packetValue);

	printf("crc      :%#x\n",packet.packetFields.crc);
	printf("status   :%#x\n",packet.packetFields.status);
	printf("payload  :%#x\n",packet.packetFields.payload);
	printf("bat      :%#x\n",packet.packetFields.bat);
	printf("sensor   :%#x\n",packet.packetFields.sensor);
	printf("longAddr :%#x\n",packet.packetFields.longAddr);
	printf("shortAddr:%#x\n",packet.packetFields.shortAddr);
	printf("addrMode :%#x\n",packet.packetFields.addrMode);

	printf("Size of union is %u\n",sizeof(packet));

	while(getchar() != '\n');
	getchar();

	return 0;

}
