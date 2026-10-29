#include <stdio.h>

int main()
{
    int choice;
    float inr, result;

    printf("\n====================================\n");
    printf("      CURRENCY EXCHANGE SYSTEM\n");
    printf("  Indian Rupees to World Currencies\n");
    printf("====================================\n");

    printf("\n 1. USA - US Dollar");
    printf("\n 2. UK - British Pound");
    printf("\n 3. UAE - Dirham");
    printf("\n 4. Japan - Yen");
    printf("\n 5. Canada - Canadian Dollar");
    printf("\n 6. Australia - Australian Dollar");
    printf("\n 7. Germany - Euro");
    printf("\n 8. China - Yuan");
    printf("\n 9. Saudi Arabia - Riyal");
    printf("\n10. Singapore - Singapore Dollar");
    printf("\n11. Switzerland - Swiss Franc");
    printf("\n12. Russia - Russian Ruble");
    printf("\n13. Bangladesh - Taka");
    printf("\n14. Nepal - Nepalese Rupee");
    printf("\n15. Sri Lanka - Sri Lankan Rupee");
    printf("\n16. Pakistan - Pakistani Rupee");
    printf("\n17. Thailand - Baht");
    printf("\n18. Malaysia - Ringgit");
    printf("\n19. South Korea - Won");
    printf("\n20. Indonesia - Rupiah");
    printf("\n21. New Zealand - NZ Dollar");
    printf("\n22. South Africa - Rand");
    printf("\n23. Turkey - Turkish Lira");
    printf("\n24. Brazil - Brazilian Real");
    printf("\n25. Kuwait - Kuwaiti Dinar");
    printf("\n26. Qatar - Qatari Riyal");
    printf("\n27. Oman - Omani Rial");
    printf("\n28. Bahrain - Bahraini Dinar");
    printf("\n29. Vietnam - Dong");
    printf("\n30. Philippines - Philippine Peso");
    printf("\n31. Mexico - Mexican Peso");
    printf("\n32. Egypt - Egyptian Pound");
    printf("\n33. Afghanistan - Afghani");
    printf("\n34. Norway - Norwegian Krone");
    printf("\n35. Sweden - Swedish Krona");
    printf("\n36. Denmark - Danish Krone");
    printf("\n37. Poland - Zloty");
    printf("\n38. Israel - New Shekel");
    printf("\n39. Nigeria - Naira");
    printf("\n40. Kenya - Kenyan Shilling");
    printf("\n41. Ghana - Ghanaian Cedi");
    printf("\n42. Argentina - Argentine Peso");
    printf("\n43. Chile - Chilean Peso");
    printf("\n44. Colombia - Colombian Peso");
    printf("\n45. Iraq - Iraqi Dinar");
    printf("\n46. Iran - Iranian Rial");
    printf("\n47. Myanmar - Kyat");
    printf("\n48. Cambodia - Riel");
    printf("\n49. Ukraine - Hryvnia");
    printf("\n50. Romania - Romanian Leu");

    printf("\n\nEnter your choice (1-50): ");
    scanf("%d", &choice);

    printf("Enter amount in Indian Rupees: ");
    scanf("%f", &inr);

    if (inr < 0)
    {
        printf("Invalid amount!");
        return 0;
    }

    switch (choice)
    {
        case 1:  result = inr / 87; break;
        case 2:  result = inr / 117; break;
        case 3:  result = inr / 24; break;
        case 4:  result = inr / 0.58; break;
        case 5:  result = inr / 63; break;
        case 6:  result = inr / 57; break;
        case 7:  result = inr / 101; break;
        case 8:  result = inr / 12; break;
        case 9:  result = inr / 23; break;
        case 10: result = inr / 67; break;
        case 11: result = inr / 108; break;
        case 12: result = inr / 1; break;
        case 13: result = inr / 0.71; break;
        case 14: result = inr / 0.625; break;
        case 15: result = inr / 0.28; break;
        case 16: result = inr / 0.31; break;
        case 17: result = inr / 2.5; break;
        case 18: result = inr / 20; break;
        case 19: result = inr / 0.063; break;
        case 20: result = inr / 0.0052; break;
        case 21: result = inr / 50; break;
        case 22: result = inr / 5; break;
        case 23: result = inr / 2; break;
        case 24: result = inr / 16; break;
        case 25: result = inr / 283; break;
        case 26: result = inr / 24; break;
        case 27: result = inr / 226; break;
        case 28: result = inr / 231; break;
        case 29: result = inr / 0.0034; break;
        case 30: result = inr / 1.5; break;
        case 31: result = inr / 5; break;
        case 32: result = inr / 1.8; break;
        case 33: result = inr / 1.2; break;
        case 34: result = inr / 9; break;
        case 35: result = inr / 9; break;
        case 36: result = inr / 12; break;
        case 37: result = inr / 24; break;
        case 38: result = inr / 24; break;
        case 39: result = inr / 0.06; break;
        case 40: result = inr / 0.67; break;
        case 41: result = inr / 5.5; break;
        case 42: result = inr / 0.07; break;
        case 43: result = inr / 0.09; break;
        case 44: result = inr / 0.022; break;
        case 45: result = inr / 0.067; break;
        case 46: result = inr / 0.002; break;
        case 47: result = inr / 0.041; break;
        case 48: result = inr / 0.021; break;
        case 49: result = inr / 2.1; break;
        case 50: result = inr / 20; break;

        default:
            printf("Invalid choice! Select from 1 to 50.");
            return 0;
    }

    printf("\n====================================\n");
    printf("Indian Rupees = Rs. %.2f\n", inr);
    printf("Converted Currency = %.2f\n", result);
    printf("====================================\n");
    printf("Thank you for using our project!\n");

    return 0;
}

