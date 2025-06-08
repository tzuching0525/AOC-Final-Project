Input: 
每個cycle輸入一個ifmap, `PE_block_H個weight, `PE_block_H個bias，送完`PE_block_W個cycle後，轉到送下一個PE_block的input
總共需要送完`PE_array_size * `PE_block_W次之後結束（可能因為valid和en之間的空隙會超過）
![](./picture/array_input.png)
