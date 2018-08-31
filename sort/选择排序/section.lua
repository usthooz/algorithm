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

function section(array)
	local tpl = 0
    for i=1,#array-1 do
        min = i
		for j=i+1,#array do
            if array[j] < array[min] then
                min = j
			end
        end
        tpl = array[min]
        array[min] = array[i]
        array[i] = tpl

	end
end
 
function main( ... )
    local array = {4,1,5,2,3}
    print("input:")
    for i,v in ipairs(array) do
		print(v)
	end
    print("output:")
    section(array)
	for i,v in ipairs(array) do
		print(v)
	end
end
 
main()