#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
    std::cout << "C++ Standard: " << __cplusplus << "\n";

// If this throws some sort of error, you are not using GCC or clang.
#if defined(__clang__)
    std::cout << "Clang Version: " << __clang_major__ << '.' << __clang_minor__ << '.' << __clang_patchlevel__ << "\n";
#elif defined(__GNUC__) || defined(__GNUG__)
    std::cout << "GCC Version: " << __GNUC__ << '.' << __GNUC_MINOR__ << '.' << __GNUC_PATCHLEVEL__ << "\n";
#endif
}