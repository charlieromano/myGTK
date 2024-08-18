#include <gtk/gtk.h>
#include "exampleapp.h"
#include "exampleappwin.h"
#include "buttoncallbacks.h"

struct _ExampleApp {
    GtkApplication parent;
};

G_DEFINE_TYPE(ExampleApp, example_app, GTK_TYPE_APPLICATION);

static void example_app_init(ExampleApp *app) {}

static void example_app_activate(GApplication *app) {
    GtkBuilder *builder;
    GObject *window;

    builder = gtk_builder_new_from_file("window.ui");

    window = gtk_builder_get_object(builder, "window");
    gtk_window_set_application(GTK_WINDOW(window), GTK_APPLICATION(app));

    GObject *buttonA = gtk_builder_get_object(builder, "buttonA");
    g_signal_connect(buttonA, "clicked", G_CALLBACK(print_echoe), "A");

    GObject *buttonB = gtk_builder_get_object(builder, "buttonB");
    g_signal_connect(buttonB, "clicked", G_CALLBACK(print_echoe), "B");

    GObject *buttonC = gtk_builder_get_object(builder, "buttonC");
    g_signal_connect(buttonC, "clicked", G_CALLBACK(print_echoe), "C");

    GObject *buttonD = gtk_builder_get_object(builder, "buttonD");
    g_signal_connect(buttonD, "clicked", G_CALLBACK(print_echoe), "D");

    GObject *buttonE = gtk_builder_get_object(builder, "buttonE");
    g_signal_connect(buttonE, "clicked", G_CALLBACK(print_echoe), "E");

    GObject *buttonF = gtk_builder_get_object(builder, "buttonF");
    g_signal_connect(buttonF, "clicked", G_CALLBACK(print_echoe), "F");

    GObject *buttonG = gtk_builder_get_object(builder, "buttonG");
    g_signal_connect(buttonG, "clicked", G_CALLBACK(print_echoe), "G");

    GObject *buttonH = gtk_builder_get_object(builder, "buttonH");
    g_signal_connect(buttonH, "clicked", G_CALLBACK(print_echoe), "H");

    GObject *buttonI = gtk_builder_get_object(builder, "buttonI");
    g_signal_connect(buttonI, "clicked", G_CALLBACK(print_echoe), "I");

    GObject *buttonJ = gtk_builder_get_object(builder, "buttonJ");
    g_signal_connect(buttonJ, "clicked", G_CALLBACK(print_echoe), "J");

    GObject *buttonK = gtk_builder_get_object(builder, "buttonK");
    g_signal_connect(buttonK, "clicked", G_CALLBACK(print_echoe), "K");

    GObject *buttonL = gtk_builder_get_object(builder, "buttonL");
    g_signal_connect(buttonL, "clicked", G_CALLBACK(print_echoe), "L");

    GObject *buttonM = gtk_builder_get_object(builder, "buttonM");
    g_signal_connect(buttonM, "clicked", G_CALLBACK(print_echoe), "M");

    GObject *buttonN = gtk_builder_get_object(builder, "buttonN");
    g_signal_connect(buttonN, "clicked", G_CALLBACK(print_echoe), "N");

    GObject *buttonO = gtk_builder_get_object(builder, "buttonO");
    g_signal_connect(buttonO, "clicked", G_CALLBACK(print_echoe), "O");

    GObject *buttonP = gtk_builder_get_object(builder, "buttonP");
    g_signal_connect(buttonP, "clicked", G_CALLBACK(print_echoe), "P");

    GObject *buttonQ = gtk_builder_get_object(builder, "buttonQ");
    g_signal_connect(buttonQ, "clicked", G_CALLBACK(print_echoe), "Q");

    GObject *buttonR = gtk_builder_get_object(builder, "buttonR");
    g_signal_connect(buttonR, "clicked", G_CALLBACK(print_echoe), "R");

    GObject *buttonS = gtk_builder_get_object(builder, "buttonS");
    g_signal_connect(buttonS, "clicked", G_CALLBACK(print_echoe), "S");

    GObject *buttonT = gtk_builder_get_object(builder, "buttonT");
    g_signal_connect(buttonT, "clicked", G_CALLBACK(print_echoe), "T");

    GObject *buttonU = gtk_builder_get_object(builder, "buttonU");
    g_signal_connect(buttonU, "clicked", G_CALLBACK(print_echoe), "U");

    GObject *buttonV = gtk_builder_get_object(builder, "buttonV");
    g_signal_connect(buttonV, "clicked", G_CALLBACK(print_echoe), "V");

    GObject *buttonW = gtk_builder_get_object(builder, "buttonW");
    g_signal_connect(buttonW, "clicked", G_CALLBACK(print_echoe), "W");

    GObject *buttonX = gtk_builder_get_object(builder, "buttonX");
    g_signal_connect(buttonX, "clicked", G_CALLBACK(print_echoe), "X");

    GObject *buttonY = gtk_builder_get_object(builder, "buttonY");
    g_signal_connect(buttonY, "clicked", G_CALLBACK(print_echoe), "Y");

    GObject *buttonZ = gtk_builder_get_object(builder, "buttonZ");
    g_signal_connect(buttonZ, "clicked", G_CALLBACK(print_echoe), "Z");

    GObject *buttonSEND = gtk_builder_get_object(builder, "buttonSEND");
    g_signal_connect(buttonSEND, "clicked", G_CALLBACK(print_send), "SEND");


    gtk_widget_show(GTK_WIDGET(window));
    g_object_unref(builder);
}

static void example_app_open(GApplication *app, GFile **files, int n_files, const char *hint) {
    GList *windows;
    ExampleAppWindow *win;
    int i;

    windows = gtk_application_get_windows(GTK_APPLICATION(app));
    if (windows)
        win = EXAMPLE_APP_WINDOW(windows->data);
    else
        win = example_app_window_new(EXAMPLE_APP(app));

    for (i = 0; i < n_files; i++)
        example_app_window_open(win, files[i]);

    gtk_window_present(GTK_WINDOW(win));
}

static void example_app_class_init(ExampleAppClass *class) {
    G_APPLICATION_CLASS(class)->activate = example_app_activate;
    G_APPLICATION_CLASS(class)->open = example_app_open;
}

ExampleApp *example_app_new(void) {
    return g_object_new(EXAMPLE_APP_TYPE, "application-id", "org.gtk.exampleapp", 
      "flags", G_APPLICATION_HANDLES_OPEN, 
      NULL);
}
