#include "../hpp/benchmark_kdbindings.hpp"

NOINLINE(void benchmark_kdbindings::initialize())
{
    // NOOP
}
NOINLINE(void benchmark_kdbindings::validate_assert(std::size_t N))
{
    return Benchmark<Signal, benchmark_kdbindings>::validation_assert(N);
}    
NOINLINE(double benchmark_kdbindings::construction(std::size_t N, std::size_t limit))
{
    return Benchmark<Signal, benchmark_kdbindings>::construction(N, limit);
}
NOINLINE(double benchmark_kdbindings::destruction(std::size_t N, std::size_t limit))
{
    return Benchmark<Signal, benchmark_kdbindings>::destruction(N, limit);
}
NOINLINE(double benchmark_kdbindings::connection(std::size_t N, std::size_t limit))
{
    return Benchmark<Signal, benchmark_kdbindings>::connection(N, limit);
}
NOINLINE(double benchmark_kdbindings::disconnect(std::size_t N, std::size_t limit))
{
    return Benchmark<Signal, benchmark_kdbindings>::disconnect(N, limit);
}
NOINLINE(double benchmark_kdbindings::reconnect(std::size_t N, std::size_t limit))
{
    return Benchmark<Signal, benchmark_kdbindings>::reconnect(N, limit);
}
NOINLINE(double benchmark_kdbindings::emission(std::size_t N, std::size_t limit))
{
    return Benchmark<Signal, benchmark_kdbindings>::emission(N, limit);
}
NOINLINE(double benchmark_kdbindings::combined(std::size_t N, std::size_t limit))
{
    return Benchmark<Signal, benchmark_kdbindings>::combined(N, limit);
}
NOINLINE(double benchmark_kdbindings::threaded(std::size_t N, std::size_t limit))
{
    return Benchmark<Signal, benchmark_kdbindings>::threaded(N, limit);
}


