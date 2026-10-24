#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

struct time{
    unsigned int hour,  minutes, seconds;
};

unsigned int timeToSeconds(struct time t){
    unsigned seconds = 0;

    seconds = t.seconds;
    seconds += t.minutes * 60;
    seconds += t.hour * 60 * 60;
    return seconds;
}

struct time secondsToTime(unsigned int total_seconds){
    struct time t;

    t.hour = total_seconds / 3600;
    t.minutes = (total_seconds - (t.hour * 3600)) / 60;
    t.seconds = (total_seconds - (t.hour * 3600)) - (t.minutes * 60);
    return t;
}

void displayTime(struct time t){
    printf("%02d:%02d:%02d \n", t.hour, t.minutes, t.seconds);
    sleep(1);
}

int main(int argc, char *argv[])
{
    struct time t;
    t.hour = 0;
    t.minutes = 0;
    t.seconds = 0;
    char c;
    
    if(argc == 1){
        fprintf(stderr, "No time paased. Reverting to default time: 60 seconds");
        t.minutes = 1;
    } else{
        while((c = getopt(argc, argv, "h:m:s:")) != -1){
            switch (c)
            {
            case 'h':
                t.hour = atoi(optarg);
                break;
            case 'm':
                t.minutes = atoi(optarg);
                break;
            case 's':
                t.seconds = atoi(optarg);
                break;
            default:
                break;
            }
        }
    }
    // after getting h:m:s from user, main calculation goes here
    unsigned int total_seconds = timeToSeconds(t);

    while (total_seconds > 0){
        struct time final_t = secondsToTime(total_seconds);
        displayTime(final_t);
        total_seconds -= 1;
        // system("clear");  this command is working weird for some reasons.  
    }
    

    return 0;
}

