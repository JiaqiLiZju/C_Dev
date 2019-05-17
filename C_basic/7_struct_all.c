#include <stdio.h>
#include <stdbool.h>

#define LEN 12

struct seat_info {
    int no;
    bool flag;
    char fname[LEN];
    char lname[LEN];
};

//function prototype
void show_opt(void);
void show_no_emp(struct seat_info *, int);
void show_list_emp(struct seat_info *, int);
void show_alp_seat(struct seat_info *, int);
void assign_seat(struct seat_info *, int);
void del_seat(struct seat_info *, int);
void save_file(struct seat_info *, int);

int main(void){
    char ch;
    int cnt = 0;
    //init seat_info array
    struct seat_info seat_info_arr[LEN];
    for (int i=0; i<LEN; i++) {
        seat_info_arr[i].no=i;
        seat_info_arr[i].flag=false;
    }

    show_opt();
    while (ch = getchar()){
        switch (ch){
            case 'a':
                show_no_emp(seat_info_arr, cnt);
                break;
            case 'b':
                show_list_emp(seat_info_arr, cnt);
                break;
            case 'c':
                show_alp_seat(seat_info_arr, cnt);
                break;
            case 'd':
                assign_seat(seat_info_arr, cnt);
                cnt++;
                break;
            case 'e':
                del_seat(seat_info_arr, cnt);
                cnt--;
                break;
            case 'f':
                save_file(seat_info_arr, cnt);
                exit(0);
        }
        show_opt();
    }
    return 0;
}

void show_opt(void){
    printf("a: show_no_emp;\nb: show_list_emp;\nc: show_alp_seat;\nd: assign_seat;\ne: del_seat;\nf: save_file;\n");
}

void assign_seat(struct seat_info * seat_info_arr, int cnt){
    if (cnt < LEN){
        if (! seat_info_arr[cnt].flag){
            seat_info_arr[cnt].flag = true;
            printf("enter fname:\n");
            scanf("%s", seat_info_arr[cnt].fname);
            printf("enter lname:\n");
            scanf("%s", seat_info_arr[cnt].lname);
        }
    }
}

void del_seat(struct seat_info * seat_info_arr, int cnt){
    if (cnt == 0){
        printf("no assigned yet\n");
    }else{
        int no;
        printf("which seat to del\n");
        scanf("%d", &no);
        if (seat_info_arr[no].flag){
            seat_info_arr[no].flag=false;
            //seat_info_arr[no].fname;
            //seat_info_arr[no].lname;
        }else{
            printf("seat not been assigned.\n");
        }
    }
}

void show_no_emp(struct seat_info * seat_info_arr, int cnt){
    int count=0;
    for (int i=0; i<LEN; i++){
        if (seat_info_arr[i].flag) 
            count++;
    }
    if (count!=(LEN-cnt)){
        printf("no empty:\t%d\n",count);
    }
}

void show_list_emp(struct seat_info * seat_info_arr, int cnt){
    for (int i=0; i<LEN; i++){
        if (seat_info_arr[i].flag)
            printf("%d\n",seat_info_arr[i].no);
    }
}

void show_alp_seat(struct seat_info * seat_info_arr, int cnt){
    for (int i=0; i<LEN; i++){
        if (seat_info_arr[i].flag){
            printf("fname:\t%s\tlname:\t%s\n", seat_info_arr[i].fname, seat_info_arr[i].lname);
        }
    }
}

void save_file(struct seat_info * seat_info_arr, int cnt){
    FILE * fp;
    fp = fopen("seat.log", "w+");
    if (fp){
        for (int i=0; i<LEN; i++){
            if (seat_info_arr[i].flag){
                fprintf(fp, "no:\t%d\nfname:\t%s\tlname:\t%s\n", seat_info_arr[i].no, \
                seat_info_arr[i].fname, seat_info_arr[i].lname);
            }
        }
    }
    fclose(fp);
}
