C learning advance
==================
1. basic std lib

    1.1 assert.c

    1.2 set_jmp.c

2. pointer

    2.1 ptr.c

        2.1.1 pointer basic

        arr_pointer
            1D-arr: arr[i]==*(arr+i)==*(&arr[i])
            2D-arr: arr[i][j]==*(arr[i]+j)==*(*(arr+i)+j2`)
            3D-arr: arr[i][j][k]==*(arr[i][j]+k)==*(*(arr[i]+j)+k)==*(*(*(arr+i)+j)+k)

        struct_pointer
            数据对齐->结构体填充；
            
