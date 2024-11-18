import std;

export module Module;

export void MyFunc() {

	std::println("\nHello Developers C++23!\n");    

};

export std::generator<int> fibonacci(int n)
{
    int a = 0, b = 1;
    while (n--)
    {
        co_yield b;
        int c = a + b;
        a = b; b = c;
    }
};