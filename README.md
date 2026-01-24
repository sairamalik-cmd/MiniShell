
## 📟 Welcome to MiniShell CLI

```text
=========================================
        Welcome to MiniShell CLI
=========================================
Type commands, explore directories,
and run programs; just like a real Linux shell!


🚀 Features

✅ Interactive Linux CLI in C++

✅ Built-in commands: cd, pwd, ls, mkdir, rm, exit

✅ Run external programs like touch, cat, grep, echo

✅ Displays current directory in prompt

✅ Handles Ctrl+D gracefully

## Scope of Work

**MiniShell** will include the following key features:

- Displaying a shell prompt
- Reading user commands
- Parsing/tokenizing input
- Running built-in commands
- Executing external Linux programs
- Looping until user exits
- Error handling for invalid commands


🎮 Example Usage

$ ./MiniShellProject
==================== MiniShell ====================
Type 'exit' to quit the shell

MiniShell>home> mkdir test
MiniShell>home> cd test
MiniShell>test> touch file.txt
MiniShell>test> echo "Hello World" > file.txt
MiniShell>test> cat file.txt
Hello World
MiniShell>test> ls
file.txt  .  ..
MiniShell>test> exit

💡 Tip: The prompt shows your current directory so you always know where you are!

🧠 How It Works

Parse commands:
Your input is split into arguments using a simple parser.

Check built-ins:
Commands like cd, ls, pwd are handled internally.

External commands:
Anything else runs using fork() and execvp().

Loop until exit:
The shell keeps running until you type exit or press Ctrl+D.

📂 Project Structure
MiniShellProject/
├── main.cpp        # Main shell loop
├── parser.h/cpp    # Parses user input
├── commands.h/cpp  # Implements built-in commands
├── process.h/cpp   # Handles external commands
├── utils.h/cpp     # Utility functions (e.g., prompt)

⚡ Compilation
run:
g++ main.cpp parser.cpp commands.cpp process.cpp utils.cpp -o MiniShellProject

🎯 Learning Outcomes

Understand process creation with fork()

Execute external programs with execvp()

Parse and handle CLI input

Implement basic file and directory operations

Build a mini Linux-like CLI shell in C++

🚧 Limitations

No support for pipes (|)

No redirection (> / <) implemented

No command flags (e.g., ls -l)

No quoting or advanced parsing

💡 Future Enhancements

Add input/output redirection

Implement pipes (|)

Support command flags and quoting

Handle environment variables

👩‍💻 Author

Saira Malik
Maham Maryam
