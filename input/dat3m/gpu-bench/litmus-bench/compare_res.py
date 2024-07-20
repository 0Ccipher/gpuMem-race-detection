import csv

# Function to read the CSV file and return a dictionary with the first column as the key and the second column as the value
def read_csv_to_dict(file_path):
    data_dict = {}
    with open(file_path, 'r') as file:
        reader = csv.reader(file)
        for row in reader:
            if row:
                data_dict[row[0]] = row[1]
    return data_dict

# Read the two CSV files
file1_path = 'test.results.csv'
file2_path = 'expected.csv'

file1_data = read_csv_to_dict(file1_path)
file2_data = read_csv_to_dict(file2_path)

# Compare the dictionaries and find matching keys with different values
differences = []

for key in file1_data:
    if key in file2_data and file1_data[key] != file2_data[key]:
        differences.append((key, file1_data[key], file2_data[key],''))

# Print the differences
# for diff in differences:
#     print(f"{diff[0]}")

for test in differences:
      weak = False
      forall = False
      print('\n______________________________________________________________________________________________')
      with open('./PTX/'+test[0]+'.litmus', 'r') as file:
            lines = file.readlines()
            for line in lines:
                  print(line)
                  if 'weak' in line:
                        weak = True
                  if f'forall' in line:
                        forall = True
      print({test[0]},'weak' if weak else '-', 'forall' if forall else '-' , '(our -',test[1],'exp -',test[2],')')



# If you want to write the differences to a new CSV file, uncomment the following lines:
# output_file_path = 'differences.csv'
# with open(output_file_path, 'w', newline='') as output_file:
#     writer = csv.writer(output_file)
#     writer.writerow(['Key', 'File1_Value', 'File2_Value'])
#     for diff in differences:
#         writer.writerow([diff[0], diff[1], diff[2]])
