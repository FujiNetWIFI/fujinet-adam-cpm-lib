/**
 * FujiNet CPM Library
 */

#ifndef FUJICPMLIB_H
#define FUJICPMLIB_H

#define DEV_FUJI 0x0F

typedef struct
{
  char ssid[32];
  char hostname[64];
  unsigned char localIP[4];
  unsigned char gateway[4];
  unsigned char netmask[4];
  unsigned char dnsIP[4];
  unsigned char macAddress[6];
  unsigned char bssid[6];
  char fn_version[15];
} AdapterConfig;

typedef struct _pcb
{
  unsigned char status;
  unsigned short addr;
  unsigned char active_devices;
} PCB;

typedef struct _dcb
{
  unsigned char status;
  void *buf;
  unsigned short len;
  unsigned long block;
  unsigned char unit;
  unsigned char reserved0;
  unsigned char reserved1;
  unsigned char reserved2;
  unsigned char reserved3;
  unsigned char reserved4;
  unsigned char reserved5;
  unsigned char dev;
  unsigned short max_len;
  unsigned char type;
  unsigned char dev_status;
} DCB;

typedef struct {
  unsigned char hostSlot;
  unsigned char mode;
  unsigned char file[36];
} DeviceSlot;

typedef struct {
  char ssid[32];
  signed char rssi;
} SSIDInfo;

typedef struct
{
  char ssid[32];
  char password[64];
} NetConfig;

typedef unsigned short DirectoryPosition;

extern char response[1024];

PCB *find_pcb(void);
DCB *find_dcb(void);
unsigned char fuji_write(char *buf, unsigned short len);
unsigned char fuji_read(char *buf);
void fuji_reset(void);
void fuji_get_adapter_config(AdapterConfig *ac);
void fuji_get_host_slots(char *h);
void fuji_put_host_slots(char *h);
void fuji_get_device_slots(DeviceSlot *d);
void fuji_put_device_slots(DeviceSlot *d);
unsigned char fuji_scan_network(void);
void fuji_set_ssid(const char *ssid, const char *password);
SSIDInfo *fuji_get_scan_result(char i);
unsigned char fuji_get_wifi_status(void);
void fuji_mount_host_slot(unsigned char h);
void fuji_open_directory(unsigned char hs, char *p, char *f);
char *fuji_read_directory_entry(unsigned char l, unsigned char a);
void fuji_close_directory(void);
void fuji_set_directory_position(DirectoryPosition pos);
void fuji_new_disk(unsigned char hs, unsigned char ds, unsigned long numBlocks, const char *p);
void fuji_mount_device_slot(unsigned char d, unsigned char m);
void fuji_unmount_device_slot(unsigned char d);
void fuji_set_device_filename(unsigned char ds, char *fn);

#endif /* FUJICPMLIB_H */
