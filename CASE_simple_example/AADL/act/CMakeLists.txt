cmake_minimum_required(VERSION 3.8.2)

project (PROC_SW C)



DeclareCAmkESComponent(RadioDriver
  SOURCES components/RadioDriver/src/tb_RadioDriver.c
  INCLUDES components/RadioDriver/includes/ includes
)

DeclareCAmkESComponent(Filter
  SOURCES components/Filter/src/tb_Filter.c
  INCLUDES components/Filter/includes/ includes
)

DeclareCAmkESComponent(FlightPlanner
  SOURCES components/FlightPlanner/src/tb_FlightPlanner.c
  INCLUDES components/FlightPlanner/includes/ includes
)

DeclareCAmkESComponent(WaypointManager
  SOURCES components/WaypointManager/src/tb_WaypointManager.c
  INCLUDES components/WaypointManager/includes/ includes
)

DeclareCAmkESComponent(UARTDriver
  SOURCES components/UARTDriver/src/tb_UARTDriver.c
  INCLUDES components/UARTDriver/includes/ includes
)

DeclareCAmkESComponent(tb_WPM_flight_plan_Monitor
  SOURCES components/tb_Monitors/tb_WPM_flight_plan_Monitor/src/tb_WPM_flight_plan_Monitor.c
  INCLUDES components/tb_Monitors/tb_WPM_flight_plan_Monitor/includes/ includes
)

DeclareCAmkESComponent(tb_UART_waypoint_in_Monitor
  SOURCES components/tb_Monitors/tb_UART_waypoint_in_Monitor/src/tb_UART_waypoint_in_Monitor.c
  INCLUDES components/tb_Monitors/tb_UART_waypoint_in_Monitor/includes/ includes
)

DeclareCAmkESComponent(tb_FPLN_position_status_Monitor
  SOURCES components/tb_Monitors/tb_FPLN_position_status_Monitor/src/tb_FPLN_position_status_Monitor.c
  INCLUDES components/tb_Monitors/tb_FPLN_position_status_Monitor/includes/ includes
)

DeclareCAmkESComponent(tb_WPM_position_status_Monitor
  SOURCES components/tb_Monitors/tb_WPM_position_status_Monitor/src/tb_WPM_position_status_Monitor.c
  INCLUDES components/tb_Monitors/tb_WPM_position_status_Monitor/includes/ includes
)

DeclareCAmkESComponent(tb_FLT_filter_in_Monitor
  SOURCES components/tb_Monitors/tb_FLT_filter_in_Monitor/src/tb_FLT_filter_in_Monitor.c
  INCLUDES components/tb_Monitors/tb_FLT_filter_in_Monitor/includes/ includes
)

DeclareCAmkESComponent(tb_FPLN_recv_map_Monitor
  SOURCES components/tb_Monitors/tb_FPLN_recv_map_Monitor/src/tb_FPLN_recv_map_Monitor.c
  INCLUDES components/tb_Monitors/tb_FPLN_recv_map_Monitor/includes/ includes
)

DeclareCAmkESComponent(tb_RADIO_send_status_in_Monitor
  SOURCES components/tb_Monitors/tb_RADIO_send_status_in_Monitor/src/tb_RADIO_send_status_in_Monitor.c
  INCLUDES components/tb_Monitors/tb_RADIO_send_status_in_Monitor/includes/ includes
)

DeclareCAmkESRootserver(PROC_SW.camkes)
