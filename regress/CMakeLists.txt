# Copyright (c) 2018-2022 Yubico AB. All rights reserved.
# Use of this source code is governed by a BSD-style
# license that can be found in the LICENSE file.

add_custom_target(regress ALL)

macro(add_regress_test NAME SOURCES)
	add_executable(${NAME} ${SOURCES})
	target_link_libraries(${NAME} ${_FIDO2_LIBRARY})
	add_test(${NAME} ${NAME})
	add_dependencies(regress ${NAME})
endmacro()

add_custom_command(TARGET regress POST_BUILD
    COMMAND ${CMAKE_CTEST_COMMAND} --output-on-failure
    WORKING_DIRECTORY ${PROJECT_BINARY_DIR})

add_regress_test(regress_assert assert.c)
add_regress_test(regress_cred cred.c)
add_regress_test(regress_dev dev.c)
add_regress_test(regress_es256 es256.c)
