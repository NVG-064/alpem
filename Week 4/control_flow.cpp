/**
    Contoh kasus:
    Mengubah data nama Hari dari angka menjadi nama hari

    1 -> Senin
    2 -> Selasa
    ...
    7 -> Minggu
*/

#include <iostream>

int main()
{
    int day;

    // Input data hari
    std::cout << "Nama hari dalam angka: ";
    std::cin >> day;

    std::cout << "\n\n";

    std::cout << "============================================\n";
    std::cout << "\t\tIF ELSE\n";
    std::cout << "============================================\n\n";

    // Pake If Else
    if (day == 1)
    {
        std::cout << "Senin\n\n";
    }
    else if (day == 2)
    {
        std::cout << "Selasa\n\n";
    }
    else if (day == 3)
    {
        std::cout << "Rabu\n\n";
    }
    else if (day == 4)
    {
        std::cout << "Kamis\n\n";
    }
    else if (day == 5)
    {
        std::cout << "Jum'at\n\n";
    }
    else if (day == 6)
    {
        std::cout << "Sabtu\n\n";
    }
    else if (day == 7)
    {
        std::cout << "Minggu\n\n";
    }
    else
    {
        std::cout << "Not a date\n\n";
    }

    std::cout << "============================================\n";

    std::cout << "\n\n";

    std::cout << "============================================\n";
    std::cout << "\t\tSWITCH CASE\n";
    std::cout << "============================================\n\n";

    // Pake Switch Case
    switch (day)
    {
    case 1:
        std::cout << "Senin\n\n";
        break;
        
    case 2:
        std::cout << "Selasa\n\n";
        break;

    case 3:
        std::cout << "Rabu\n\n";
        break;

    case 4:
        std::cout << "Kamis\n\n";
        break;

    case 5:
        std::cout << "Jum'at\n\n";
        break;

    case 6:
        std::cout << "Sabtu\n\n";
        break;

    case 7:
        std::cout << "Minggu\n\n";
        break;

    default:
        std::cout << "Not a date";
        break;
    }

    std::cout << "============================================\n";

    return 0;
}