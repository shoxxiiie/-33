using System;

class Program
{
    static void Main()
    {
        Console.Write("Введіть число: ");
        int num = int.Parse(Console.ReadLine());
        if (num >= 1 && num <= 100)
        {
            if (num % 3 == 0 && num % 5 == 0) Console.WriteLine("Fizz Buzz");
            else if (num % 3 == 0) Console.WriteLine("Fizz");
            else if (num % 5 == 0) Console.WriteLine("Buzz");
            else Console.WriteLine(num);
        }
        else Console.WriteLine("Помилка");

        Console.Write("Введіть число і відсоток: ");
        string[] input = Console.ReadLine().Split();
        Console.WriteLine(double.Parse(input[0]) * double.Parse(input[1]) / 100);

        Console.Write("Введіть чотири цифри: ");
        Console.WriteLine(string.Concat(Console.ReadLine().Split()));

        Console.Write("Введіть шестизначне число: ");
        string num6 = Console.ReadLine();
        if (num6.Length == 6 && int.TryParse(num6, out _))
        {
            Console.Write("Введіть два номери: ");
            string[] indexes = Console.ReadLine().Split();
            char[] arr = num6.ToCharArray();
            (arr[int.Parse(indexes[0]) - 1], arr[int.Parse(indexes[1]) - 1]) = (arr[int.Parse(indexes[1]) - 1], arr[int.Parse(indexes[0]) - 1]);
            Console.WriteLine(new string(arr));
        }
        else Console.WriteLine("Помилка");

        Console.Write("Введіть дату: ");
        DateTime date = DateTime.Parse(Console.ReadLine());
        Console.WriteLine($"{(date.Month <= 2 || date.Month == 12 ? "Winter" : date.Month <= 5 ? "Spring" : date.Month <= 8 ? "Summer" : "Autumn")} {date.DayOfWeek}");

        Console.Write("Введіть температуру і напрямок (1: F -> C, 2: C -> F): ");
        string[] tempInput = Console.ReadLine().Split();
        double temp = double.Parse(tempInput[0]);
        Console.WriteLine(tempInput[1] == "1" ? (temp - 32) * 5 / 9 : temp * 9 / 5 + 32);
    }
}
