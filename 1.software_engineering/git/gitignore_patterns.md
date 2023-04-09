| Patterns          | Description |
| :---------------- | ----------- |
| name              | All name files and folders                    |
| name/             | / All files and folders in any _name_ folder  |
| name.file         | All files with the name.file                  |
| /name.file        | Only files in the root folder                 |
| lib/name.file     | Files in specific folders are always realative to root (even not start with / ) |
| *.file	        | Matches anything with .file extention         |
| *name/	        | Matches any folders ending with name          |
| name*.file        | Matches any .file start with name             |
| **/name	        | Match all directories with the name           |
| name/**           | matches everything inside the name folder     |
| name_?.file       | ? Matches a single non-specific character     |
| name[a-zA-Z].file	| [range] matches a single character in the specified range                             |
| name[abc].file	| [set] matches a single character in the specified set of characters                   |
| name[!abc].file	| [!set] matches a single character, except the ones spesified in the set of characters |
| *.file \          | Adding new patterns after a negation will re-ignore a previous negated file \         |
| !name/*.file \    | All files withe .file extention, \                                                    |
| junk.* \          | except the ones in name folder. Unless the file name is junk \                        |