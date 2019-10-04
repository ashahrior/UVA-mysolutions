#include<bits/stdc++.h>
using namespace std;
string stat[105];
int i_sum[105], v_sum[105], x_sum[105], l_sum[105], c_sum[105];
void roman()
{
    stat[1] = "i", stat[2] = "ii", stat[3] = "iii", stat[4] = "iv", stat[5] = "v";
    stat[6] = "vi", stat[7] = "vii", stat[8] = "viii", stat[9] = "ix", stat[10] = "x";
    stat[11] = "xi", stat[12] = "xii", stat[13] = "xiii", stat[14] = "xiv", stat[15] = "xv";
    stat[16] = "xvi", stat[17] = "xvii", stat[18] = "xviii", stat[19] = "xix", stat[20] = "xx";
    stat[21] = "xxi", stat[22] = "xxii", stat[23] = "xxiii", stat[24] = "xxiv", stat[25] = "xxv";
    stat[26] = "xxvi", stat[27] = "xxvii", stat[28] = "xxviii", stat[29] = "xxix", stat[30] = "xxx";
    stat[31] = "xxxi", stat[32] = "xxxii", stat[33] = "xxxiii", stat[34] = "xxxiv", stat[35] = "xxxv";
    stat[36] = "xxxvi", stat[37] = "xxxvii", stat[38] = "xxxviii", stat[39] = "xxxix", stat[40] = "xl";
    stat[41] = "xli", stat[42] = "xlii", stat[43] = "xliii", stat[44] = "xliv", stat[45] = "xlv";
    stat[46] = "xlvi", stat[47] = "xlvii", stat[48] = "xlviii", stat[49] = "xlix", stat[50] = "l";
    stat[51] = "li", stat[52] = "lii", stat[53] = "liii", stat[54] = "liv", stat[55] = "lv";
    stat[56] = "lvi", stat[57] = "lvii", stat[58] = "lviii", stat[59] = "lix", stat[60] = "lx";
    stat[61] = "lxi", stat[62] = "lxii", stat[63] = "lxiii", stat[64] = "lxiv", stat[65] = "lxv";
    stat[66] = "lxvi", stat[67] = "lxvii", stat[68] = "lxviii", stat[69] = "lxix", stat[70] = "lxx";
    stat[71] = "lxxi", stat[72] = "lxxii", stat[73] = "lxxiii", stat[74] = "lxxiv", stat[75] = "lxxv";
    stat[76] = "lxxvi", stat[77] = "lxxvii", stat[78] = "lxxviii", stat[79] = "lxxix", stat[80] = "lxxx";
    stat[81] = "lxxxi", stat[82] = "lxxxii", stat[83] = "lxxxiii", stat[84] = "lxxxiv", stat[85] = "lxxxv";
    stat[86] = "lxxxvi", stat[87] = "lxxxvii", stat[88] = "lxxxviii", stat[89] = "lxxxix", stat[90] = "xc";
    stat[91] = "xci", stat[92] = "xcii", stat[93] = "xciii", stat[94] = "xciv", stat[95] = "xcv";
    stat[96] = "xcvi", stat[97] = "xcvii", stat[98] = "xcviii", stat[99] = "xcix", stat[100] = "c";

}
void r_counter()
{
    int i, sz, j;
    for(i=1; i<=100; i++)
    {
        sz = stat[i].size();
        for(j=0; j<sz; j++)
        {
            switch(stat[i][j])
            {
            case 'i':
                i_sum[i]++;
                break;
            case 'v':
                v_sum[i]++;
                break;
            case 'x':
                x_sum[i]++;
                break;
            case 'l':
                l_sum[i]++;
                break;
            case 'c':
                c_sum[i]++;
                break;
            }

        }
        i_sum[i]+=i_sum[i-1];
        v_sum[i]+=v_sum[i-1];
        x_sum[i]+=x_sum[i-1];
        l_sum[i]+=l_sum[i-1];
        c_sum[i]+=c_sum[i-1];
    }
}

int main()
{
    roman();
    r_counter();
    //freopen("romin.txt", "r", stdin);
    //freopen( "romout.txt", "w", stdout);
    int n;
    while(cin>>n &&n)
    {
        printf("%d: %d i, %d v, %d x, %d l, %d c\n", n, i_sum[n], v_sum[n], x_sum[n], l_sum[n], c_sum[n]);
    }
    return 0;
}
