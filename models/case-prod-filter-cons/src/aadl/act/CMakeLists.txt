cmake_minimum_required(VERSION 3.7.2)

project (proc C)

DeclareCAmkESComponent(CakeMLFilter_i
  SOURCES components/CakeMLFilter_i/src/tb_CakeMLFilter_i.c
  INCLUDES components/CakeMLFilter_i/includes/ includes
)

DeclareCAmkESComponent(Producer_i
  SOURCES components/Producer_i/src/tb_Producer_i.c
  INCLUDES components/Producer_i/includes/ includes
)

DeclareCAmkESComponent(Consumer_i
  SOURCES components/Consumer_i/src/tb_Consumer_i.c
  INCLUDES components/Consumer_i/includes/ includes
)

DeclareCAmkESRootserver(proc.camkes)
