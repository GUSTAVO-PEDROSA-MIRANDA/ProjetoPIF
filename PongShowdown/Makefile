CC = gcc
CFLAGS = -I../cli-lib/include -Wall -Wextra
LDFLAGS = -L../cli-lib/build -lcli
TARGET = pongshowdown

all: $(TARGET)

$(TARGET): main.c
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)  

clean:
	rm -f $(TARGET)  
