#include <stdio.h>
#include <stdint.h>

struct StructPacked
{
    /* data */
    uint8_t crc         :2;
    uint8_t status      :1;
    uint16_t payload    :12;
    uint8_t bat         :3;
    uint8_t sensor      :3;
    uint8_t longAddr    :8;
    uint8_t shortAddr   :2;
    uint8_t addrMode    :2;
};

int main(void)
{
    uint32_t packetValue;
    printf("Enter the 32bit packet value: ");
    if(scanf("%X",&packetValue) == 0)
    {
        printf("Invalid Input! Exiting...");
        return 0;
    }

    struct StructPacked packet;
    packet.crc =        (uint8_t)(packetValue & 0x3);
    packet.status =     (uint8_t)((packetValue >> 2) & 0x1);
    packet.payload =    (uint16_t)((packetValue >> 3) & 0xFFF);
    packet.bat =        (uint8_t)((packetValue >> 15) & 0x7);
    packet.sensor =     (uint8_t)((packetValue >> 18) &  0x7);
    packet.longAddr =   (uint8_t)((packetValue >> 21) &  0xFF);
    packet.shortAddr =  (uint8_t)((packetValue >> 29) &   0x03);
    packet.addrMode =   (uint8_t)((packetValue >> 31) & 0x1);

    printf("\nPacket Values\n");
    printf("crc      :%#x \n",packet.crc);
    printf("Status   :%#x \n",packet.status);
    printf("Payload  :%#x \n",packet.payload);
    printf("Bat      :%#x \n",packet.bat);
    printf("Sensor   :%#x \n",packet.sensor);
    printf("longAddr :%#x \n",packet.longAddr);
    printf("shortAddr:%#x \n",packet.shortAddr);
    printf("addrMode :%#x \n",packet.addrMode);

    printf("Size of struct is %u \n",sizeof(packet));
    return 0;
}