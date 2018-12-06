cmake_minimum_required(VERSION 3.8.2)

project (software C)

# add path to connector templates
CAmkESAddTemplatesPath(../../../../components/templates/)

set(cSources "")
set(cIncludes "aux/includes")

list(APPEND cSources aux/src/c_source.c)

DeclareCAmkESComponent(Clock_Driver
  SOURCES ${cSources} components/Clock_Driver/src/tb_Clock_Driver.c
  INCLUDES ${cIncludes} components/Clock_Driver/includes/ includes
)

DeclareCAmkESComponent(UART_Driver
  SOURCES ${cSources} components/UART_Driver/src/tb_UART_Driver.c
  INCLUDES ${cIncludes} components/UART_Driver/includes/ includes
)

DeclareCAmkESComponent(Asset_Waypoint_Manager
  SOURCES ${cSources} components/Asset_Waypoint_Manager/src/tb_Asset_Waypoint_Manager.c
  INCLUDES ${cIncludes} components/Asset_Waypoint_Manager/includes/ includes
)

DeclareCAmkESComponent(Waypoint_Manager
  SOURCES ${cSources} components/Waypoint_Manager/src/tb_Waypoint_Manager.c
  INCLUDES ${cIncludes} components/Waypoint_Manager/includes/ includes
)

DeclareCAmkESComponent(Virtual_Machine
  SOURCES ${cSources} components/Virtual_Machine/src/tb_Virtual_Machine.c
  INCLUDES ${cIncludes} components/Virtual_Machine/includes/ includes
)

DeclareCAmkESComponent(TimeServer
  SOURCES ${cSources} components/TimeServer/src/tb_time_server.c
  INCLUDES ${cIncludes} includes
)

DeclareCAmkESComponent(dispatch_periodic
  SOURCES ${cSources} components/dispatch_periodic/src/tb_dispatch_periodic.c
  INCLUDES ${cIncludes} includes
)

DeclareCAmkESComponent(tb_uart_driver_in_uart_packet_Monitor
  SOURCES ${cSources} components/tb_Monitors/tb_uart_driver_in_uart_packet_Monitor/src/tb_uart_driver_in_uart_packet_Monitor.c
  INCLUDES ${cIncludes} components/tb_Monitors/tb_uart_driver_in_uart_packet_Monitor/includes/ includes
)

DeclareCAmkESComponent(tb_waypoint_manager_in_send_success_Monitor
  SOURCES ${cSources} components/tb_Monitors/tb_waypoint_manager_in_send_success_Monitor/src/tb_waypoint_manager_in_send_success_Monitor.c
  INCLUDES ${cIncludes} components/tb_Monitors/tb_waypoint_manager_in_send_success_Monitor/includes/ includes
)

DeclareCAmkESComponent(tb_waypoint_manager_mission_write_Monitor
  SOURCES ${cSources} components/tb_Monitors/tb_waypoint_manager_mission_write_Monitor/src/tb_waypoint_manager_mission_write_Monitor.c
  INCLUDES ${cIncludes} components/tb_Monitors/tb_waypoint_manager_mission_write_Monitor/includes/ includes
)

DeclareCAmkESComponent(tb_waypoint_manager_waypoint_write_Monitor
  SOURCES ${cSources} components/tb_Monitors/tb_waypoint_manager_waypoint_write_Monitor/src/tb_waypoint_manager_waypoint_write_Monitor.c
  INCLUDES ${cIncludes} components/tb_Monitors/tb_waypoint_manager_waypoint_write_Monitor/includes/ includes
)

DeclareCAmkESComponent(tb_virtual_machine_waypoint_write_Monitor
  SOURCES ${cSources} components/tb_Monitors/tb_virtual_machine_waypoint_write_Monitor/src/tb_virtual_machine_waypoint_write_Monitor.c
  INCLUDES ${cIncludes} components/tb_Monitors/tb_virtual_machine_waypoint_write_Monitor/includes/ includes
)

DeclareCAmkESComponent(tb_asset_waypoint_manager_in_uart_packet_Monitor
  SOURCES ${cSources} components/tb_Monitors/tb_asset_waypoint_manager_in_uart_packet_Monitor/src/tb_asset_waypoint_manager_in_uart_packet_Monitor.c
  INCLUDES ${cIncludes} components/tb_Monitors/tb_asset_waypoint_manager_in_uart_packet_Monitor/includes/ includes
)

DeclareCAmkESComponent(tb_asset_waypoint_manager_waypoint_read_wm_Monitor
  SOURCES ${cSources} components/tb_Monitors/tb_asset_waypoint_manager_waypoint_read_wm_Monitor/src/tb_asset_waypoint_manager_waypoint_read_wm_Monitor.c
  INCLUDES ${cIncludes} components/tb_Monitors/tb_asset_waypoint_manager_waypoint_read_wm_Monitor/includes/ includes
)

DeclareCAmkESComponent(tb_asset_waypoint_manager_waypoint_read_vm_Monitor
  SOURCES ${cSources} components/tb_Monitors/tb_asset_waypoint_manager_waypoint_read_vm_Monitor/src/tb_asset_waypoint_manager_waypoint_read_vm_Monitor.c
  INCLUDES ${cIncludes} components/tb_Monitors/tb_asset_waypoint_manager_waypoint_read_vm_Monitor/includes/ includes
)

DeclareCAmkESComponent(tb_virtual_machine_mission_read_Monitor
  SOURCES ${cSources} components/tb_Monitors/tb_virtual_machine_mission_read_Monitor/src/tb_virtual_machine_mission_read_Monitor.c
  INCLUDES ${cIncludes} components/tb_Monitors/tb_virtual_machine_mission_read_Monitor/includes/ includes
)

DeclareCAmkESRootserver(software.camkes)
