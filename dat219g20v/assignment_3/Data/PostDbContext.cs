using Microsoft.EntityFrameworkCore;
using assignment_3.Models;

namespace assignment_3.Data
{
    public class PostDbContext : DbContext {
        
        public PostDbContext(DbContextOptions<PostDbContext> options) : base(options) {}
        
        public DbSet<PostEntry> Posts { get; set; }
    }
}