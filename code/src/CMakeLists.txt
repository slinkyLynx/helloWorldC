set(EXECUTABLE_NAME helloWorldC)

add_subdirectory(objects)
add_subdirectory(phys)

add_executable(${EXECUTABLE_NAME}
	main.c
)

target_compile_features(${EXECUTABLE_NAME} PRIVATE c_std_99)

target_include_directories(${EXECUTABLE_NAME}
	PRIVATE
	"${PROJECT_BINARY_DIR}"
	"${PROJECT_SOURCE_DIR}/objects"
	"${PROJECT_SOURCE_DIR}/phys"
)

target_link_libraries(${EXECUTABLE_NAME}
	PRIVATE
	libPhys
	libObjects
)
