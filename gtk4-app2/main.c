#include <gtk/gtk.h>
#include <pigpio.h>

#define BUTTON_PIN 17 // GPIO17 rpi

static void read_gpio_state(GtkWidget *widget, gpointer data){
	int state = gpioRead(BUTTON_PIN);
	if (state == PI_HIGH){
		g_print("GPIO HIGH\n");
	}
	else{
		g_print("GPIO LOW\n");
	}
}

static void on_activate (GtkApplication *app, gpointer user_data){
	
	GtkWidget *window;
	GtkWidget *button;

	window = gtk_application_window_new (app);
	gtk_window_set_title (GTK_WINDOW (window), "Hello user!");
	gtk_window_set_default_size (GTK_WINDOW (window), 400, 300);

	button = gtk_button_new_with_label("Read GPIO");
    g_signal_connect(button, "clicked", G_CALLBACK(read_gpio_state), NULL);

    gtk_window_set_child(GTK_WINDOW(window), button);

    gtk_widget_show(window);
}

int main (int argc, char **argv){
	
	GtkApplication *app;
	int status;
	
	if (gpioInitialise() == -1) {
		g_print("pigpio setup failed\n");
        return 1;
    }

    gpioSetMode(BUTTON_PIN, PI_INPUT);
	
	app = gtk_application_new ("com.example.GtkApplication", G_APPLICATION_DEFAULT_FLAGS);
	g_signal_connect (app, "activate", G_CALLBACK (on_activate), NULL);
	status = g_application_run (G_APPLICATION (app), argc, argv);
	g_object_unref (app);

	gpioTerminate();
	
	return status;
}

