using System.Diagnostics;
using assignment_3.Data;
using Microsoft.AspNetCore.Mvc;
using Microsoft.Extensions.Logging;
using assignment_3.Models;
using System.Linq;

namespace assignment_3.Controllers
{
    public class GuestbookController : Controller
    {
        private readonly ILogger<GuestbookController> _logger;
        private readonly PostDbContext _db;

        public GuestbookController(ILogger<GuestbookController> logger, PostDbContext db)
        {
            _logger = logger;
            _db = db;
        }
        
        [HttpGet]
        public IActionResult Index()
        {
            var vm = new PostInfoVM();
            
            vm.Post = new PostEntry();
            vm.Posts = _db.Posts.ToList();
            
            return View(vm);
        }

        [HttpPost]
        public IActionResult Index(PostInfoVM postVm)
        {
            if(ModelState.IsValid){

                _db.Posts.Add(postVm.Post);
                _db.SaveChanges();

                return RedirectToAction(nameof(Index));

            }
            ModelState.Clear();

            return View();
        }


        [ResponseCache(Duration = 0, Location = ResponseCacheLocation.None, NoStore = true)]
        public IActionResult Error()
        {
            return View(new ErrorViewModel {RequestId = Activity.Current?.Id ?? HttpContext.TraceIdentifier});
        }
    }
}