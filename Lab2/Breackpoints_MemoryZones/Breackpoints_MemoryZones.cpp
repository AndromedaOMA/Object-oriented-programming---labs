#include <iostream>
#include <climits>

constexpr uint32_t MAX_SIZE = 4;

int main()
{
    uint8_t corruptedData[MAX_SIZE]{};
    uint8_t goodData[MAX_SIZE]{};

    for (int8_t i = 0u; i < MAX_SIZE; i++)
    {
        *(reinterpret_cast<uint32_t*>(goodData + i)) = 0u;
    }

    for (int8_t i = 0; i < MAX_SIZE; i++)
    {
        *(reinterpret_cast<uint32_t*>(corruptedData + i)) = UINT_MAX;
    }


    for (uint8_t i = 0u; i < MAX_SIZE; i++)
    {
        std::cout << "Corrupted data value <" << static_cast<uint32_t>(i) << "> = " << static_cast<uint32_t>(corruptedData[i]) << std::endl;
    }


    for (uint8_t i = 0u; i < MAX_SIZE; i++)
    {
        std::cout << "Good data value <" << static_cast<uint32_t>(i) << "> = " << static_cast<uint32_t>(goodData[i]) << std::endl;
    }

    std::cout.flush();

    return 0;
}