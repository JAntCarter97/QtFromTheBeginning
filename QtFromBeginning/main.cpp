#include <qapplication>
#include <qwidget.h>
#include <qtextstream.h>
#include <iostream>

int main(int argc, char *argv[])
{
	//QApplication app(argc, argv);
	//QWidget window;
	
	//window.resize(250, 150);
	//window.setWindowTitle("My Window");
	//window.show();

	QTextStream out(stdout);
	QTextStream in(stdin);

	QString a = "Yo this is a qstring woo!";

	a.append(" Sentence two?!");
	a.prepend("Before everything! ");

	out << a << endl;
	out << "This qstring has " << a.count() << " characters" << endl;

	out << a.toUpper() << endl;
	out << a.toLower() << endl;

	out << endl << endl;

	QString qs1 = "QString 1";
	out << qs1 << endl;
	out << qs1[0] << endl;

	QString qs2 = "QString 2";
	out << qs2 << endl;

	std::string cpps1 = "Cpp string 1";
	QString qs3 = cpps1.c_str();
	out << qs3 << endl;

	std::string cpps2 = "Cpp string 2";
	QString qs4 = QString::fromLatin1(cpps2.data(), cpps2.size());
	out << qs4 << endl;

	char s3[] = "Char array";
	QString qs5(s3);
	out << qs5 << endl;

	char* cs = "hello";
	out << cs << endl;


	// String Building
	QString qstring1 = "There are %1 pros.";
	int argu = 99;
	QString newString1 = qstring1.arg(argu);
	out << qstring1 << endl;
	out << newString1 << endl;
	out << qstring1.arg(argu) << endl;
	QString qstring2 = "There are %1 pros %2 of the time.";
	int ar1 = 100;
	int ar2 = 50;
	out << qstring2.arg(ar1).arg(ar2) << endl;

	// Checks QT version
	//std::cout << "QT version: " << qVersion() << std::endl;
	
	// Pause the console
	QString t;
	QString p = "\nEnter any key to continue...";
	out << p << endl;
	in >> t;
	//std::cout << "\nEnter any key to continue . . .\n";
	//std::cin >> t;

	return 0;
}
