#include <SparkPlug/Byteorder.h>

namespace SparkPlug
{

bool IsLittleEndian_()
{
	const int i = 1;
	return ( (*(const char*)&i) != 0 );
}
bool IsLittleEndian = IsLittleEndian_();

}
