#ifndef __TB_AADL_tb_PROC_HW_types__H
#define __TB_AADL_tb_PROC_HW_types__H

#include <stdbool.h>
#include <stdint.h>

#define __TB_OS_CAMKES__
#define TB_MONITOR_READ_ACCESS 111
#define TB_MONITOR_WRITE_ACCESS 222

typedef
  struct SW__Coordinate_Impl {
    int32_t lat;
    int32_t longitude;
    int32_t alt;
  } SW__Coordinate_Impl;

typedef
  struct SW__Mission_Impl {
    SW__Coordinate_Impl wp1;
    SW__Coordinate_Impl wp2;
    SW__Coordinate_Impl wp3;
    SW__Coordinate_Impl wp4;
    SW__Coordinate_Impl wp5;
    SW__Coordinate_Impl wp6;
    SW__Coordinate_Impl wp7;
    SW__Coordinate_Impl wp8;
    SW__Coordinate_Impl wp9;
    SW__Coordinate_Impl wp10;
  } SW__Mission_Impl;

typedef
  struct MC__MISSING_TYPE_Impl {
    int32_t MISSING;
  } MC__MISSING_TYPE_Impl;

typedef
  struct SW__MissionWindow_Impl {
    SW__Coordinate_Impl wp1;
    SW__Coordinate_Impl wp2;
    SW__Coordinate_Impl wp3;
    SW__Coordinate_Impl wp4;
    bool crc;
  } SW__MissionWindow_Impl;

typedef
  struct SW__FlightPattern_Impl {
    int32_t enumAsInt;
  } SW__FlightPattern_Impl;

typedef
  struct SW__Map_Impl {
    SW__Coordinate_Impl wp1;
    SW__Coordinate_Impl wp2;
    SW__Coordinate_Impl wp3;
    SW__Coordinate_Impl wp4;
  } SW__Map_Impl;

typedef
  struct SW__Command_Impl {
    SW__Map_Impl Map;
    SW__FlightPattern_Impl Pattern;
    bool HMAC;
  } SW__Command_Impl;

#endif // __TB_AADL_tb_PROC_HW_types__H
