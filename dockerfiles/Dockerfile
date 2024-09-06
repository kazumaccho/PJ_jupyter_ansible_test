FROM python:3.9-slim

RUN apt-get update && \
    apt-get install -y sshpass openssh-client git && \
    apt-get clean

RUN pip install ansible

RUN pip install notebook

WORKDIR /workspace

CMD ["jupyter", "notebook", "--ip=0.0.0.0", "--no-browser", "--allow-root"]


