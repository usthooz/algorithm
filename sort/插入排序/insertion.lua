-- input:
    -- 4
    -- 1
    -- 5
    -- 2
    -- 3
-- output:
    -- 1
    -- 2
    -- 3
    -- 4
    -- 5

function insertion(array)
    local tpl = 0
    -- 注意:lua数组下标从1开始，所以a2下标应该为2
    for i=2,#array do
        if array[i] < array[i-1] then
            local index = i-1
            local temp = array[i]
            while index>=1 and array[index]>temp do
                array[index+1] = array[index]
                index = index-1
            array[index+1] = temp
            end
        end
	end
end
 
function main( ... )
    local array = {4,1,5,2,3}
    print("input:")
    for i,v in ipairs(array) do
		print(v)
	end
    print("output:")
    insertion(array)
	for i,v in ipairs(array) do
		print(v)
	end
end
 
main()