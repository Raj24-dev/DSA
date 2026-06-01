int pre (char x){
    if(x=='+'|| x=='-')return 1;
    else if(x=='*'|| x=='/')return 2;
    return  0;
}