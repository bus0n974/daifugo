/*
手札の配列を以下のように定義しています．
int cards[14]
[0]~[13]:3,4,...,A,2,Jkrの順で各ランクの枚数
*/
int Group3::qtyOfCards(int table[14])
{
    /*
    カードの合計枚数を返す
    */
    int sum = 0;
    for (int i = 0; i < 14; i++)
    {
        sum += table[i];
    }
    return sum;
}

int Group3::qtyOfCards2(int table[14])
{
    /*
    2枚以上あるカードの合計枚数を返す
    */
    int sum = 0;
    for (int i = 0; i < 14; i++)
    {
        if (table[i] >= 2)
        {
            sum += table[i];
        }
    }
    return sum;
}

int Group3::qtyOfCards3(int table[14])
{
    /*
    1枚のみあるカードの枚数を返す
    */
    int sum = 0;
    for (int i = 0; i < 14; i++)
    {
        if (table[i] == 1)
        {
            sum += table[i];
        }
    }
    return sum;
}

int Group3::qtyOfCards4(int table[14], int rank)
{
    /*
    引数で指定されたrankのカードの合計枚数を返す
    */
    int tmp;
    if (3 <= rank && rank <= 13)
    {
        tmp = rank - 3;
    }
    else if (rank == 1 || rank == 2)
    {
        tmp = rank + 10;
    }
    else
    {
        tmp = 13;
    }
    return tmp = table[tmp];
}

int Group3::getRankMax(int table[14])
{
    /*
    カードが存在する最大のrankの値を返す
    */
    int tmp;
    for (int i = 0; i < 14; i++)
    {
        if (table[i] != 0)
        {
            tmp = i;
        }
    }
    if (0 <= tmp && tmp <= 10)
    {
        tmp = tmp + 3;
    }
    else if (tmp == 11 || tmp == 12)
    {
        tmp = tmp - 10;
    }
    else
    {
        tmp = 13;
    }
    return tmp;
}

int Group3::getRankMin(int table[14])
{
    /*
    カードが存在する最小のrankの値を返す
    */
    int tmp;
    for (int i = 13; i >= 0; i--)
    {
        if (table[i] != 0)
        {
            tmp = i;
        }
    }
    if (0 <= tmp && tmp <= 10)
    {
        tmp = tmp + 3;
    }
    else if (tmp == 11 || tmp == 12)
    {
        tmp = tmp - 10;
    }
    else
    {
        tmp = 13;
    }
    return tmp;
}

