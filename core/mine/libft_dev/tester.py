import subprocess

def test_program():
    # Compile the C program
    compile_process = subprocess.Popen(['gcc', 'dev.c', '-o', 'alpha_test'], stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    compile_out, compile_err = compile_process.communicate()
    
    if compile_process.returncode != 0:
        print("Compilation Error:", compile_err.decode())
        return
    
    # Run the compiled program
    run_process = subprocess.Popen(['./alpha_test'], stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    run_out, run_err = run_process.communicate()
    
    if run_process.returncode != 0:
        print("Runtime Error:", run_err.decode())
        return

    # Output from your C program
    output = run_out.decode()
    print("Program Output:\n", output)

    # Expected output
    expected_output = """Character: Q
Result when uppercase alphabet is passed: 1024
Character: q
Result when lowercase alphabet is passed: 1024
Character: +
Result when non-alphabetic character is passed: 0
"""

    # Compare the program output with the expected output
    if output == expected_output:
        print("Test Passed!")
    else:
        print("Test Failed!")

# Run the tester
test_program()
