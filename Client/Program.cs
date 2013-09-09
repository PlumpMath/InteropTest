using System;
using System.Runtime.InteropServices;

namespace Client
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("In C#: 2 + 3 = " + NativeMethods.Add(2, 3));
            Console.WriteLine("Call Test(), the result is: " + NativeMethods.Test());

            Console.ReadKey();
        }
    }

    // Please refer to the below link
    // http://msdn.microsoft.com/en-us/library/aa288468%28v=vs.71%29.aspx
    //
    public static class NativeMethods
    {
        [DllImport("SampleLib", CallingConvention = CallingConvention.Cdecl)]
        public static extern int Add(int a, int b);

        [DllImport("SampleLib", CallingConvention = CallingConvention.Cdecl)]
        public static extern int Sub(int a, int b);

        [DllImport("SampleLib", CallingConvention = CallingConvention.Cdecl)]
        public static extern int Test();
    }
}
