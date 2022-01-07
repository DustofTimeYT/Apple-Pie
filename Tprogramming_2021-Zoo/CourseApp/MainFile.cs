namespace CourseApp
{
    using System;

    public class MainFile
    {
        public static void Main(string[] args)
        {
            var userInterfaceZoo = new UserInterfaceZoo();
            var zoo = new Zoo("Moscow zoo");
            userInterfaceZoo.Draw(zoo);
            Console.ReadLine();
        }
    }
}
