# Assignment Information Extractor
This C++ program takes a filename in a specific format and extracts relevant information such as the assignment name, username, file name, submission date and submission time.

## Usage
Copy and paste the code into you C++ environment.

Compile and run the code.

Enter the filename when prompted

## Filename Format
The program assumes a specific filename format:

```<AssignmentName>_<Username>_<SubmissionDate>_<SubmissionTime>_<FileName>.cpp``` where,
1. ```<AssignmentName>```: The name of the assignment.
2. ```<Username>```: The username of the person submitting the assignment.
3. ```<SubmissionDate>```: The date of the submission in the YYYY-MM-DD format.
4. ```<SubmissionTime>```: The time of submission in the HH-MM-SS format.
5. ```<FileName>```: The name of the submission file.

## Output

For a filename like ```Project1_JohnDoe_2023-01-15_12:30:45_MyFile.cpp```, the program will output:
```
Assignment Name: Project1
Username: JohnDoe
File Name: MyFile
Submission Date: 2023-01-15
Submission Time: 12:30:45
```
## Note
The program verifies the filename's extension and ensures it is a C++ file (.cpp).

The filename format is assumed to follow the specified pattern.

Feel free to modify the code or adapt it to different filename formats as needed.
