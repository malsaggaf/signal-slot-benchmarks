#pragma once

//KDAB lib include
#include "src/kdbindings/signal.h"


//Benchmark include
#include "../../benchmark.hpp"


class benchmark_kdbindings
{
private:
    /* data */
    KDBindings::ScopedConnection reg;


    NOINLINE(void handler(Rng& rng))
    {
        volatile std::size_t a = rng(); (void)a;
    }


public:

    using Signal = KDBindings::Signal<Rng&>;

    
    template <typename Subject, typename Foo>
    static void connect_method(Subject& subject, Foo& foo)
    {
        foo.reg = subject.connect(&foo, &Foo::handler);
    }

    template <typename Subject>
    static void emit_method(Subject& subject, Rng& rng)
    {
        subject.emit(rng);
    }


    static void validate_assert(std::size_t);
    static double construction(std::size_t, std::size_t);
    static double destruction(std::size_t, std::size_t);
    static double connection(std::size_t, std::size_t);
    static double disconnect(std::size_t, std::size_t);
    static double reconnect(std::size_t, std::size_t);
    static double emission(std::size_t, std::size_t);
    static double combined(std::size_t, std::size_t);

    // NOT IMPLEMENTED FOR THIS LIB
    static double threaded(std::size_t, std::size_t);

    // The following is used for report outputs
    static constexpr const char* C_LIB_NAME = "* KDAB KDBindings";
    static constexpr const char* C_LIB_SOURCE_URL = "https://kdab.github.io/KDBindings/annotated.html";
    static constexpr const char* C_LIB_FILE = "benchmark_kdbindings";
    static constexpr const char* C_LIB_IS_HEADER_ONLY = "-";
    static constexpr const char* C_LIB_DATA_STRUCTURE = "?";
    static constexpr const char* C_LIB_IS_THREAD_SAFE = "-";

    static constexpr const std::size_t C_LIB_SIZEOF_SIGNAL = sizeof(Signal);


};

