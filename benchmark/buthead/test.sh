#!/bin/bash

export BENCHMARK_NAME=buthead # TODO
export BENCHMARK_DIR=$CHISEL_BENCHMARK_HOME/benchmark/$BENCHMARK_NAME
export SRC=$BENCHMARK_DIR/$BENCHMARK_NAME.c
export ORIGIN_BIN=$BENCHMARK_DIR/$BENCHMARK_NAME.origin
export REDUCED_BIN=$BENCHMARK_DIR/$BENCHMARK_NAME.reduced
export TIMEOUT=0.1 # TODO: properly modify this
export LOG=$BENCHMARK_DIR/log.txt

source $CHISEL_BENCHMARK_HOME/benchmark/test-base.sh

function clean() {
  rm -f answer
  return 0
}

function desired() {
  { timeout $TIMEOUT $REDUCED_BIN 3 < $BENCHMARK_DIR/sample; } >& answer
  diff answer $BENCHMARK_DIR/correct > /dev/null 2>&1
  result=$?
  return $result
}

function undesired() {
  # TODO
  return 0
}

function desired_disaster() {
  # TODO
  return 0
}

main
