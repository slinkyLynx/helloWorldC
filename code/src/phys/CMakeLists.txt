set(LIBRARY_NAME libPhys)

add_library(${LIBRARY_NAME} INTERFACE)

target_compile_features(${LIBRARY_NAME} INTERFACE c_std_99)

target_sources(${LIBRARY_NAME}
	INTERFACE
	physConstants.h
)

target_include_directories(${LIBRARY_NAME}
	INTERFACE
	${CMAKE_CURRENT_SOURCE_DIR}
)
