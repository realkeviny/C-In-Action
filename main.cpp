#include <iostream>
#include "Calculator.h"
#include "Input.h"
#include "StackSeq.h"

int main()
{
    Calculator TheCalculator;
    bool status;
    do
    {
        // ‰»ÎÃ· æ
        std::cout << "> ";
        Input input;

        status = TheCalculator.Execute(input);
        if (status)
        {
            if (TheCalculator.IsAlpha())
            {
                std::cout << std::boolalpha;
            }

            for (StackSeq seq(TheCalculator.GetStack()); !seq.AtEnd(); seq.Advance())
            {
                std::cout << "    " << seq.GetBool() << std::endl;
            }
        }
    } while (status);
}
