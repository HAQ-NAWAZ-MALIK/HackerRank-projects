 using System;
using System.Collections.Generic;
using System.Linq;

namespace Solution
{
    public class Solution
    {
        public static Dictionarystring, int AverageAgeForEachCompany(ListEmployee employees)
        {
            var result = new Dictionarystring, int();
            foreach (var company in employees.Select(x = x.Company).Distinct().OrderBy(x = x))
            {
                result.Add(company, (int)Math.Round(employees.Where(x = x.Company == company).Average(y = y.Age), 0));
            }

            return result;
        }

        public static Dictionarystring, int CountOfEmployeesForEachCompany(ListEmployee employees)
        {
            var result = new Dictionarystring, int();
            foreach (var company in employees.Select(x = x.Company).Distinct().OrderBy(x = x))
            {
                result.Add(company, employees.Where(x = x.Company == company).Count());
            }

            return result;
        }

        public static Dictionarystring, Employee OldestAgeForEachCompany(ListEmployee employees)
        {
            var result = new Dictionarystring, Employee();
            foreach (var company in employees.Select(x = x.Company).Distinct().OrderBy(x = x))
            {
                result.Add(company, employees.Where(x = x.Company == company).OrderByDescending(y = y.Age).First());
            }

            return result;
        }

        public static void Main()
        {
            int countOfEmployees = int.Parse(Console.ReadLine());

            var employees = new ListEmployee();

            for (int i = 0; i  countOfEmployees; i++)
            {
                string str = Console.ReadLine();
                string[] strArr = str.Split(' ');
                employees.Add(new Employee
                {
                    FirstName = strArr[0],
                    LastName = strArr[1],
                    Company = strArr[2],
                    Age = int.Parse(strArr[3])
                });
            }

            foreach (var emp in AverageAgeForEachCompany(employees))
            {
                Console.WriteLine($The average age for company {emp.Key} is {emp.Value});
            }

            foreach (var emp in CountOfEmployeesForEachCompany(employees))
            {
                Console.WriteLine($The count of employees for company {emp.Key} is {emp.Value});
            }

            foreach (var emp in OldestAgeForEachCompany(employees))
            {
                Console.WriteLine($The oldest employee of company {emp.Key} is {emp.Value.FirstName} {emp.Value.LastName} having age {emp.Value.Age});
            }
        }
    }

    public class Employee
    {
        public string FirstName { get; set; }
        public string LastName { get; set; }
        public int Age { get; set; }
        public string Company { get; set; }
    }
}
