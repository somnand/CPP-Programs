#include<benchmark>
#include<string>
#include<vector>

using namespace std;

static void stringBenchmark(benchmark::State &state)
{

}

//Register the Benchmark
BENCHMARK(stringBenchmark)->DenseRange(0,32);

BENCHMARK_MAIN();
