//请实现一个函数，将一个字符串中的空格替换成“%20”。例如，当字符串为We Are Happy.则经过替换之后的字符串为We%20Are%20Happy。
string replaceSpace(string str) {  
    int num_black=0;  
    int len_str = str.length();  
  
    char array_str[20000] ;  
    for (int i = 0; i < len_str; i++)  
    {         
        array_str[i] = str.c_str()[i];    
        if (str.c_str()[i] == ' ')  
        {  
            num_black++;  
        }  
    }     
  
    int nTemp_Number = num_black;  
    for (int j = len_str - 1; j >= 0; j--)  
    {  
        if (array_str[j] == ' ')  
        {  
            array_str[j + num_black * 2] = '0';  
            array_str[j + num_black * 2 - 1] = '2';  
            array_str[j + num_black * 2 - 2] = '%';  
            num_black--;  
        }  
        else  
        {  
            array_str[num_black * 2 + j] = array_str[j];  
        }  
    }  
    array_str[len_str + 2 * nTemp_Number] = '\0';  
  
    int len = strlen(array_str);  
    string str2;  
    for (int k = 0; k < len; k++)  
    {  
        str2 += array_str[k];  
        cout << array_str[k];  
    }  
    return str2;  
}  
