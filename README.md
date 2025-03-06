# NoteApp Documentation

## Project Overview
The NoteApp is a simple note-taking application built using the Qt framework. It allows users to create, edit, display, and delete notes. The application features a user-friendly interface designed with Qt Designer.

## Project Structure
The project is organized into the following directories and files:

```
NoteApp
├── src
│   ├── main.cpp          # Entry point of the application
│   ├── mainwindow.cpp    # Implementation of the MainWindow class
│   ├── mainwindow.h      # Declaration of the MainWindow class
│   ├── mainwindow.ui     # Qt Designer file for the main window layout
│   ├── notebook.cpp       # Implementation of the Notebook class
│   ├── notebook.h         # Declaration of the Notebook class
│   └── note.h            # Definition of the Note structure
├── NoteApp.pro           # Qt project file for building the application
└── README.md             # Documentation for the project
```

## Features
- **Add Notes**: Users can create new notes by providing a title and content.
- **Edit Notes**: Existing notes can be modified.
- **Display Notes**: Users can view all their notes in a list format.
- **Delete Notes**: Users can remove notes they no longer need.

## Requirements
- Qt 5 or higher
- C++11 or higher

## Building the Project
To build the project, open the `NoteApp.pro` file in Qt Creator and run the build command. Ensure that all necessary Qt modules are installed.

## Usage
1. Launch the application.
2. Use the menu to add, edit, display, or delete notes.
3. Follow the prompts in the application to manage your notes.

## License
This project is licensed under the MIT License. See the LICENSE file for more details.