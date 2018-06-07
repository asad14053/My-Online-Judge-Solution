#include <iostream>
using namespace std;

const char* mn[] =
{
    "January", "February", "March", "April", "May", "June",
    "July", "August","September", "October", "November", "December"
};
const char* wn[] = {"Saturday", "Sunday", "Monday", "Tuesday",
                    "Wednesday", "Thursday", "Friday"
                   };
const int md[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool ly(int ye)
{
    if (ye <= 1752)
        return !(ye % 4);
    else
    {
        if (!(ye % 400))
            return true;
        else if (!(ye % 100))
            return false;
        else
            return (!(ye % 4));
    }
}

bool vd(int ye, int mo, int da)
{
    if (ye == 1752 && mo == 9 && da >= 3 && da <= 13)
        return false;
    if (mo > 12)
        return false;
    int d = md[mo - 1];
    if (mo== 2 && ly(ye))
        d++;
    return (da <= d) ? true : false;
}

const char* dw(int ye, int mo, int da)
{
    bool gre= true;
    if (ye < 1752)
        gre = false;
    else if (ye == 1752)
    {
        if (mo < 9)
            gre = false;
        else if (mo== 9)
        {
            if (da < 14)
                gre = false;
        }
    }
    int q = da;
    if (mo< 3)
    {
        ye--;
        mo += 12;
    }
    int m = mo, k = ye % 100, j = ye / 100;
    int h = q + 13 * (m + 1) / 5 + k + k / 4;
    if (gre)
        h += j / 4 + 5 * j;
    else
        h += 5 + 6 * j;
    return wn[h % 7];
}

int main()
{
    while (true)
    {
        int mo, da, ye;
        cin >> mo >> da>> ye;
        if (!mo && !da && !ye)
            break;
        if (vd(ye, mo, da))
            cout << mn[mo- 1] << ' ' << da << ", " << ye << " is a " <<
                 dw(ye, mo, da) << endl;
        else
            cout << mo << '/' << da << '/' << ye << " is an invalid date.\n";
    }
    return 0;
}
