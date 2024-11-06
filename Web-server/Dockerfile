FROM alpine:latest

RUN apk add --no-cache gcc musl-dev make

WORKDIR /app

COPY . /app

EXPOSE 8080

RUN gcc -o server server.c


CMD ["./server","8080"]
