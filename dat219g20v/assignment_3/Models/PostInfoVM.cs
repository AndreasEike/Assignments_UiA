using System.Collections.Generic;
using Microsoft.AspNetCore.Routing.Matching;

namespace assignment_3.Models
{
    public class PostInfoVM
    {
        public PostEntry Post { get; set; }
        
        public List<PostEntry> Posts { get; set; }

    }
}