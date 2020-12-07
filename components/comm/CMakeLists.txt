idf_component_register(SRCS "adsCommand.cpp" "JsonCommand.cpp" "SerialCommand.cpp" 
                       INCLUDE_DIRS "."
					   REQUIRES arduino ArduinoJson SpiDma)