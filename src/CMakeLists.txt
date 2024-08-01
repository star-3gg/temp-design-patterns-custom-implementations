include_directories(${CMAKE_SOURCE_DIR}/include)

add_subdirectory(client)
add_subdirectory(starwars)

add_executable(${PROJECT_NAME} main.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/include)

# target_link_libraries(${PROJECT_NAME} PRIVATE ClientLib StarWarsLib)
target_link_libraries(${PROJECT_NAME} PRIVATE StarWarsLib)

