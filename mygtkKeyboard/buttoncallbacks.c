#include <gtk/gtk.h>
#include "buttoncallbacks.h"

void print_hello(GtkWidget *widget, gpointer data) {
    g_print("Hello!%s", (char *)data);
}

void print_echoe(GtkWidget *widget, gpointer data) {
    g_print("%s", (char *)data);
}

void print_send(GtkWidget *widget, gpointer data) {
    g_print("\n%s\n", (char *)data);
}