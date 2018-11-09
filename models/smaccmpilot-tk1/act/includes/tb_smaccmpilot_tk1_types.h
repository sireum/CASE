#ifndef __TB_AADL_tb_smaccmpilot_tk1_types__H
#define __TB_AADL_tb_smaccmpilot_tk1_types__H

#include <stdbool.h>
#include <stdint.h>

#define __TB_OS_CAMKES__
#define TB_MONITOR_READ_ACCESS 111
#define TB_MONITOR_WRITE_ACCESS 222

typedef uint8_t SMACCM_DATA__CAN_Buffer [8];

typedef
  struct tb_SMACCM_DATA__CAN_Buffer_container {
    SMACCM_DATA__CAN_Buffer f;
  } tb_SMACCM_DATA__CAN_Buffer_container;

typedef
  struct SMACCM_DATA__CAN_Frame_i {
    uint32_t id;
    SMACCM_DATA__CAN_Buffer buf;
    uint8_t buf_len;
  } SMACCM_DATA__CAN_Frame_i;

typedef
  struct SMACCM_DATA__Camera_Bounding_Box_i {
    uint16_t left;
    uint16_t right;
    uint16_t top;
    uint16_t bottom;
  } SMACCM_DATA__Camera_Bounding_Box_i;

typedef uint8_t SMACCM_DATA__GIDL [80];

typedef
  struct tb_SMACCM_DATA__GIDL_container {
    SMACCM_DATA__GIDL f;
  } tb_SMACCM_DATA__GIDL_container;

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

#endif // __TB_AADL_tb_smaccmpilot_tk1_types__H
