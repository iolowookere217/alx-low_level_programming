#!/bin/bash
# a Bash script that takes in a URL, sends a request to that URL, and displays the size of the body of the response in bytes
curl -sI 0.0.0.0:5000 | grep Content-Length | cut -d " " -f 2
