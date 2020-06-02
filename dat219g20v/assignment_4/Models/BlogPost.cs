using System;
using System.ComponentModel.DataAnnotations;

namespace assignment_4.Models
{
    public class BlogPost
    {
        public BlogPost() {}

        public BlogPost(ApplicationUser user, string title, string summary, string content)
        {
            User = user;
            Time = DateTime.UtcNow.ToString("dd.MM.yyyy hh:mm:ss");
            Title = title;
            Summary = summary;
            Content = content;
        }

        public int Id { get; set; }

        //[Required]
        public ApplicationUser User { get; set; }
        
        public string Time { get; set; }
        
        public string Title { get; set; }
        
        public string Summary { get; set; }
        
        [DataType(DataType.MultilineText)]
        public string Content { get; set; }
        
        
    }
}