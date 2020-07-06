FROM ubuntu:20.04

ENV DEBIAN_FRONTEND=nointeractive

RUN apt-get update && \
    apt-get install -y build-essential cmake clang-10 libssl-dev vim
