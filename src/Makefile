OS := $(shell uname -s)
CC = g++
FLAG = 
FLAG_C = -c 
CL_11 = -std=c++17 -Wall -Wextra -Werror
PR_NAME = s21_Monitoring_system

ALL_FILE_CC = ./model/model.cc ./model/agents/lib_cpu_agent.cc ./model/agents/lib_memory_agent.cc \
./model/agents/lib_network_agent.cc ./model/utilitys/lib_start_agent.cc ./model/utilitys/utils.cc ./controller/controller.cc \
./model/agents/lib_special_agent.cc

ALL_FILE_H = ./model/model.h ./model/agents/lib_agents.h ./model/utilitys/utils.h ./controller/controller.h
ALL_FILE_O = model.o

ifeq ($(OS), Darwin)
	FLAGS_PLATFORM = -lgtest
else
	FLAGS_PLATFORM = -lgtest -lsubunit -lrt -lm -lpthread -g
endif

all: clean $(PR_NAME).a

bot: $(PR_NAME).a
	@$(CC) $(CL_11) ./model/testbot.cc $(ALL_FILE_CC)
	@./a.out

temp_test:
	@$(CC) $(PR_NAME).cc
	@./a.out

$(PR_NAME).a:
	@$(CC) $(FLAG_C) $(ALL_FILE_CC) $(ALL_FILE_H)
	@ar rcs $(PR_NAME).a $(ALL_FILE_O) 

test: $(PR_NAME).a
	@$(CC) $(CL_11) ./unit_test/unit_test.cc $(ALL_FILE_CC) -o tests.o -lgtest 
	@./tests.o

gcov_report:
	@$(CC) --coverage $(ALL_FILE) ./unit_test/unit_test.cc $(FLAGS_PLATFORM) -o gov_report.o
	@./gov_report.o
	@lcov -t $(PR_NAME)_tests -o $(PR_NAME)_tests.info -c -d .
	@genhtml -o report $(PR_NAME)_tests.info
	@open ./report/index.html

install:
        @make clean
        @mkdir build
        @cd view && qmake && make && make clean && rm Makefile && cd ../ && mv view/view.app build/

uninstall:
	@rm -rf build*

dvi:
	open https://github.com/mrdamos69/MonitoringSystem

dist:
	rm -rf Archive_Monitoring_system/
	mkdir Archive_Monitoring_system/
	mkdir Archive_Monitoring_system/src
	mv  ./build/view.app  Monitoring_system/src/
	tar cvzf Monitoring_system.tgz Monitoring_system/
	rm -rf Monitoring_system/

clean:
	@rm -f *.a
	@rm -f *.o
	@rm -f *.out
	@rm -f *.gcda
	@rm -f *.gcdo
	@rm -f *.gcno
	@rm -f *.info
	@rm -f *.info
	@rm -f ./*/*.gch
	@rm -f ./*/*/*.gch
	@rm -rf build
	@rm -f RESULT_VALGRIND.txt

check:
	@cd view && clang-format -i ./*.cpp ./*.h
	@cd model && clang-format -i ./*.cc ./*.h ./*/*.cc ./*/*.h
	@cd controller && clang-format -i ./*.cc ./*.h
	@cd view && clang-format -i ./*.cpp ./*.h
  
	@cd view && clang-format -n ./*.cpp ./*.h
	@cd model && clang-format -n ./*.cc ./*.h */*.cc ./*/*.h
	@cd controller && clang-format -n ./*.cc ./*.h
	@cd view && clang-format -n ./*.cpp ./*.h

cppcheck:
        @cppcheck --enable=all --suppress=missingIncludeSystem $(ALL_FILE_CC)
