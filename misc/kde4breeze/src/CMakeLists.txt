# In this CMakeLists.txt we define which files
# are used to compile the application
set(kde4breeze_SRCS
   #application.cpp
   main.cpp
 )

# Set the name of the application
add_executable(kde4breeze ${kde4breeze_SRCS})

# Select which libraries we need to link to
target_link_libraries(kde4breeze Qt::Widgets KF5::CoreAddons KF5::ConfigCore)

# Tell cmake to install the application binary
install(TARGETS kde4breeze DESTINATION ${KDE_INSTALL_LIBDIR}/kconf_update_bin/)
install(FILES kde4breeze.upd DESTINATION ${KDE_INSTALL_KCONFUPDATEDIR})

# Install the color scheme

