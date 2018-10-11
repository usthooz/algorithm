C++ 实现二分法查找目标数据的所在下标：

//传入的vec是存放所有数据的容器，item是希望查找的那个值

int dichotomy（vector<int> &vec ,int item）
{
    int index_down =0 ;   //查找范围的下限标记
    int index_up = vec.size() - 1;//查找范围的上限标记，下标从0开始，所以需要减1
    int index_mid = 0;  //
    
    //只要始终存在合理的上下限，且没有找到目标就一直循环
    while( index_down < index_up )
    {
        index_mid = (index_down + index_up)/2 ;
        
        //找到
        if(vec[index_mid] == item)
          return  index_mid ;
        
        //目标数据在中间值的右边
        if(vec[index_mid] < item)
          index_down = index_mid + 1; 
                                                      //+1 ，-1 是为了当查找项在端点时，上下限可以达到相等
        //目标数据在中间值得左边
        if(vec[index_mid] > item)
          index_up = index_mid - 1;
    } 
    
    //没有找到目标数据
    return 0420;
}
