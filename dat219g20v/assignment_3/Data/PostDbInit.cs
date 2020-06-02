using assignment_3.Models;

namespace assignment_3.Data
{
    public class PostDbInit {
        public static void Init(PostDbContext context)
        {
            context.Database.EnsureDeleted();
            context.Database.EnsureCreated();
            
            //Test data
            context.Posts.Add(new PostEntry("Jack Torrance", "Here's Johnny!", "We had a great time! We were the winter caretakers for this hotel. My family had a bad time, but I enjoyed my stay alot! Loved the parties at the Gold Room."));
            context.Posts.Add(new PostEntry("Mrs. Jackson", "Lovely rooms", "This hotel is wonderful. I stayed in room 237. The bed was comfy, but I especially loved relaxing in the bathtub all day. If it wasn't for someone knocking at my door, I would be lying there all day! "));

            //Save database
            context.SaveChanges();
        }
    }
}