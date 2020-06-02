using System.Diagnostics;
using assignment_3.Data;
using Microsoft.AspNetCore.Mvc;
using Microsoft.Extensions.Logging;
using assignment_3.Models;
using System.Linq;

namespace assignment_3.Controllers
{
    public class HomeController : Controller
    {
        private readonly ILogger<HomeController> _logger;
        private readonly PostDbContext _db;

        public HomeController(ILogger<HomeController> logger, PostDbContext db)
        {
            _logger = logger;
            _db = db;
        }
        
        public IActionResult Index()
        {
            return RedirectToAction("Index", "Guestbook");
        }
        
        public IActionResult Privacy()
        {
            return View();
        }

        [ResponseCache(Duration = 0, Location = ResponseCacheLocation.None, NoStore = true)]
        public IActionResult Error()
        {
            return View(new ErrorViewModel {RequestId = Activity.Current?.Id ?? HttpContext.TraceIdentifier});
        }
    }
}