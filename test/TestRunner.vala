public static int main ( string[] args ) {
	Test.init( ref args );

	TestSuite.get_root().add_suite( new Log4ValaTest.Config().get_suite() );
	TestSuite.get_root().add_suite( new Log4ValaTest.Level().get_suite() );
	TestSuite.get_root().add_suite( new Log4ValaTest.Logger().get_suite() );
	TestSuite.get_root().add_suite( new Log4ValaTest.LoggerConfig().get_suite() );
	TestSuite.get_root().add_suite( new Log4ValaTest.Layout.SimpleLayout().get_suite() );
	TestSuite.get_root().add_suite( new Log4ValaTest.Layout.PatternLayout().get_suite() );

	return Test.run();
}