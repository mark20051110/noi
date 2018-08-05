@echo on
g++ %1.cpp -o %1.exe
for /L %%i in (%2,1,%3) do (
%1 >%1%%i.out <%1%%i.in
)