using System;
using assignment_4.Models;
using Microsoft.AspNetCore.Identity;
using Microsoft.Extensions.DependencyInjection;

namespace assignment_4.Data
{
    public class ApplicationDbInitializer
    {
        public static void Initialize(IServiceProvider services)
        {
            var db = services.GetRequiredService<ApplicationDbContext>();

            db.Database.EnsureDeleted();
            db.Database.EnsureCreated();

            var um = services.GetRequiredService<UserManager<ApplicationUser>>();
            var rm = services.GetRequiredService<RoleManager<IdentityRole>>();

            // Create the admin role
            var adminRole = new IdentityRole("Admin");

            // Add the admin role
            rm.CreateAsync(adminRole).Wait();
            
            // Add an admin user (in the admin role)
            var admin = new ApplicationUser
            {
                UserName="andreas@uia.no",
                Nickname="admin",
                Email = "andreas@uia.no",
                EmailConfirmed = true
            };

            um.CreateAsync(admin, "Password1.").Wait();
            um.AddToRoleAsync(admin, adminRole.Name).Wait();
        }
    }
}