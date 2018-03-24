#include <senml_String_actuator.h>
#include <senml_logging.h>

void SenMLStringActuator::actuate(const void* value, int dataLength, SenMLDataType dataType)
{
    if(dataType == SENML_TYPE_STRING || dataType == CBOR_TYPE_STRING){
        this->set((char*)value);
        if(this->callback)
            this->callback((char*)value);
    }
    else
        log_debug("invalid type");
}






