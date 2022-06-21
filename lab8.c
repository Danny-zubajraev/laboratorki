#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {
    int ch;
    int isPointPressed = 0;
    double num = 0;
    double d = 10;
    do {
        ch = getch();
        if (ch == 0 || ch == 224) {
            switch (getch()) {
                case 59:    // f1
                    break;
                case 60:    //
                    break;
                case 61:    //
                    break;
                case 62:    //
                    break;
                case 63:    //
                    break;
                case 64:    //
                    break;
                case 65:    //
                    break;
                case 66:    //
                    break;
                case 67:    //
                    break;
                case 68:    //
                    break;
                case 69:    //
                    break;
                case 70:    // f12
                    break;

                case 82:    // ins
                    break;
                case 83:    // del
                    break;
                case 73:    // p_up
                    break;
                case 81:    // p_down
                    break;
                case 71:    // home
                    break;
                case 79:    // end
                    break;
                case 72:    // key up
                    break;
                case 80:    // key down
                    break;
                case 77:    // key right
                    break;
                case 75:    // key left
                    break;
            }

        }
        if (ch == 27 || ch == 13)
        {
            printf("true\n");
            printf("%f", num);
            _getch();
            return (0);
        }
        if (ch == 46) {
            if (isPointPressed == 1) {
                printf("false\n");
                _getch();
                return 0;
            }
            isPointPressed = 1;
        }
        else if (ch >= 48 && ch <= 57) {
            if (isPointPressed == 0)
                num = num * 10 + (ch - 48);
            else {
                num = num + (ch - 48) / d;
                d *= 10;
            }

        }
        else if (ch != 0 && ch != 224) {
            printf("false\n");
            getch();
            return 0;
        }

    } while (1);
    _getch();
    return (0);
}
