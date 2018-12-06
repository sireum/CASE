#ifndef __TB_AADL_tb_soi_tk1_types__H
#define __TB_AADL_tb_soi_tk1_types__H

#include <stdbool.h>
#include <stdint.h>

#ifndef TB_VERIFY
#include <stddef.h>
#endif // TB_VERIFY

#define __TB_OS_CAMKES__

#ifndef TB_VERIFY
#define MUTEXOP(OP)\
if((OP) != 0) {\
  fprintf(stderr,"Operation " #OP " failed in %s at %d.\n",__FILE__,__LINE__);\
  *((int*)0)=0xdeadbeef;\
}
#else
#define MUTEXOP(OP) OP
#endif // TB_VERIFY
#ifndef TB_VERIFY
#define CALLBACKOP(OP)\
if((OP) != 0) {\
  fprintf(stderr,"Operation " #OP " failed in %s at %d.\n",__FILE__,__LINE__);\
  *((int*)0)=0xdeadbeef;\
}
#else
#define CALLBACKOP(OP) OP
#endif // TB_VERIFY

typedef uint8_t MissionSoftware__mission_command_impl [23264];

typedef
  struct tb_MissionSoftware__mission_command_impl_container {
    MissionSoftware__mission_command_impl f;
  } tb_MissionSoftware__mission_command_impl_container;

typedef uint8_t SMACCM_DATA__UART_Buffer [255];

typedef
  struct tb_SMACCM_DATA__UART_Buffer_container {
    SMACCM_DATA__UART_Buffer f;
  } tb_SMACCM_DATA__UART_Buffer_container;

typedef
  struct SMACCM_DATA__UART_Packet_i {
    SMACCM_DATA__UART_Buffer buf;
    int32_t buf_len;
  } SMACCM_DATA__UART_Packet_i;

#endif // __TB_AADL_tb_soi_tk1_types__H
