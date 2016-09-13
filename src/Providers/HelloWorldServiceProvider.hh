<?hh //strict

    namespace HelloWorld\Providers;


    use Plenty\Plugin\ServiceProvider;

    class HelloWorldServiceProvider extends ServiceProvider
    {

      public function register():void
      {
          $this->getApplication()->register(HelloWorldRouteServiceProvider::class);
      }

        public function register():void
        {

        }
    }
