cmake_minimum_required(VERSION 3.8.2)

project (software C)

# add path to connector templates
CAmkESAddTemplatesPath(../../../../components/templates/)

set(cSources "")
set(cIncludes "aux/includes")

list(APPEND cSources aux/src/test.c)

DeclareCAmkESComponent(Clock_Driver
  SOURCES ${cSources} components/Clock_Driver/src/tb_Clock_Driver.c
  INCLUDES ${cIncludes} components/Clock_Driver/includes/ includes
)

DeclareCAmkESComponent(GPIO_Driver
  SOURCES ${cSources} components/GPIO_Driver/src/tb_GPIO_Driver.c
  INCLUDES ${cIncludes} components/GPIO_Driver/includes/ includes
)

DeclareCAmkESComponent(UART_Driver
  SOURCES ${cSources} components/UART_Driver/src/tb_UART_Driver.c
  INCLUDES ${cIncludes} components/UART_Driver/includes/ includes
)

DeclareCAmkESComponent(Decrypt
  SOURCES ${cSources} components/Decrypt/src/tb_Decrypt.c
  INCLUDES ${cIncludes} components/Decrypt/includes/ includes
)

DeclareCAmkESComponent(Encrypt
  SOURCES ${cSources} components/Encrypt/src/tb_Encrypt.c
  INCLUDES ${cIncludes} components/Encrypt/includes/ includes
)

DeclareCAmkESComponent(Server
  SOURCES ${cSources} components/Server/src/tb_Server.c
  INCLUDES ${cIncludes} components/Server/includes/ includes
)

DeclareCAmkESComponent(CAN_Framing
  SOURCES ${cSources} components/CAN_Framing/src/tb_CAN_Framing.c
  INCLUDES ${cIncludes} components/CAN_Framing/includes/ includes
)

DeclareCAmkESComponent(CAN_Driver
  SOURCES ${cSources} components/CAN_Driver/src/tb_CAN_Driver.c
  INCLUDES ${cIncludes} components/CAN_Driver/includes/ includes
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

DeclareCAmkESComponent(tb_can_framing_can2self_frame_Monitor
  SOURCES ${cSources} components/tb_Monitors/tb_can_framing_can2self_frame_Monitor/src/tb_can_framing_can2self_frame_Monitor.c
  INCLUDES ${cIncludes} components/tb_Monitors/tb_can_framing_can2self_frame_Monitor/includes/ includes
)

DeclareCAmkESComponent(tb_virtual_machine_server2self_reboot_Monitor
  SOURCES ${cSources} components/tb_Monitors/tb_virtual_machine_server2self_reboot_Monitor/src/tb_virtual_machine_server2self_reboot_Monitor.c
  INCLUDES ${cIncludes} components/tb_Monitors/tb_virtual_machine_server2self_reboot_Monitor/includes/ includes
)

DeclareCAmkESComponent(tb_server_decrypt2self_Monitor
  SOURCES ${cSources} components/tb_Monitors/tb_server_decrypt2self_Monitor/src/tb_server_decrypt2self_Monitor.c
  INCLUDES ${cIncludes} components/tb_Monitors/tb_server_decrypt2self_Monitor/includes/ includes
)

DeclareCAmkESComponent(tb_decrypt_uart2self_Monitor
  SOURCES ${cSources} components/tb_Monitors/tb_decrypt_uart2self_Monitor/src/tb_decrypt_uart2self_Monitor.c
  INCLUDES ${cIncludes} components/tb_Monitors/tb_decrypt_uart2self_Monitor/includes/ includes
)

DeclareCAmkESComponent(tb_can_framing_server2self_Monitor
  SOURCES ${cSources} components/tb_Monitors/tb_can_framing_server2self_Monitor/src/tb_can_framing_server2self_Monitor.c
  INCLUDES ${cIncludes} components/tb_Monitors/tb_can_framing_server2self_Monitor/includes/ includes
)

DeclareCAmkESComponent(tb_server_vm2self_Monitor
  SOURCES ${cSources} components/tb_Monitors/tb_server_vm2self_Monitor/src/tb_server_vm2self_Monitor.c
  INCLUDES ${cIncludes} components/tb_Monitors/tb_server_vm2self_Monitor/includes/ includes
)

DeclareCAmkESComponent(tb_encrypt_uart2self_Monitor
  SOURCES ${cSources} components/tb_Monitors/tb_encrypt_uart2self_Monitor/src/tb_encrypt_uart2self_Monitor.c
  INCLUDES ${cIncludes} components/tb_Monitors/tb_encrypt_uart2self_Monitor/includes/ includes
)

DeclareCAmkESComponent(tb_server_framing2self_Monitor
  SOURCES ${cSources} components/tb_Monitors/tb_server_framing2self_Monitor/src/tb_server_framing2self_Monitor.c
  INCLUDES ${cIncludes} components/tb_Monitors/tb_server_framing2self_Monitor/includes/ includes
)

DeclareCAmkESComponent(tb_uart_driver_encrypt2self_Monitor
  SOURCES ${cSources} components/tb_Monitors/tb_uart_driver_encrypt2self_Monitor/src/tb_uart_driver_encrypt2self_Monitor.c
  INCLUDES ${cIncludes} components/tb_Monitors/tb_uart_driver_encrypt2self_Monitor/includes/ includes
)

DeclareCAmkESComponent(tb_encrypt_server2self_Monitor
  SOURCES ${cSources} components/tb_Monitors/tb_encrypt_server2self_Monitor/src/tb_encrypt_server2self_Monitor.c
  INCLUDES ${cIncludes} components/tb_Monitors/tb_encrypt_server2self_Monitor/includes/ includes
)

DeclareCAmkESComponent(tb_can_framing_can2self_status_Monitor
  SOURCES ${cSources} components/tb_Monitors/tb_can_framing_can2self_status_Monitor/src/tb_can_framing_can2self_status_Monitor.c
  INCLUDES ${cIncludes} components/tb_Monitors/tb_can_framing_can2self_status_Monitor/includes/ includes
)

DeclareCAmkESComponent(tb_can_driver_framing2self_Monitor
  SOURCES ${cSources} components/tb_Monitors/tb_can_driver_framing2self_Monitor/src/tb_can_driver_framing2self_Monitor.c
  INCLUDES ${cIncludes} components/tb_Monitors/tb_can_driver_framing2self_Monitor/includes/ includes
)

DeclareCAmkESRootserver(software.camkes)
