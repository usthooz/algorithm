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

function bubble(array)
	local tpl = 0
	for i=1,#array-1 do
		for j=1,#array-i do
			if array[j] > array[j+1] then
				tpl = array[j]
				array[j] = array[j+1]
				array[j+1] = tpl
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
    bubble(array)
	for i,v in ipairs(array) do
		print(v)
	end
end
 
main()