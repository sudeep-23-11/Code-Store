#Docker file
FROM nginx:latest

USER root
LABEL email="sudeep@gmail.com"
LABEL phone="9876543210"

EXPOSE 80/tcp
ENV APP_KEY=appkey

WORKDIR /data
COPY docker.txt /data
ADD docker.tar.xz /data
ADD https://github.com/sudeep-23-11/sudeep-23-11.git /data

RUN apt-get update && apt-get install -y vim
CMD ["nginx", "-g", "daemon off;"]