#include <Wt/WApplication>
#include <Wt/WEnvironment>

// Main application class
class ThemeExample : public Wt::WApplication
{
public:
    // Constructor
    ThemeExample(const Wt::WEnvironment &env)
	: Wt::WApplication(env)
    {
	setCssTheme("polished");

	/*
	 *  Create UI, Set initial values, ...
	 */
    }
}

