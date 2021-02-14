project(demo)

add_executable(demo main.c commands.c)

ADD_CUSTOM_COMMAND(
   OUTPUT commands.c
   COMMAND gperf -CE -K Option -L ANSI-C -t ${CMAKE_CURRENT_SOURCE_DIR}/commands.gperf > commands.c
   DEPENDS commands.gperf
)

