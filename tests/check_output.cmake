if(NOT DEFINED PROGRAM OR NOT DEFINED EXPECTED_FILE)
    message(FATAL_ERROR "PROGRAM and EXPECTED_FILE must be set.")
endif()
execute_process(
    COMMAND "${PROGRAM}"
    RESULT_VARIABLE status
    OUTPUT_VARIABLE actual
    ERROR_VARIABLE errors
    TIMEOUT 5
)
if(NOT "${status}" STREQUAL "0")
    message(FATAL_ERROR "Program failed (${status}): ${errors}")
endif()
file(READ "${EXPECTED_FILE}" expected)
string(REPLACE "\r\n" "\n" actual "${actual}")
string(REPLACE "\r\n" "\n" expected "${expected}")
if(NOT "${actual}" STREQUAL "${expected}")
    message(FATAL_ERROR "Output mismatch.\nExpected:\n${expected}\nActual:\n${actual}")
endif()
