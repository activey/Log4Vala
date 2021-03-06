public class Log4ValaTest.Layout.SimpleLayout : AbstractTestCase {
	public SimpleLayout() {
		base("Layout.SimpleLayout");
		add_test( "format", format );
		add_test( "format.with.null", format_with_null );
	}

	public void format() {
		var layout = new Log4Vala.Layout.SimpleLayout();
		assert( layout != null );
		assert( layout.header == null );
		assert( layout.footer == null );
		var event = new Log4Vala.LogEvent.with_message(
			"some.test",
			Log4Vala.Level.TRACE,
			"a test message"
		);
		assert( layout.format(event) == "TRACE - a test message" );
	}

	public void format_with_null() {
		var layout = new Log4Vala.Layout.SimpleLayout();
		assert( layout != null );
		assert( layout.header == null );
		assert( layout.footer == null );
		var event = new Log4Vala.LogEvent.with_message(
			"some.test",
			Log4Vala.Level.TRACE,
			null
		);
		assert( layout.format(event) == "TRACE - (null)" );
	}
}
