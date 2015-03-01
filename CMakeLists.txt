cmake_minimum_required(VERSION 2.6.4)
set(TARGET vk_test2)
project(${TARGET})

add_definitions(-DPROG_NAME=\"${TARGET}\")

set(${TARGET}_SRCS
src/vk_test2.cpp
)

add_definitions(-DLIBEV)


include_directories(
${LIBXML2_INCLUDE_DIR}
)
message (STATUS "check  ${LIBXML2_INCLUDE_DIR}")
if (" ${CMAKE_PARENT_LIST_FILE}")
  message( " no parent!!!!")
endif()

add_executable(${TARGET} ${${TARGET}_SRCS})


#target_link_libraries(
#${TARGET} ${LIBXML2_LIBRARIES} 
#)

remove_definitions(-DPROG_NAME=\"${TARGET}\")
