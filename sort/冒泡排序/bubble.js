function bubbleSort(array) {
    var len = array.length;
    for (var i=0;i<len-1;i++)
    {
        for (var j=0;j<len-i-1;j++)
        {
            if (array[j]>array[j+1])
            {
                var temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    } 
}

var arrs = new Array(4, 1, 5, 2, 3);
console.log("old:",arrs)
bubbleSort(arrs)
console.log("sort:",arrs)