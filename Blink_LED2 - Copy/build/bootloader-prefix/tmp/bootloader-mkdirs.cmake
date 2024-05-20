# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "C:/ESP-IDF/esp-idf-v5.2.1/components/bootloader/subproject"
  "E:/Users/Steven/Documents/GitHub/eclipse-workspace/Blink_LED2/build/bootloader"
  "E:/Users/Steven/Documents/GitHub/eclipse-workspace/Blink_LED2/build/bootloader-prefix"
  "E:/Users/Steven/Documents/GitHub/eclipse-workspace/Blink_LED2/build/bootloader-prefix/tmp"
  "E:/Users/Steven/Documents/GitHub/eclipse-workspace/Blink_LED2/build/bootloader-prefix/src/bootloader-stamp"
  "E:/Users/Steven/Documents/GitHub/eclipse-workspace/Blink_LED2/build/bootloader-prefix/src"
  "E:/Users/Steven/Documents/GitHub/eclipse-workspace/Blink_LED2/build/bootloader-prefix/src/bootloader-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "E:/Users/Steven/Documents/GitHub/eclipse-workspace/Blink_LED2/build/bootloader-prefix/src/bootloader-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "E:/Users/Steven/Documents/GitHub/eclipse-workspace/Blink_LED2/build/bootloader-prefix/src/bootloader-stamp${cfgdir}") # cfgdir has leading slash
endif()
