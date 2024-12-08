set(EXECUTABLE_NAME helloWorldC)

add_executable(${EXECUTABLE_NAME}
    ball.c
	main.c
)

target_compile_features(${EXECUTABLE_NAME} PRIVATE c_std_99)

target_include_directories(${EXECUTABLE_NAME}
	PRIVATE
	"${PROJECT_BINARY_DIR}"
)
