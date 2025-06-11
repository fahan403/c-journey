//First code
#include <iostream>
using namespace std;

int main() {
    // Integer Types

    int age = 25; // Used for general whole numbers (4 bytes)
    unsigned int daysInYear = 365; // Non-negative whole numbers only

    long population = 7000000000; // Larger integer (platform-dependent, often 8 bytes on Linux)
    long long worldPopulation = 8000000000; // Very large integers (8 bytes)

    unsigned long long distanceToGalaxy = 9223372036854775807; // Only positive huge values

    short temperatureDifference = -20; // Small integer values (-32,768 to 32,767)
    unsigned short maxLightLevel = 65535; // Max positive value in 2 bytes (0 to 65,535)

    // Floating-Point Types

    float gpa = 3.75f; // Decimal number with ~6 digits precision (4 bytes)
    double pi = 3.141592653589793; // More precise decimal (15–16 digits, 8 bytes)
    long double largePi = 3.1415926535897932384626L; // Even more precision (platform-dependent)

    // Character Types

    char grade = 'A'; // Single character (1 byte, ASCII)
    unsigned char level = 255; // Use for byte-level data or color values

    wchar_t unicodeChar = L'Ω'; // Wide character (usually 2 or 4 bytes for Unicode support)
    char16_t emoji16 = u'😀'; // UTF-16 character (for internationalization)
    char32_t emoji32 = U'🌍'; // UTF-32 character (full Unicode range)

    // Output all variables to demonstrate usage
    cout << "Age: " << age << endl;
    cout << "Days in Year: " << daysInYear << endl;
    cout << "Population: " << population << endl;
    cout << "World Population: " << worldPopulation << endl;
    cout << "Distance to Galaxy: " << distanceToGalaxy << endl;
    cout << "Temperature Difference: " << temperatureDifference << endl;
    cout << "Max Light Level: " << maxLightLevel << endl;
    cout << "GPA: " << gpa << endl;
    cout << "PI: " << pi << endl;
    cout << "Large PI: " << largePi << endl;
    cout << "Grade: " << grade << endl;
    cout << "Level (byte): " << (int)level << endl; // Cast to int to print as number
    wcout << L"Unicode Char: " << unicodeChar << endl; // Use wcout for wide characters

    return 0;
}


/*| Data Type            | Size (Typical) | Range / Precision                            | Description / Use Case                               | Notes                         |
| -------------------- | -------------- | -------------------------------------------- | ---------------------------------------------------- | ----------------------------- |
| `int`                | 4 bytes        | -2,147,483,648 to 2,147,483,647              | General whole numbers, counting, indexing            | Most commonly used integer    |
| `unsigned int`       | 4 bytes        | 0 to 4,294,967,295                           | Non-negative integers (sizes, counts, array indexes) | No negative numbers allowed   |
| `short`              | 2 bytes        | -32,768 to 32,767                            | Small integers, saves memory                         | For smaller ranges            |
| `unsigned short`     | 2 bytes        | 0 to 65,535                                  | Small positive numbers                               |                               |
| `long`               | 4 or 8 bytes   | Larger range than `int` (platform-dependent) | Larger whole numbers (populations, big counters)     | Often 8 bytes on 64-bit Linux |
| `unsigned long`      | 4 or 8 bytes   | 0 to large positive number                   | Large positive numbers                               |                               |
| `long long`          | 8 bytes        | Very large integers                          | Very large whole numbers, timestamps, financial data |                               |
| `unsigned long long` | 8 bytes        | 0 to very large positive number              | Large positive whole numbers                         |                               |
*/



/*| Floating Point Type | Size (Typical) | Precision                             | Description / Use Case                                   | Notes                            |
| ------------------- | -------------- | ------------------------------------- | -------------------------------------------------------- | -------------------------------- |
| `float`             | 4 bytes        | \~6–7 decimal digits                  | Basic decimal numbers, 3D graphics, sensors              | Less precise, uses less memory   |
| `double`            | 8 bytes        | \~15–16 decimal digits                | Most decimal calculations, scientific and financial data | Most commonly used floating type |
| `long double`       | 8–16 bytes\*   | Higher precision (platform-dependent) | High-precision scientific computations                   | More precise, but less portable  |
*/
//----------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------WRITE CODE FROM HERE--------------------------------------------------------------------------------------------






