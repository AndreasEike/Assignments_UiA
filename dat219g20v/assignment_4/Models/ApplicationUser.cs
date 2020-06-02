using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using Microsoft.AspNetCore.Identity;

namespace assignment_4.Models
{
    public class ApplicationUser : IdentityUser
    {
        public ApplicationUser() {}

        public ApplicationUser(string nickname)
        {
            Nickname = nickname;
        }
        
        [Required]
        [Display(Name="Nickname")]
        public string Nickname { get; set; }

        public List<BlogPost> BlogPosts { get; set; }
    }
}