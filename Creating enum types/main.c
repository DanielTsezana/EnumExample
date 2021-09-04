#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Defining enum
    enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};

    // Declaring Variables

    enum Company Google;
    Google = GOOGLE;
    enum Company Xerox;
    Xerox = XEROX;
    enum Company Ebay;
    Ebay = EBAY;

    // Displaying input

    printf ("Value of Google is: %d\n", Google);
    printf ("Value of Xerox is: %d\n", Xerox);
    printf ("Value of Ebay is: %d\n", Ebay);


    return 0;
}
