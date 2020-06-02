using System.ComponentModel;
using System.ComponentModel.DataAnnotations;

namespace assignment_3.Models
{
    public class PostEntry {
        public PostEntry() {}

        public PostEntry(string name, string title, string message) {
            this.Name = name;
            this.Title = title;
            this.Message = message;

        }

        public int Id { get; set; }
        
        [Required, StringLength(100), DisplayName("Name")]
        public string Name { get; set; }
        
        [Required, StringLength(100), DisplayName("Title")]
        public string Title { get; set; }
        
        [Required, StringLength(1000), DisplayName("Message")]
        public string Message { get; set; }
    }
}