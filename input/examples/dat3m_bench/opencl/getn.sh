# #!/bin/bash

# # File to be read
# file="trace.out"

# # Read the file line by line
# while IFS= read -r line; do
#     # Check if the line contains a number greater than 1000
#     if [[ $line =~ [^0-9]*([0-9]+).* ]]; then
#         number=${BASH_REMATCH[1]}
#         if (( number > 1000 )); then
#             echo "Line with number greater than 1000: $line"
#         fi
#     fi
# done < "$file"

#!/bin/bash

# File to be read
file="trace.out"

# Read the file line by line
while IFS= read -r line; do
    # Check if the line contains a number greater than 500 followed by a ')'
    if [[ $line =~ [^0-9]*([0-9]+)\) ]]; then
        number=${BASH_REMATCH[1]}
        if (( number > 500 )); then
            echo "Line with number greater than 500 followed by ')': $line"
        fi
    fi
done < "$file"
